#include "demo12_qtablewidget.h"
#include "ui_demo12_qtablewidget.h"

#include <QHBoxLayout>
#include <QLabel>

QTableWidgetDemo::QTableWidgetDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QTableWidgetDemo),
      m_qstrLastStyleSheet(R"##(
        QTableView{
          background-color: rgba(255, 220, 220, 200);
          alternate-background-color: #FFFFFF;
      })##")
{
  ui->setupUi(this);

  // 设置纵向按钮
  m_qlbVerticalButton = new QLabel("启用样式表", ui->pbtn_SetStyleSheet);
  m_qlbVerticalButton->setWordWrap(true);
  auto qHBoxLayout = new QHBoxLayout(ui->pbtn_SetStyleSheet);
  qHBoxLayout->addWidget(m_qlbVerticalButton, 0, Qt::AlignCenter);

  // 设置单元格属性
  // 设置总列数为 4 列
  ui->tbwgt_Info->setColumnCount(4);
  // 设置行表头
  QStringList rowHeaders = {"姓名", "性别", "年龄", "籍贯"};
  ui->tbwgt_Info->setHorizontalHeaderLabels(rowHeaders);
  // 设置列宽
  ui->tbwgt_Info->horizontalHeader()->setSectionResizeMode(
    QHeaderView::Stretch);
  // 添加初始数据
  AddOneRow("一个人", "保密", "35", "北京");
  AddOneRow("二个人", "保密", "35", "北京");
  AddOneRow("三个人", "保密", "35", "北京");
  AddOneRow("四个人", "保密", "35", "北京");

  // 默认显示行表头
  on_ckbox_RowHeader_toggled(true);
  // 默认显示列表头
  on_ckbox_ColumnHeader_toggled(true);
  // 默认交替背景色
  on_ckbox_AlternatingRowColor_toggled(true);
  // 默认单元格可编辑
  on_ckbox_AlterableCell_toggled(true);

  // 默认点击选中单元格
  on_rbtn_SelectCell_clicked();
}

QTableWidgetDemo::~QTableWidgetDemo()
{
  delete ui;
}

void QTableWidgetDemo::AddOneRow(const QString& name, const QString& sex,
                                 const QString& age, const QString& birthplace,
                                 bool isInsertMode)
{
  // 新建 Item
  QTableWidgetItem* ptrItemName = new QTableWidgetItem(name);
  QTableWidgetItem* ptrItemSex = new QTableWidgetItem(sex);
  QTableWidgetItem* ptrItemAge = new QTableWidgetItem(age);
  QTableWidgetItem* ptrItemBirthplace = new QTableWidgetItem(birthplace);

  // 设置文本居中
  ptrItemName->setTextAlignment(Qt::AlignCenter);
  ptrItemSex->setTextAlignment(Qt::AlignCenter);
  ptrItemAge->setTextAlignment(Qt::AlignCenter);
  ptrItemBirthplace->setTextAlignment(Qt::AlignCenter);

  auto row = ui->tbwgt_Info->rowCount();
  if (isInsertMode)
  {
    // 获取当前行索引
    row = ui->tbwgt_Info->currentRow();
    // 在当前行插入一行
    ui->tbwgt_Info->insertRow(row);
  }
  else
  {
    // 在尾部新增一行
    ui->tbwgt_Info->setRowCount(row + 1);
  }
  // setItem 方法会取得 Item 对象的所有权，在 TableWidget 销毁时一并销毁 Item
  // ， 所以不必手动释放
  ui->tbwgt_Info->setItem(row, 0, ptrItemName);
  ui->tbwgt_Info->setItem(row, 1, ptrItemSex);
  ui->tbwgt_Info->setItem(row, 2, ptrItemAge);
  ui->tbwgt_Info->setItem(row, 3, ptrItemBirthplace);
}

void QTableWidgetDemo::on_ckbox_RowHeader_toggled(bool checked)
{
  if (checked)
  {
    ui->tbwgt_Info->horizontalHeader()->setVisible(true);
  }
  else
  {
    ui->tbwgt_Info->horizontalHeader()->setVisible(false);
  }
}

void QTableWidgetDemo::on_ckbox_ColumnHeader_toggled(bool checked)
{
  if (checked)
  {
    ui->tbwgt_Info->verticalHeader()->setVisible(true);
  }
  else
  {
    ui->tbwgt_Info->verticalHeader()->setVisible(false);
  }
}

