#ifndef DEMO05_PAINT_EVENT_H
#define DEMO05_PAINT_EVENT_H

#include "demobase.h"

class PaintEventDemo : public DemoBase
{
  Q_OBJECT
public:
  explicit PaintEventDemo(QWidget* parent = nullptr);
  virtual ~PaintEventDemo();
};

#endif // DEMO05_PAINT_EVENT_H
