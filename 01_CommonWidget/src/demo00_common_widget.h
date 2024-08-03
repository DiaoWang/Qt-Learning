#ifndef DEMO00_COMMON_WIDGET_H
#define DEMO00_COMMON_WIDGET_H

#include "demo01_qwidget.h"
#include "demo02_qpushbutton.h"
#include "demo03_qlabel.h"
#include "demo04_qlineedit.h"
#include "demo05_qradiobutton.h"
#include "demo06_qcheckbox.h"
#include "demo07_qcombobox.h"
#include "demo08_qspinbox.h"
#include "demo09_qslider.h"
#include "demo10_qprogressbar.h"
#include "demo11_qlistwidget.h"
#include "demo12_qtablewidget.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
  class CommonWidgetDemo;
}
QT_END_NAMESPACE

class CommonWidgetDemo : public QWidget
{
  Q_OBJECT

  enum class DemoType : uint8_t
  {
    QWIDGET = 0,
    QPUSHBUTTON,
    QLABEL,
    QLINEEDIT,
    QRADIOBUTTON,
    QCHECKBOX,
    QCOMBOBOX,
    QSPINBOX,
    QSLIDER,
    QPROGRESSBAR,
    QLISTWIDGET,
    QTABLEWIDGET,
    INVALID
  };

public:
  explicit CommonWidgetDemo(QWidget* parent = nullptr);
  virtual ~CommonWidgetDemo();

private slots:
  void onSubWindowClosed(uint8_t demoType);

  void on_pbtn_QWidget_clicked();

  void on_pbtn_QPushButton_clicked();

  void on_pbtn_QLabel_clicked();

  void on_pbtn_QLineEdit_clicked();

  void on_pbtn_QRadioButton_clicked();

  void on_pbtn_QCheckBox_clicked();

  void on_pbtn_QComboBox_clicked();

  void on_pbtn_QSpinBox_clicked();

  void on_pbtn_QSlider_clicked();

  void on_pbtn_QProgressBar_clicked();

  void on_pbtn_QListWidget_clicked();

  void on_pbtn_QTableWidget_clicked();

private:
  Ui::CommonWidgetDemo* ui;
  QWidgetDemo* m_ptrQWidgetDemo;
  QPushButtonDemo* m_ptrQPushButtonDemo;
  QLabelDemo* m_ptrQLabelDemo;
  QLineEditDemo* m_ptrQLineEditDemo;
  QRadioButtonDemo* m_ptrQRadioButtonDemo;
  QCheckBoxDemo* m_ptrQCheckBoxDemo;
  QComboBoxDemo* m_ptrQComboBoxDemo;
  QSpinBoxDemo* m_ptrQSpinBoxDemo;
  QSliderDemo* m_ptrQSliderDemo;
  QProgressBarDemo* m_ptrQProgressBarDemo;
  QListWidgetDemo* m_ptrQListWidgetDemo;
  QTableWidgetDemo* m_ptrQTableWidgetDemo;
};
#endif // DEMO00_COMMON_WIDGET_H
