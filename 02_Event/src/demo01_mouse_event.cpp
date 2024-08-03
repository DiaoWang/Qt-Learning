#include "demo01_mouse_event.h"

#include <QDebug>
#include <QPoint>
#include <QString>

MouseEventDemo::MouseEventDemo(QWidget* parent)
    : DemoBase(parent),
      m_eventFilterCount(0),
      m_lbEventFilter(new QLabel(this)),
      m_wgt(new QWidget(this)),
      m_lbCube(new QLabel(m_wgt))
{
  auto const labelHeight = m_label->height();

  // 移除默认创建的 QLabel
  m_vLayout->removeWidget(m_label);
  delete m_label;

  m_label = new MouseEventLabel(this);
  m_label->setFrameShape(QFrame::NoFrame);
  m_label->setAlignment(Qt::AlignCenter);
  m_label->setFixedHeight(labelHeight);
  m_label->setStyleSheet("background-color: rgba(255, 220, 220, 200);");

  m_lbEventFilter->setFrameStyle(m_label->frameStyle());
  m_lbEventFilter->setAlignment(m_label->alignment());
  m_lbEventFilter->setFixedHeight(m_label->height());
  m_lbEventFilter->setStyleSheet("background-color: rgba(200, 220, 255, 200);");

  m_lbCube->setFrameShape(QFrame::NoFrame);
  m_lbCube->setAlignment(Qt::AlignCenter);
  m_lbCube->setFixedWidth(80);
  m_lbCube->setFixedHeight(80);
  m_lbCube->setStyleSheet("background-color: rgb(255, 150, 150);");
  m_lbCube->setText("左键拖动\n右键复位");

  m_vLayout->addWidget(m_label);
  m_vLayout->addWidget(m_lbEventFilter);
  m_vLayout->addWidget(m_wgt);

  // 安装事件过滤器，m_lbEventFilter 的所有事件受到 this 监控
  m_lbEventFilter->installEventFilter(this);
  m_lbCube->installEventFilter(this);
  m_wgt->installEventFilter(this);
}

MouseEventDemo::~MouseEventDemo()
{
}

void MouseEventDemo::moveToCenter(const QWidget& parent, QWidget& children)
{
  int pos_x = parent.size().width() / 2 - children.size().width() / 2;
  int pos_y = parent.size().height() / 2 - children.size().height() / 2;
  children.move(pos_x, pos_y);
}

bool MouseEventDemo::eventFilter(QObject* watched, QEvent* event)
{
  if (m_lbEventFilter == watched)
  {
    // 判断事件类型
    if (event->type() == QEvent::Enter)
    {
      m_lbEventFilter->setText(QString("QWidget::eventFilter::QEvent::Enter %1")
                                 .arg(++m_eventFilterCount));
    }
    else if (event->type() == QEvent::Leave)
    {
      m_lbEventFilter->setText(QString("QWidget::eventFilter::QEvent::Leave %1")
                                 .arg(++m_eventFilterCount));
    }
  }
  else if (m_lbCube == watched)
  {
    if (event->type() == QEvent::MouseButtonPress)
    {
      auto mouseEvent = static_cast<QMouseEvent*>(event);
      if (mouseEvent->button() == Qt::LeftButton)
      {
        // 记录 m_lbCube 上次位置
        m_lastPosCube = m_lbCube->pos();
        // 记录鼠标上次位置
        m_lastPosMouse = mouseEvent->globalPosition();
      }
      else if (mouseEvent->button() == Qt::RightButton)
      {
        moveToCenter(*m_wgt, *m_lbCube);
      }
    }
    else if (event->type() == QEvent::MouseMove)
    {
      auto mouseEvent = static_cast<QMouseEvent*>(event);

      if (!(mouseEvent->buttons() & Qt::LeftButton))
      {
        return QWidget::eventFilter(watched, event);
      }

      auto curPosMouse = mouseEvent->globalPosition();
      auto dstPosCube = curPosMouse - m_lastPosMouse + m_lastPosCube;

      // 限制移动范围在窗体内部
      int max_x = m_wgt->width() - m_lbCube->width(); // 计算x坐标最大值
      int max_y = m_wgt->height() - m_lbCube->height(); // 计算y坐标最大值
      if (dstPosCube.x() < 0)
      {
        dstPosCube.setX(0);
      }
      else if (dstPosCube.x() > max_x)
      {
        dstPosCube.setX(max_x);
      }
      if (dstPosCube.y() < 0)
      {
        dstPosCube.setY(0);
      }
      else if (dstPosCube.y() > max_y)
      {
        dstPosCube.setY(max_y);
      }

      // 移动到新位置
      m_lbCube->move(dstPosCube.toPoint());
    }
  }
  else if (m_wgt == watched)
  {
    if (event->type() == QEvent::Resize)
    {
      moveToCenter(*m_wgt, *m_lbCube);
    }
  }

  return QWidget::eventFilter(watched, event);
}

