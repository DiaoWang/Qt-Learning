#ifndef DEMO04_DRAG_EVENT_H
#define DEMO04_DRAG_EVENT_H

#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QTextEdit>
#include <QWheelEvent>
#include <QWidget>

class DragEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit DragEventDemo(QWidget* parent = nullptr);
  virtual ~DragEventDemo();
};

#endif // DEMO04_DRAG_EVENT_H

// ---------- DragEventTextEdit ----------

class DragEventTextEdit : public QTextEdit
{
  Q_OBJECT
public:
  explicit DragEventTextEdit(QWidget* parent = nullptr);
  virtual ~DragEventTextEdit();

private:
  void dragEnterEvent(QDragEnterEvent* event);
  void dragLeaveEvent(QDragLeaveEvent* event);
  void dragMoveEvent(QDragMoveEvent* event);
  void dropEvent(QDropEvent* event);
  void wheelEvent(QWheelEvent* event);
};
