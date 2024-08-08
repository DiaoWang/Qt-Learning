#ifndef DEMO03_TIMER_EVENT_H
#define DEMO03_TIMER_EVENT_H

#include <QLabel>
#include <QTimer>
#include <QTimerEvent>
#include <QWidget>

class TimerEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit TimerEventDemo(QWidget* parent = nullptr);
  virtual ~TimerEventDemo();

private:
  void timerEvent(QTimerEvent* event) override;
  void MoveCube(QWidget* wgt);

private slots:
  void onStartClicked();
  void onStopClicked();
  void onResetClicked();
  void onTimerTimeout();

private:
  QLabel* m_lbCubeForTimerEvent;
  QLabel* m_lbCubeForTimerObject;
  QTimer* m_timer;
  int m_timerId;
  bool m_isStart;
};

#endif // DEMO03_TIMER_EVENT_H
