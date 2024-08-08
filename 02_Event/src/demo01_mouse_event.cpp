#include "demo01_mouse_event.h"
#include "custom_qt_tools.h"

#include <QDebug>
#include <QPoint>
#include <QString>
#include <QVBoxLayout>

MouseEventDemo::MouseEventDemo(QWidget* parent)
    : QWidget(parent),
      m_eventFilterCount(0),
      m_lbMouseEvent(new MouseEventLabel(this)),
      m_lbEventFilter(new QLabel(this)),
      m_wgt(new QWidget(this)),
      m_lbCube(new QLabel(m_wgt))
{
  QVBoxLayout* vLayout = new QVBoxLayout(this);
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  m_lbMouseEvent->setFrameShape(QFrame::NoFrame);
  m_lbMouseEvent->setAlignment(Qt::AlignCenter);
  m_lbMouseEvent->setFixedHeight(50);
  m_lbMouseEvent->setStyleSheet("background-color: rgba(255, 220, 220, 200);");

  m_lbEventFilter->setFrameStyle(m_lbMouseEvent->frameStyle());
  m_lbEventFilter->setAlignment(m_lbMouseEvent->alignment());
  m_lbEventFilter->setFixedHeight(m_lbMouseEvent->height());
  m_lbEventFilter->setStyleSheet("background-color: rgba(200, 220, 255, 200);");

  m_lbCube->setFrameShape(QFrame::NoFrame);
  m_lbCube->setAlignment(Qt::AlignCenter);
  m_lbCube->setFixedWidth(80);
  m_lbCube->setFixedHeight(80);
  m_lbCube->setStyleSheet("background-color: rgb(255, 150, 150);");
  m_lbCube->setText("左键拖动\n右键复位");

  vLayout->addWidget(m_lbMouseEvent);
  vLayout->addWidget(m_lbEventFilter);
  vLayout->addWidget(m_wgt);

  setLayout(vLayout);

  // 安装事件过滤器，m_lbEventFilter 的所有事件受到 this 监控
  m_lbEventFilter->installEventFilter(this);
  m_lbCube->installEventFilter(this);
  m_wgt->installEventFilter(this);
}

MouseEventDemo::~MouseEventDemo()
{
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
        CustomQtTools::MoveToCenter(*m_wgt, *m_lbCube);
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
      int maxX = m_wgt->width() - m_lbCube->width();   // 计算x坐标最大值
      int maxY = m_wgt->height() - m_lbCube->height(); // 计算y坐标最大值
      // 限制 x 不超出边缘
      if (dstPosCube.x() < 0)
      {
        dstPosCube.setX(0);
      }
      else if (dstPosCube.x() > maxX)
      {
        dstPosCube.setX(maxX);
      }
      // 限制 y 不超出边缘
      if (dstPosCube.y() < 0)
      {
        dstPosCube.setY(0);
      }
      else if (dstPosCube.y() > maxY)
      {
        dstPosCube.setY(maxY);
      }

      // 移动到新位置
      m_lbCube->move(dstPosCube.toPoint());
    }
  }
  else if (m_wgt == watched)
  {
    if (event->type() == QEvent::Resize)
    {
      CustomQtTools::MoveToCenter(*m_wgt, *m_lbCube);
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
