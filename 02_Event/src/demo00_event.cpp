#include "demo00_event.h"
#include "demo01_mouse_event.h"
#include "demo02_keyboard_event.h"
#include "demo03_timer_event.h"
#include "demo04_drag_event.h"
#include "demo05_paint_event.h"
#include "demo06_context_menu_event.h"
#include "demo07_event_propagate_process.h"

#include <QChar>
#include <QHBoxLayout>
#include <QPushButton>
#include <QStringList>
#include <QVBoxLayout>

EventDemo::EventDemo(QWidget* parent)
    : QWidget(parent),
      m_ptrWgtNavigationPanel(new QWidget(this)),
      m_ptrWgtOperationPanel(new QWidget(this)),
      m_ptrStackWgt(new QStackedWidget(m_ptrWgtOperationPanel)),
      m_ptrBtnGroup(new QButtonGroup(this))
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
  hLayoutMain->setContentsMargins(0, 0, 0, 0);

  // 初始化导航面板和操作面板
  InitNavigationPanel();
  InitOperationPanel();

  // 在布局中添加控件
  hLayoutMain->addWidget(m_ptrWgtNavigationPanel);
  hLayoutMain->addWidget(m_ptrWgtOperationPanel);

  // 设置默认选中项
  m_ptrBtnGroup->button(0)->click();
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
                  << "事件传递流程";

  // 创建布局
  QVBoxLayout* vLayoutNavigation = new QVBoxLayout(m_ptrWgtNavigationPanel);
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
    m_ptrBtnGroup->addButton(pbtn, i);
    // 在布局中添加控件
    vLayoutNavigation->addWidget(pbtn);

    // 连接信号槽
    connect(pbtn, &QPushButton::clicked, this,
            &EventDemo::SwitchOperationPanel);
  }
}

void EventDemo::InitOperationPanel()
{
  m_ptrWgtOperationPanel->setMinimumWidth(400);
  m_ptrWgtOperationPanel->setMinimumHeight(400);

  // 创建布局
  QVBoxLayout* vLayoutOperation = new QVBoxLayout(m_ptrWgtOperationPanel);
  vLayoutOperation->setSpacing(0);
  vLayoutOperation->setContentsMargins(0, 0, 0, 0);
  // 在布局中添加控件
  vLayoutOperation->addWidget(m_ptrStackWgt);

  m_ptrStackWgt->addWidget(new MouseEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(new KeyboardEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(new TimerEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(new DragEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(new PaintEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(new ContextMenuEventDemo(m_ptrWgtOperationPanel));
  m_ptrStackWgt->addWidget(
    new EventPropagateProcessDemo(m_ptrWgtOperationPanel));
}

void EventDemo::SwitchOperationPanel()
{
  m_ptrStackWgt->setCurrentIndex(m_ptrBtnGroup->checkedId());
}
