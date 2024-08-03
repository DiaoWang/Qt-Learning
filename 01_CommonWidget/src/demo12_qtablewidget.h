#ifndef DEMO12_QTABLEWIDGET_H
#define DEMO12_QTABLEWIDGET_H

#include "demobase.h"
#include <QLabel>
#include <QString>
#include <QTableWidgetItem>
#include <QWidget>

namespace Ui
{
  class QTableWidgetDemo;
}

class QTableWidgetDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QTableWidgetDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QTableWidgetDemo();

private:
  void AddOneRow(const QString& name, const QString& sex, const QString& age,
                 const QString& birthplace, bool isInsertMode = false);

private slots:
  void on_ckbox_RowHeader_toggled(bool checked);
  void on_ckbox_ColumnHeader_toggled(bool checked);
  void on_ckbox_AlternatingRowColor_toggled(bool checked);
  void on_ckbox_AlterableCell_toggled(bool checked);
  void on_pbtn_SetStyleSheet_clicked();
  void on_rbtn_SelectCell_clicked();
  void on_rbtn_SelectLine_clicked();
  void on_tbwgt_Info_itemClicked(QTableWidgetItem* item);

  void on_pbtn_AddLine_clicked();

  void on_pbtn_InsertLine_clicked();

  void on_pbtn_DeleteCurrentLine_clicked();

  void on_pbtn_AlterCurrentLine_clicked();

private:
  Ui::QTableWidgetDemo* ui;
  QString m_qstrLastStyleSheet;
  QLabel* m_qlbVerticalButton;
};

#endif // DEMO12_QTABLEWIDGET_H
