#ifndef DEMO03_TIMER_EVENT_H
#define DEMO03_TIMER_EVENT_H

#include <QWidget>

class TimerEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit TimerEventDemo(QWidget* parent = nullptr);
  virtual ~TimerEventDemo();
};

#endif // DEMO03_TIMER_EVENT_H
