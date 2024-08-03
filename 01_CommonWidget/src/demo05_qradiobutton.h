#ifndef DEMO05_QRADIOBUTTON_H
#define DEMO05_QRADIOBUTTON_H

#include "demobase.h"
#include <QButtonGroup>
#include <QWidget>

namespace Ui
{
  class QRadioButtonDemo;
}

class QRadioButtonDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QRadioButtonDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QRadioButtonDemo();

private slots:
  void on_pbtn_PrintSelectResult_clicked();
  void onRadioButtonClicked();

private:
  Ui::QRadioButtonDemo* ui;
  QButtonGroup* m_ptrButtonGroupGender;
  QButtonGroup* m_ptrButtonGroupEducation;
};

#endif // DEMO05_QRADIOBUTTON_H
