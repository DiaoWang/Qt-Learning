#ifndef DEMO09_QSLIDER_H
#define DEMO09_QSLIDER_H

#include <QWidget>

namespace Ui {
  class QSliderDemo;
}

class QSliderDemo : public QWidget
{
  Q_OBJECT

public:
  explicit QSliderDemo(QWidget *parent = nullptr);
  ~QSliderDemo();

private:
  Ui::QSliderDemo *ui;
};

#endif // DEMO09_QSLIDER_H
