#ifndef DEMO07_EVENT_PROPAGATE_PROCESS_H
#define DEMO07_EVENT_PROPAGATE_PROCESS_H

#include "demobase.h"

class EventPropagateProcessDemo : public DemoBase
{
  Q_OBJECT
public:
  explicit EventPropagateProcessDemo(QWidget* parent = nullptr);
  virtual ~EventPropagateProcessDemo();
};

#endif // DEMO07_EVENT_PROPAGATE_PROCESS_H
