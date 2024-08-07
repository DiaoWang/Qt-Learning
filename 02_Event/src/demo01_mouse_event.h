#ifndef DEMO01_MOUSE_EVENT_H
#define DEMO01_MOUSE_EVENT_H

#include <QEvent>
#include <QLabel>
#include <QMouseEvent>
#include <QWidget>
#include <cstdint>

class MouseEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit MouseEventDemo(QWidget* parent = nullptr);
  virtual ~MouseEventDemo();

private:
  virtual bool eventFilter(QObject* watched, QEvent* event) override;

private:
  uint32_t m_eventFilterCount;
  QLabel* m_lbMouseEvent;
  QLabel* m_lbEventFilter;
  QWidget* m_wgt;
  QLabel* m_lbCube;
  QPointF m_lastPosCube;
  QPointF m_lastPosMouse;
};

// ---------- MouseEventLabel ----------

class MouseEventLabel : public QLabel
{
  Q_OBJECT
public:
  MouseEventLabel(QWidget* parent = nullptr);
  ~MouseEventLabel();

private:
  virtual void enterEvent(QEnterEvent* event) override;
  virtual void leaveEvent(QEvent* event) override;

  virtual void mousePressEvent(QMouseEvent* event) override;
  virtual void mouseReleaseEvent(QMouseEvent* event) override;
  virtual void mouseMoveEvent(QMouseEvent* event) override;
  virtual void mouseDoubleClickEvent(QMouseEvent* event) override;

private:
  uint32_t m_eventCount;
  bool m_isMovable;
};

#endif // DEMO01_MOUSE_EVENT_H
