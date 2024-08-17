#include "demo00_event.h"
#include "demo01_mouse_event.h"
#include "demo02_keyboard_event.h"
#include "demo03_timer_event.h"
#include "demo04_drag_event.h"
#include "demo05_paint_event.h"
#include "demo06_context_menu_event.h"
#include "demo07_event_propagate_process.h"
#include "demo08_frameless_window.h"

#include <QChar>
#include <QHBoxLayout>
#include <QPushButton>
#include <QStringList>
#include <QVBoxLayout>

EventDemo::EventDemo(QWidget* parent)
    : QWidget(parent),
      m_wgtNavigationPanel(new QWidget(this)),
      m_wgtOperationPanel(new QWidget(this)),
      m_stackWidget(new QStackedWidget(m_wgtOperationPanel)),
      m_btnGroup(new QButtonGroup(this)),
      m_scalingDirection(NON_EDGE),
      m_disabledHoverEvent(false)
{
  // 设置尺寸
  resize(600, 300);
  QFont font;
  // 修改字体大小
  font.setPointSize(12);
  // 启用字体抗锯齿，处理修改字体大小后模糊发虚的问题
  font.setHintingPreference(QFont::PreferFullHinting);
  setFont(font);

  // 创建布局
  QHBoxLayout* hLayoutMain = new QHBoxLayout(this);
  hLayoutMain->setSpacing(0);
  hLayoutMain->setContentsMargins(10, 10, 10, 10);

  // 初始化导航面板和操作面板
  InitNavigationPanel();
  InitOperationPanel();

  // 在布局中添加控件
  hLayoutMain->addWidget(m_wgtNavigationPanel);
  hLayoutMain->addWidget(m_wgtOperationPanel);

  // 设置默认选中项
  m_btnGroup->button(0)->click();

  // 为了能够处理 QEvent::HoverMove 事件，需要开启以下选项
  setMouseTracking(true);
  setAttribute(Qt::WA_Hover, true);
}

EventDemo::~EventDemo()
{
}

void EventDemo::InitNavigationPanel()
{
  QStringList navigationNames;
  navigationNames << "鼠标事件"
                  << "键盘事件"
                  << "定时器事件"
                  << "拖动事件"
                  << "绘图事件"
                  << "右键菜单"
                  << "事件传递流程"
                  << "无边框窗口";

  // 创建布局
  QVBoxLayout* vLayoutNavigation = new QVBoxLayout(m_wgtNavigationPanel);
  vLayoutNavigation->setSpacing(0);
  vLayoutNavigation->setContentsMargins(0, 0, 0, 0);

  for (int i = 0; i < navigationNames.size(); ++i)
  {
    QPushButton* pbtn = new QPushButton();
    pbtn->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    pbtn->setMinimumHeight(44);
    pbtn->setText(QString("%1. %2")
                    .arg(i + 1, 2, 10, QChar('0'))
                    .arg(navigationNames.at(i)));
    pbtn->setCheckable(true);
    pbtn->setStyleSheet(R"(
      QPushButton {
        text-align: left;
        padding-left: 10px;
        padding-right: 10px;
      }
      QPushButton:focus {
        outline: none;
      }
    )");
    pbtn->setFont(font());
    m_btnGroup->addButton(pbtn, i);
    // 在布局中添加控件
    vLayoutNavigation->addWidget(pbtn);

    // 连接信号槽
    connect(pbtn, &QPushButton::clicked, this,
            &EventDemo::SwitchOperationPanel);
  }
}

void EventDemo::InitOperationPanel()
{
  m_wgtOperationPanel->setMinimumWidth(400);
  m_wgtOperationPanel->setMinimumHeight(400);

  // 创建布局
  QVBoxLayout* vLayoutOperation = new QVBoxLayout(m_wgtOperationPanel);
  vLayoutOperation->setSpacing(0);
  vLayoutOperation->setContentsMargins(0, 0, 0, 0);
  // 在布局中添加控件
  vLayoutOperation->addWidget(m_stackWidget);

  m_stackWidget->addWidget(new MouseEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new KeyboardEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new TimerEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new DragEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new PaintEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new ContextMenuEventDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new EventPropagateProcessDemo(m_wgtOperationPanel));
  m_stackWidget->addWidget(new FramelessWindowDemo(m_wgtOperationPanel));
}

void EventDemo::mousePressEvent(QMouseEvent* event)
{
  if (!(windowFlags() & Qt::FramelessWindowHint))
  { // 有边框时不处理
    event->ignore();
    return;
  }

  if (event->button() == Qt::LeftButton)
  {
    m_mouseOffset =
      event->globalPosition().toPoint() - frameGeometry().topLeft();
    m_disabledHoverEvent = true;

    // qDebug() << "MousePosition: " << event->globalPosition().toPoint()
    //          << "topLeft: " << m_wgtToplevelWindow->frameGeometry().topLeft()
    //          << "mouseOffset: " << m_mouseOffset;
  }

  event->ignore();
}

