#ifndef DEMO11_QLISTWIDGET_H
#define DEMO11_QLISTWIDGET_H

#include "demobase.h"
#include <QListWidget>
#include <QWidget>

namespace Ui
{
  class QListWidgetDemo;
}

class QListWidgetDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QListWidgetDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QListWidgetDemo();

private:
  bool HasSelectedItem();

private slots:
  void on_pbtn_Add_clicked();

  void on_pbtn_Insert_clicked();

  void on_pbtn_Delete_clicked();

  void on_rbtn_ListMode_clicked();

  void on_rbtn_IconMode_clicked();

  void on_lstwgt_Province_itemClicked(QListWidgetItem* item);

  void on_lstwgt_Province_itemDoubleClicked(QListWidgetItem* item);

private:
  Ui::QListWidgetDemo* ui;
};

#endif // DEMO11_QLISTWIDGET_H
