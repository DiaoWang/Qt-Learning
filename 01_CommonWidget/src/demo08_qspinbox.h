#ifndef DEMO08_QSPINBOX_H
#define DEMO08_QSPINBOX_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QSpinBoxDemo;
}

class QSpinBoxDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QSpinBoxDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QSpinBoxDemo();

private slots:
  void on_dspbox_Price_valueChanged(double arg1);

  void on_spbox_Weight_valueChanged(int arg1);

private:
  Ui::QSpinBoxDemo* ui;
};

#endif // DEMO08_QSPINBOX_H
