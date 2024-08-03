#ifndef DEMO04_DRAG_EVENT_H
#define DEMO04_DRAG_EVENT_H

#include "demobase.h"

class DragEventDemo : public DemoBase
{
  Q_OBJECT
public:
  explicit DragEventDemo(QWidget* parent = nullptr);
  virtual ~DragEventDemo();
};

#endif // DEMO04_DRAG_EVENT_H
