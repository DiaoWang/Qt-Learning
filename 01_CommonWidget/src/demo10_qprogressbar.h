#ifndef DEMO10_QPROGRESSBAR_H
#define DEMO10_QPROGRESSBAR_H

#include "demobase.h"
#include <QTimer>
#include <QWidget>

namespace Ui
{
  class QProgressBarDemo;
}

class QProgressBarDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QProgressBarDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QProgressBarDemo();

private slots:
  void on_pbtn_StartDownload_clicked();
  void on_pbtn_StartCopy_clicked();

private:
  Ui::QProgressBarDemo* ui;
  QTimer* m_tmrFileDownload;
  QTimer* m_tmrFileCopy;
};

#endif // DEMO10_QPROGRESSBAR_H
