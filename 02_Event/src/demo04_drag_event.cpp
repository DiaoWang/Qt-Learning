#include "demo04_drag_event.h"

DragEventDemo::DragEventDemo(QWidget* parent)
    : DemoBase(parent)
{
  m_label->setText("拖动事件");
}

DragEventDemo::~DragEventDemo()
{
}
