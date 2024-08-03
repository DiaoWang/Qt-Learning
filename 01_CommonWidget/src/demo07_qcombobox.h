#ifndef DEMO07_QCOMBOBOX_H
#define DEMO07_QCOMBOBOX_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QComboBoxDemo;
}

class QComboBoxDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QComboBoxDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QComboBoxDemo();

private slots:
  void on_le_Name_textChanged(const QString&);

  void on_cbbox_School_currentTextChanged(const QString&);

  void on_cbbox_Province_currentIndexChanged(int index);

  void on_cbbox_City_currentTextChanged(const QString&);

private:
  void setLineEditResult();

private:
  Ui::QComboBoxDemo* ui;
  QVector<QPair<QString, QStringList>> m_qvecProvinceAndCity;
};

#endif // DEMO07_QCOMBOBOX_H
