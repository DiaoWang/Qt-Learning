#include "demo06_context_menu_event.h"

#include <QDebug>

ContextMenuEventDemo::ContextMenuEventDemo(QWidget* parent)
    : QWidget(parent),
      m_actCut(new QAction("剪切(T)", this)),
      m_actCopy(new QAction("复制(C)", this)),
      m_actPaste(new QAction("粘贴(P)", this)),
      m_actToUpper(new QAction("转成大写(U)", this)),
      m_actToLower(new QAction("转成小写(L)", this)),
      m_actHide(new QAction("隐藏(H)", this)),
      m_menu(new QMenu(this))
{
  m_menu->addAction(m_actCut);
  m_menu->addAction(m_actCopy);
  m_menu->addAction(m_actPaste);
  m_menu->addSeparator();
  m_menu->addAction(m_actToUpper);
  m_menu->addAction(m_actToLower);
  m_menu->addSeparator();
  m_menu->addAction(m_actHide);

  connect(m_actCut, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
  connect(m_actCopy, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
  connect(m_actPaste, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
  connect(m_actToUpper, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
  connect(m_actToLower, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
  connect(m_actHide, &QAction::triggered, this,
          &ContextMenuEventDemo::onActionTriggered);
}

ContextMenuEventDemo::~ContextMenuEventDemo()
{
}

void ContextMenuEventDemo::contextMenuEvent(QContextMenuEvent* event)
{
  // 该方法返回值为选中的 Action ，但此例中直接使用事件处理，未接收返回值
  m_menu->exec(event->globalPos());
}

void ContextMenuEventDemo::onActionTriggered()
{
  auto action = qobject_cast<QAction*>(sender());
  if (m_actCut == action)
  {
    qDebug() << "---------- 剪切 ----------";
  }
  else if (m_actCopy == action)
  {
    qDebug() << "---------- 复制 ----------";
  }
  else if (m_actPaste == action)
  {
    qDebug() << "---------- 粘贴 ----------";
  }
  else if (m_actToUpper == action)
  {
    qDebug() << "---------- 转成大写 ----------";
  }
  else if (m_actToLower == action)
  {
    qDebug() << "---------- 转成小写 ----------";
  }
  else if (m_actHide == action)
  {
    qDebug() << "---------- 隐藏 ----------";
  }
}
