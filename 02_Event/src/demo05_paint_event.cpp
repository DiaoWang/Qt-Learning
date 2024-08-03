#include "demo05_paint_event.h"

PaintEventDemo::PaintEventDemo(QWidget* parent)
    : DemoBase(parent)
{
  m_label->setText("绘图事件");
}

PaintEventDemo::~PaintEventDemo()
{
}
