#ifndef DEMO04_QLINEEDIT_H
#define DEMO04_QLINEEDIT_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QLineEditDemo;
}

class QLineEditDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QLineEditDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QLineEditDemo();

private slots:
  void on_pbtn_EchoOutput_clicked();

  void on_pbtn_NormalMode_clicked();

  void on_pbtn_PasswordMode_clicked();

  void on_pbtn_NoEchoMode_clicked();

  void on_pbtn_PwdEchoOnEditMode_clicked();

  void on_pbtn_AlignLeft_clicked();

  void on_pbtn_AlignCenter_clicked();

  void on_pbtn_AlignRight_clicked();

  void on_pbtn_RWOutput_clicked();

  void on_pbtn_ReadWrite_clicked();

  void on_pbtn_ReadOnly_clicked();

  void on_pbtn_DisableRWControl_clicked();

  void on_pbtn_EnableRWControl_clicked();

  void on_pbtn_NoInputMask_clicked();

  void on_pbtn_TelNoInputMask_clicked();

  void on_pbtn_KeyInputMask_clicked();

  void onAddendTextChanged();

  void onSubtractionEditingFinished();

private:
  Ui::QLineEditDemo* ui;
};

#endif // DEMO04_QLINEEDIT_H
