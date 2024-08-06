#ifndef DEMO07_EVENT_PROPAGATE_PROCESS_H
#define DEMO07_EVENT_PROPAGATE_PROCESS_H

#include <QWidget>

class EventPropagateProcessDemo : public QWidget
{
  Q_OBJECT
public:
  explicit EventPropagateProcessDemo(QWidget* parent = nullptr);
  virtual ~EventPropagateProcessDemo();
};

#endif // DEMO07_EVENT_PROPAGATE_PROCESS_H
