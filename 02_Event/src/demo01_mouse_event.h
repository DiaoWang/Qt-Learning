#ifndef DEMO01_MOUSE_EVENT_H
#define DEMO01_MOUSE_EVENT_H

#include "demobase.h"

#include <QEvent>
#include <QLabel>
#include <QMouseEvent>
#include <cstdint>

class MouseEventDemo : public DemoBase
{
  Q_OBJECT
public:
  explicit MouseEventDemo(QWidget* parent = nullptr);
  virtual ~MouseEventDemo();

private:
  void moveToCenter(const QWidget& parent, QWidget& children);
  bool eventFilter(QObject* watched, QEvent* event);

private:
  uint32_t m_eventFilterCount;
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
  void enterEvent(QEnterEvent* event);
  void leaveEvent(QEvent* event);

  void mousePressEvent(QMouseEvent* event);
  void mouseReleaseEvent(QMouseEvent* event);
  void mouseMoveEvent(QMouseEvent* event);
  void mouseDoubleClickEvent(QMouseEvent* event);

private:
  uint32_t m_eventCount;
  bool m_isMovable;
};

#endif // DEMO01_MOUSE_EVENT_H
