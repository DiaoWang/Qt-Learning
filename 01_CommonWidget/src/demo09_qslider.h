#ifndef DEMO09_QSLIDER_H
#define DEMO09_QSLIDER_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QSliderDemo;
}

class QSliderDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QSliderDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QSliderDemo();

private:
  void updateColor();

private slots:
  void on_hsld_Red_valueChanged(int value);
  void on_hsld_Green_valueChanged(int value);
  void on_hsld_Blue_valueChanged(int value);

  void on_le_Red_textChanged(const QString& arg1);
  void on_le_Green_textChanged(const QString& arg1);
  void on_le_Blue_textChanged(const QString& arg1);

private:
  Ui::QSliderDemo* ui;
};

#endif // DEMO09_QSLIDER_H
