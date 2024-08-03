#include "demo11_qlistwidget.h"
#include "ui_demo11_qlistwidget.h"

#include <QDebug>

QListWidgetDemo::QListWidgetDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QListWidgetDemo)
{
  ui->setupUi(this);

  ui->le_CurrentItem->setReadOnly(true);
  ui->rbtn_ListMode->setChecked(true);
  ui->lstwgt_Province->setAlternatingRowColors(true);
}

QListWidgetDemo::~QListWidgetDemo()
{
  delete ui;
}

bool QListWidgetDemo::HasSelectedItem()
{
  // 未选中时 currentRow() 返回 -1
  if (-1 == ui->lstwgt_Province->currentRow())
  {
    return false;
  }
  return true;
}

void QListWidgetDemo::on_pbtn_Add_clicked()
{
  const QString& qstrInputText = ui->le_Input->text();
  if (qstrInputText.isEmpty())
  {
    return;
  }

  // 此处也可用指针接受 new 创建的对象，然后使用 QListWidget::addItem 添加
  new QListWidgetItem(DemoBase::GetQtIcon(), qstrInputText,
                      ui->lstwgt_Province);
}

void QListWidgetDemo::on_pbtn_Insert_clicked()
{
  const QString& qstrInputText = ui->le_Input->text();
  if (qstrInputText.isEmpty())
  {
    return;
  }

  auto currentRow = ui->lstwgt_Province->currentRow();
  if (!HasSelectedItem())
  {
    return;
  }

  auto ptrNewItem = new QListWidgetItem(DemoBase::GetQtIcon(), qstrInputText);
  ui->lstwgt_Province->insertItem(currentRow, ptrNewItem);
}

void QListWidgetDemo::on_pbtn_Delete_clicked()
{
  if (!HasSelectedItem())
  {
    return;
  }

  auto ptrSelectedItem = ui->lstwgt_Province->currentItem();
  ui->lstwgt_Province->removeItemWidget(ptrSelectedItem);
  // 也可使用这个方法 ui->lstwgt_Province->takeItem() 来移除项目
  // 移除的项目必须使用delete释放
  delete ptrSelectedItem;
  ptrSelectedItem = nullptr;

  if (HasSelectedItem())
  {
    ui->le_CurrentItem->setText(ui->lstwgt_Province->currentItem()->text());
  }
  else
  {
    ui->le_CurrentItem->setText("");
  }
}

void QListWidgetDemo::on_rbtn_ListMode_clicked()
{
  ui->lstwgt_Province->setViewMode(QListView::ListMode);
}

void QListWidgetDemo::on_rbtn_IconMode_clicked()
{
  ui->lstwgt_Province->setViewMode(QListView::IconMode);
}

void QListWidgetDemo::on_lstwgt_Province_itemClicked(QListWidgetItem* item)
{
  ui->le_CurrentItem->setText(item->text());
}

void QListWidgetDemo::on_lstwgt_Province_itemDoubleClicked(
  QListWidgetItem* item)
{
  // 如果只设置 ItemIsEditable 标记，
  // 条目默认变为不可选中不可编辑状态，所以必须三个同时传入
  item->setFlags(Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
}