void EventDemo::mouseReleaseEvent(QMouseEvent* event)
{
  if (event->button() == Qt::LeftButton)
  {
    m_disabledHoverEvent = false;
  }
}
void EventDemo::mouseMoveEvent(QMouseEvent* event)
{
  if (!(windowFlags() & Qt::FramelessWindowHint))
  { // 有边框时不处理
    event->ignore();
    return;
  }

  if (event->buttons() & Qt::LeftButton && m_scalingDirection == NON_EDGE &&
      !isFullScreen() && !isMaximized())
  {
    move(event->globalPosition().toPoint() - m_mouseOffset);

    // qDebug() << "MousePosition: " << event->globalPosition().toPoint()
    //          << "mouseOffset: " << m_mouseOffset;
  }
  else if (event->buttons() & Qt::LeftButton && m_scalingDirection != NON_EDGE)
  {
    const auto& rectToplevel = rect();
    const auto& topLeft = mapToGlobal(rectToplevel.topLeft());
    const auto& bottomRight = mapToGlobal(rectToplevel.bottomRight());
    QRect rectDestination(topLeft, bottomRight);
    const auto& mousePosition = event->globalPosition().toPoint();

    switch (m_scalingDirection)
    {
    case TOP: {
      if (bottomRight.y() - mousePosition.y() > minimumHeight())
      {
        rectDestination.setTop(mousePosition.y());
      }
    }
    break;
    case BOTTOM: {
      rectDestination.setHeight(mousePosition.y() - topLeft.y());
    }
    break;
    case LEFT: {
      if (bottomRight.x() - mousePosition.x() > minimumWidth())
      {
        rectDestination.setLeft(mousePosition.x());
      }
    }
    break;
    case RIGHT: {
      rectDestination.setWidth(mousePosition.x() - topLeft.x());
    }
    break;
    case TOP_LEFT: {
      if (bottomRight.y() - mousePosition.y() > minimumHeight())
      {
        rectDestination.setTop(mousePosition.y());
      }
      if (bottomRight.x() - mousePosition.x() > minimumWidth())
      {
        rectDestination.setLeft(mousePosition.x());
      }
    }
    break;
    case TOP_RIGHT: {
      if (bottomRight.y() - mousePosition.y() > minimumHeight())
      {
        rectDestination.setTop(mousePosition.y());
      }
      rectDestination.setWidth(mousePosition.x() - topLeft.x());
    }
    break;
    case BOTTOM_LEFT: {
      rectDestination.setHeight(mousePosition.y() - topLeft.y());
      if (bottomRight.x() - mousePosition.x() > minimumWidth())
      {
        rectDestination.setLeft(mousePosition.x());
      }
    }
    break;
    case BOTTOM_RIGHT: {
      rectDestination.setHeight(mousePosition.y() - topLeft.y());
      rectDestination.setWidth(mousePosition.x() - topLeft.x());
    }
    break;
    default:
      break;
    }

    setGeometry(rectDestination);
  }

  event->ignore();
}

bool EventDemo::event(QEvent* event)
{
  if (!(windowFlags() & Qt::FramelessWindowHint))
  { // 有边框时不处理
    return QWidget::event(event);
  }

  if (event->type() == QEvent::HoverMove && !m_disabledHoverEvent)
  {
    auto hoverEvent = static_cast<QHoverEvent*>(event);

    const auto& mousePosition = hoverEvent->globalPosition().toPoint();
    const auto mousePosX = mousePosition.x();
    const auto mousePosY = mousePosition.y();

    const auto& rectToplevel = rect();
    const auto topThreshold = rectToplevel.top() + EDGE_THRESHOLD;
    const auto bottomThreshold = rectToplevel.bottom() - EDGE_THRESHOLD;
    const auto leftThreshold = rectToplevel.left() + EDGE_THRESHOLD;
    const auto rightThreshold = rectToplevel.right() - EDGE_THRESHOLD;

    // qDebug() << "mousePosition" << mousePosition << Qt::endl
    //          << "mousePosX" << mousePosX << Qt::endl
    //          << "mousePosY" << mousePosY << Qt::endl
    //          << "topThreshold" << topThreshold << Qt::endl
    //          << "bottomThreshold" << bottomThreshold << Qt::endl
    //          << "leftThreshold" << leftThreshold << Qt::endl
    //          << "rightThreshold" << rightThreshold << Qt::endl;

    if (mousePosY < topThreshold && mousePosX < leftThreshold)
    { // 左上
      setCursor(Qt::SizeFDiagCursor);
      m_scalingDirection = TOP_LEFT;
    }
    else if (mousePosY < topThreshold && mousePosX > rightThreshold)
    { // 右上
      setCursor(Qt::SizeBDiagCursor);
      m_scalingDirection = TOP_RIGHT;
    }
    else if (mousePosY > bottomThreshold && mousePosX < leftThreshold)
    { // 左下
      setCursor(Qt::SizeBDiagCursor);
      m_scalingDirection = BOTTOM_LEFT;
    }
    else if (mousePosY > bottomThreshold && mousePosX > rightThreshold)
    { // 右下
      setCursor(Qt::SizeFDiagCursor);
      m_scalingDirection = BOTTOM_RIGHT;
    }
    else if (mousePosY < topThreshold)
    { // 上
      setCursor(Qt::SizeVerCursor);
      m_scalingDirection = TOP;
    }
    else if (mousePosY > bottomThreshold)
    { // 下
      setCursor(Qt::SizeVerCursor);
      m_scalingDirection = BOTTOM;
    }
    else if (mousePosX < leftThreshold)
    { // 左
      setCursor(Qt::SizeHorCursor);
      m_scalingDirection = LEFT;
    }
    else if (mousePosX > rightThreshold)
    { // 右
      setCursor(Qt::SizeHorCursor);
      m_scalingDirection = RIGHT;
    }
    else
    { // 普通指针
      setCursor(Qt::ArrowCursor);
      m_scalingDirection = NON_EDGE;
    }

    return true;
  }

  return QWidget::event(event);
}

void EventDemo::SwitchOperationPanel()
{
  m_stackWidget->setCurrentIndex(m_btnGroup->checkedId());
}
