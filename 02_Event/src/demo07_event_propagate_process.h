#ifndef DEMO07_EVENT_PROPAGATE_PROCESS_H
#define DEMO07_EVENT_PROPAGATE_PROCESS_H

#include <QEvent>
#include <QLabel>
#include <QMouseEvent>
#include <QWidget>

class EventPropagateLabel;
class EventPropagateProcessDemo : public QWidget
{
  Q_OBJECT
public:
  explicit EventPropagateProcessDemo(QWidget* parent = nullptr);
  virtual ~EventPropagateProcessDemo();

private:
  virtual void mousePressEvent(QMouseEvent* event) override;
  virtual bool eventFilter(QObject* watched, QEvent* event) override;

private:
  EventPropagateLabel* m_lbEventPropagate;
};

// ---------- EventPropagateLabel ----------

class EventPropagateLabel : public QLabel
{
  Q_OBJECT
public:
  explicit EventPropagateLabel(QWidget* parent = nullptr);
  virtual ~EventPropagateLabel();

private:
  virtual bool event(QEvent* event) override;
  virtual void mousePressEvent(QMouseEvent* event) override;
};

#endif // DEMO07_EVENT_PROPAGATE_PROCESS_H
