#include "demo07_event_propagate_process.h"

#include <QApplication>
#include <QDebug>
#include <QVBoxLayout>

EventPropagateProcessDemo::EventPropagateProcessDemo(QWidget* parent)
    : QWidget(parent),
      m_lbEventPropagate(new EventPropagateLabel(this))
{
  QVBoxLayout* vLayout = new QVBoxLayout(this);
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  m_lbEventPropagate->setStyleSheet(
    "background-color: rgba(255, 220, 220, 200);"
    "padding: 10;");
  m_lbEventPropagate->setSizePolicy(QSizePolicy::Expanding,
                                    QSizePolicy::Expanding);
  m_lbEventPropagate->setWordWrap(true);
  m_lbEventPropagate->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
  m_lbEventPropagate->setText(
    "在有边框窗口下运行此Demo\n\n"
    "01. EventPropagateProcessDemo::eventFilter()\n"
    "按住 Shift 键返回 true 停止传递事件，否则返回 false 事件传递至 02\n\n"
    "02. EventPropagateLabel::event()\n"
    "单击左键返回 true 停止传递事件，单击右键返回 false 事件传递至 04 "
    "，单击其他键返回 QLabel::event() 事件传递至 03\n\n"
    "03. EventPropagateLabel::mousePressEvent()\n"
    "按住 Ctrl 键返回 true 停止传递事件，否则返回 false 事件传递至 04\n\n"
    "04. EventPropagateProcessDemo::mousePressEvent()\n"
    "父控件事件，02 与 03 "
    "在某些情况下会将事件传递给父控件的特定事件处理方法，mousePressEvent() "
    "处理鼠标单击按下事件");

  vLayout->addWidget(m_lbEventPropagate);

  auto toplevelWindow = parentWidget();
  while (toplevelWindow->windowType() != Qt::Window)
  { // windowType() 为 Qt::Window 表示顶层窗口
    toplevelWindow = toplevelWindow->parentWidget();
  }

  m_lbEventPropagate->installEventFilter(this);
  m_lbEventPropagate->installEventFilter(toplevelWindow);
}

EventPropagateProcessDemo::~EventPropagateProcessDemo()
{
}

void EventPropagateProcessDemo::mousePressEvent(QMouseEvent*)
{
  qDebug()
    << "---------- 04. EventPropagateProcessDemo::mousePressEvent ----------";
}

bool EventPropagateProcessDemo::eventFilter(QObject* watched, QEvent* event)
{
  if (watched == m_lbEventPropagate &&
      event->type() == QEvent::MouseButtonPress)
  {
    qDebug()
      << "\n\n---------- 01. EventPropagateProcessDemo::eventFilter ----------";

    // 停止事件传递：事件到此结束，不再传递
    // 返回 true
    if (QApplication::keyboardModifiers() == Qt::ShiftModifier)
    { // 如果按住 shift 键，事件将停止传递，只有该方法会打印该事件的信息
      qDebug() << "return true";
      return true;
    }

    // 继续事件传递：事件将继续传递给 event() 方法
    // 1. 返回 false
    // return false;
    // 2. 返回父类 eventFilter() 方法的返回值，源码可见仍 return false
    // return QWidget::eventFilter(watched, event);
    if (QApplication::keyboardModifiers() != Qt::ShiftModifier)
    { // 如果未按 shift 键，事件将到达 EventPropagateLabel::event()
      qDebug() << "return false";
      return false;
    }
  }

  return QWidget::eventFilter(watched, event);
}

// ---------- EventPropagateLabel ----------

EventPropagateLabel::EventPropagateLabel(QWidget* parent)
    : QLabel(parent)
{
}

EventPropagateLabel::~EventPropagateLabel()
{
}

bool EventPropagateLabel::event(QEvent* event)
{
  if (event->type() == QEvent::MouseButtonDblClick)
  { // 过滤鼠标双击事件
    return true;
  }
  if (event->type() != QEvent::MouseButtonPress)
  { // 非鼠标事件，直接调用父类的 event() 方法
    return QLabel::event(event);
  }

  qDebug() << "---------- 02. EventPropagateLabel::event ----------";

  auto mouseEvent = static_cast<QMouseEvent*>(event);

  if (mouseEvent->button() == Qt::LeftButton)
  { // 返回 true 表示事件已处理，不再继续传递，到此为止
    qDebug() << "return true;";
    return true;
  }
  else if (mouseEvent->button() == Qt::RightButton)
  { // 返回 false 表示事件未识别，本类不再继续处理，
    // 事件会传递给【父控件】，由【父控件】的 event() 方法进行处理
    qDebug() << "return false;";
    return false;
  }

  // 调用【父类】的 event() 方法，将事件继续分发给本类中对应该的事件处理函数
  qDebug() << "return QLabel::event(event);";
  return QLabel::event(event);
}

void EventPropagateLabel::mousePressEvent(QMouseEvent* event)
{
  qDebug() << "---------- 03. EventPropagateLabel::mousePressEvent ----------";

  /**
   * 事件处理：完成事件处理后，可以选择接受 (accept) 或忽略事件 (ignore)
   * Qt 框架传递过来的事件 event 包含一个标识位 m_accept
   * 将其设置为 true 表示接受，该事件的传递到此为止，不会再传递给其父控件
   * 将其设置为 false 表示忽略，该事件会再传递给其父控件
   */

  // 接受事件：通过 event->accept() 来完成
  // 由于 m_accept 标识位默认为 true，因此无需显式调用 event->accept()
  if (QApplication::keyboardModifiers() == Qt::ControlModifier)
  { // 如果按住 ctrl 键，接受事件，只有该类会打印该事件的信息
    qDebug() << "event->accept();";
    event->accept();
  }

  // 忽略事件：通过 event->ignore() 来完成
  // 1. 调用 event->ignore() 将 m_accept 标识位置为 false
  // event->ignore();
  // 2. 传递给父控件，在源码中可发现，父控件仍调用 event->ignore()
  // QLabel::mousePressEvent(event);
  if (QApplication::keyboardModifiers() != Qt::ControlModifier)
  { // 如果未按 ctrl 键，忽略事件，其父控件也会打印该事件的信息
    qDebug() << "event->ignore();";
    event->ignore();
  }
}
