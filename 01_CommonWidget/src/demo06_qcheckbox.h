#ifndef DEMO06_QCHECKBOX_H
#define DEMO06_QCHECKBOX_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QCheckBoxDemo;
}

class QCheckBoxDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QCheckBoxDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QCheckBoxDemo();

private slots:
  void on_ckbox_All_clicked();

private:
  void onCheckBoxChanged();

private:
  Ui::QCheckBoxDemo* ui;
};

#endif // DEMO06_QCHECKBOX_H
