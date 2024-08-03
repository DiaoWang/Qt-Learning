#ifndef DEMO01_QWIDGET_H
#define DEMO01_QWIDGET_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QWidgetDemo;
}

class QWidgetDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QWidgetDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QWidgetDemo();

private slots:
  void on_pbtn_GetGeometryAndSize_clicked();

  void on_pbtn_SetSize_clicked();

  void on_pbtn_SetFixedSize_clicked();

  void on_pbtn_SetMinimumSize_clicked();

  void on_pbtn_SetMaximumSize_clicked();

  void on_pbtn_MoveToPosition_clicked();

  void on_pbtn_SetTitle_clicked();

  void on_pbtn_SetIcon_clicked();

private:
  Ui::QWidgetDemo* ui;
};

#endif // DEMO01_QWIDGET_H