void QTableWidgetDemo::on_ckbox_AlternatingRowColor_toggled(bool checked)
{
  if (checked)
  {
    ui->tbwgt_Info->setAlternatingRowColors(true);
  }
  else
  {
    ui->tbwgt_Info->setAlternatingRowColors(false);
  }
}

void QTableWidgetDemo::on_ckbox_AlterableCell_toggled(bool checked)
{
  if (checked)
  {
    ui->tbwgt_Info->setEditTriggers(QAbstractItemView::DoubleClicked |
                                    QAbstractItemView::SelectedClicked |
                                    QAbstractItemView::EditKeyPressed);
  }
  else
  {
    ui->tbwgt_Info->setEditTriggers(QAbstractItemView::NoEditTriggers);
  }
}

void QTableWidgetDemo::on_pbtn_SetStyleSheet_clicked()
{
  QString qstrCurrentStyleSheet = ui->tbwgt_Info->styleSheet();
  ui->tbwgt_Info->setStyleSheet(m_qstrLastStyleSheet);
  m_qstrLastStyleSheet = qstrCurrentStyleSheet;

  if (m_qlbVerticalButton->text().left(1) == "启")
  {
    m_qlbVerticalButton->setText("停用样式表");
  }
  else
  {
    m_qlbVerticalButton->setText("启用样式表");
  }
}

void QTableWidgetDemo::on_rbtn_SelectCell_clicked()
{
  ui->tbwgt_Info->setSelectionBehavior(QAbstractItemView::SelectItems);
}

void QTableWidgetDemo::on_rbtn_SelectLine_clicked()
{
  ui->tbwgt_Info->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void QTableWidgetDemo::on_tbwgt_Info_itemClicked(QTableWidgetItem* item)
{
  auto row = item->row();

  ui->le_Name->setText(ui->tbwgt_Info->item(row, 0)->text());
  ui->le_Sex->setText(ui->tbwgt_Info->item(row, 1)->text());
  ui->le_Age->setText(ui->tbwgt_Info->item(row, 2)->text());
  ui->le_Birthplace->setText(ui->tbwgt_Info->item(row, 3)->text());
}

void QTableWidgetDemo::on_pbtn_AddLine_clicked()
{
  AddOneRow(ui->le_Name->text(), ui->le_Sex->text(), ui->le_Age->text(),
            ui->le_Birthplace->text());
}

void QTableWidgetDemo::on_pbtn_InsertLine_clicked()
{
  AddOneRow(ui->le_Name->text(), ui->le_Sex->text(), ui->le_Age->text(),
            ui->le_Birthplace->text(), true);
}

void QTableWidgetDemo::on_pbtn_DeleteCurrentLine_clicked()
{
  auto currentRow = ui->tbwgt_Info->currentRow();
  ui->tbwgt_Info->removeRow(currentRow);
}

void QTableWidgetDemo::on_pbtn_AlterCurrentLine_clicked()
{
  auto currentRow = ui->tbwgt_Info->currentRow();
  // 新建 Item
  QTableWidgetItem* ptrItemName = new QTableWidgetItem(ui->le_Name->text());
  QTableWidgetItem* ptrItemSex = new QTableWidgetItem(ui->le_Sex->text());
  QTableWidgetItem* ptrItemAge = new QTableWidgetItem(ui->le_Age->text());
  QTableWidgetItem* ptrItemBirthplace =
    new QTableWidgetItem(ui->le_Birthplace->text());

  // 设置文本居中
  ptrItemName->setTextAlignment(Qt::AlignCenter);
  ptrItemSex->setTextAlignment(Qt::AlignCenter);
  ptrItemAge->setTextAlignment(Qt::AlignCenter);
  ptrItemBirthplace->setTextAlignment(Qt::AlignCenter);

  // setItem 方法会取得 Item 对象的所有权，在 TableWidget 销毁时一并销毁 Item
  // ， 所以不必手动释放
  ui->tbwgt_Info->setItem(currentRow, 0, ptrItemName);
  ui->tbwgt_Info->setItem(currentRow, 1, ptrItemSex);
  ui->tbwgt_Info->setItem(currentRow, 2, ptrItemAge);
  ui->tbwgt_Info->setItem(currentRow, 3, ptrItemBirthplace);
}
