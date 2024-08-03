#ifndef DEMO02_KEYBOARD_EVENT_H
#define DEMO02_KEYBOARD_EVENT_H

#include "demobase.h"

class KeyboardEventDemo : public DemoBase
{
  Q_OBJECT
public:
  explicit KeyboardEventDemo(QWidget* parent = nullptr);
  virtual ~KeyboardEventDemo();
};

#endif // DEMO02_KEYBOARD_EVENT_H
