#ifndef DEMO02_QPUSHBUTTON_H
#define DEMO02_QPUSHBUTTON_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QPushButtonDemo;
}

class QPushButtonDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QPushButtonDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QPushButtonDemo();

private slots:
  void on_pbtn_Play_clicked();

  void on_pbtn_Connect_clicked();

  void on_pbtn_SignalDemo_clicked();

  void on_pbtn_SignalDemo_pressed();

  void on_pbtn_SignalDemo_released();

private:
  Ui::QPushButtonDemo* ui;
  bool m_bPlayFlag;
  bool m_bConnectFlag;
};

#endif // DEMO02_QPUSHBUTTON_H
