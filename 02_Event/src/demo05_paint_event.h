#ifndef DEMO05_PAINT_EVENT_H
#define DEMO05_PAINT_EVENT_H

#include <QWidget>

class PaintEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit PaintEventDemo(QWidget* parent = nullptr);
  virtual ~PaintEventDemo();
};

#endif // DEMO05_PAINT_EVENT_H