// ---------- MouseEventLabel ----------

MouseEventLabel::MouseEventLabel(QWidget* parent)
    : QLabel(parent),
      m_eventCount(0),
      m_isMovable(false)
{
}

MouseEventLabel::~MouseEventLabel()
{
}

void MouseEventLabel::enterEvent(QEnterEvent* event)
{
  setText(QString("QWidget::enterEvent %1").arg(++m_eventCount));

  QWidget::enterEvent(event);
}

void MouseEventLabel::leaveEvent(QEvent* event)
{
  setText(QString("QWidget::leaveEvent %1").arg(++m_eventCount));
  QWidget::leaveEvent(event);
}

void MouseEventLabel::mousePressEvent(QMouseEvent* event)
{
  // qDebug() << "QWidget::mousePressEvent" << event->button() << event->pos()
  //          << event->globalPosition();

  QString strArg;
  if (event->button() & Qt::LeftButton)
  {
    strArg += "左键";
  }
  else if (event->button() & Qt::RightButton)
  {
    strArg += "右键";
  }
  else if (event->button() & Qt::MiddleButton)
  {
    strArg += "中键";
  }
  strArg +=
    QString(" 坐标(%1, %2)").arg(event->pos().x()).arg(event->pos().y());

  setText(QString("QWidget::mousePressEvent\n%1").arg(strArg));

  QWidget::mousePressEvent(event);
}

void MouseEventLabel::mouseReleaseEvent(QMouseEvent* event)
{
  // qDebug() << "QWidget::mouseReleaseEvent" << event->button() << event->pos()
  //          << event->globalPosition();

  QString strArg;
  if (event->button() & Qt::LeftButton)
  {
    strArg += "左键";
  }
  else if (event->button() & Qt::RightButton)
  {
    strArg += "右键";
  }
  else if (event->button() & Qt::MiddleButton)
  {
    strArg += "中键";
  }
  strArg +=
    QString(" 坐标(%1, %2)").arg(event->pos().x()).arg(event->pos().y());

  setText(QString("QWidget::mouseReleaseEvent\n%1").arg(strArg));

  QWidget::mouseReleaseEvent(event);
}

void MouseEventLabel::mouseMoveEvent(QMouseEvent* event)
{
  // qDebug() << "QWidget::mouseMoveEvent" << event->buttons() << event->pos()
  //          << event->globalPosition();

  QString strArg;
  if (event->buttons() & Qt::LeftButton)
  {
    strArg += "左键 | ";
  }
  if (event->buttons() & Qt::RightButton)
  {
    strArg += "右键 | ";
  }
  if (event->buttons() & Qt::MiddleButton)
  {
    strArg += "中键 | ";
  }
  strArg.chop(2);
  strArg += QString("坐标(%1, %2)").arg(event->pos().x()).arg(event->pos().y());

  setText(QString("QWidget::mouseMoveEvent\n%1").arg(strArg));

  QWidget::mouseMoveEvent(event);
}

void MouseEventLabel::mouseDoubleClickEvent(QMouseEvent* event)
{
  // qDebug() << "QWidget::mouseDoubleClickEvent" << event->button()
  //          << event->pos() << event->globalPosition();

  // 设置鼠标未点击时仍触发 mouseMoveEvent
  if (Qt::LeftButton == event->button())
  { // 双击左键开启
    setMouseTracking(true);
  }
  else if (Qt::RightButton == event->button())
  { // 双击右键关闭
    setMouseTracking(false);
  }

  QWidget::mouseDoubleClickEvent(event);
}
