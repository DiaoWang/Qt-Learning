#include "demo06_qcheckbox.h"
#include "ui_demo06_qcheckbox.h"

#include <QString>

QCheckBoxDemo::QCheckBoxDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QCheckBoxDemo)
{
  ui->setupUi(this);

  setFixedSize(350, 200);

  connect(ui->ckbox_Apple, &QCheckBox::stateChanged, this,
          &QCheckBoxDemo::onCheckBoxChanged);
  connect(ui->ckbox_Pear, &QCheckBox::stateChanged, this,
          &QCheckBoxDemo::onCheckBoxChanged);
  connect(ui->ckbox_Peach, &QCheckBox::stateChanged, this,
          &QCheckBoxDemo::onCheckBoxChanged);
  connect(ui->ckbox_Orange, &QCheckBox::stateChanged, this,
          &QCheckBoxDemo::onCheckBoxChanged);
  connect(ui->ckbox_Banana, &QCheckBox::stateChanged, this,
          &QCheckBoxDemo::onCheckBoxChanged);
}

QCheckBoxDemo::~QCheckBoxDemo()
{
  delete ui;
}

void QCheckBoxDemo::onCheckBoxChanged()
{
  // 设置启用三态（选中、未选中、部分选中）
  ui->ckbox_All->setTristate(true);

  QString qstr;
  bool bOneIsChecked = false;
  uint8_t u8CheckCount = 0;
  // 获得 hLayout_Items 布局下的所有QCheckBox，存入一个QList中
  auto qlistItems = ui->wgt_Items->findChildren<QCheckBox*>();

  // 遍历 qlistItems
  for (const auto& item : qlistItems)
  {
    if (item->isChecked())
    {
      bOneIsChecked = true;
      ++u8CheckCount;
      qstr += item->text() + " ";
    }
  }
  qstr = qstr.trimmed();

  if (ui->wgt_Items->findChildren<QCheckBox*>().count() == u8CheckCount)
  { // 全部选中
    ui->ckbox_All->setCheckState(Qt::Checked);
  }
  else if (bOneIsChecked)
  { // 部分选中
    ui->ckbox_All->setCheckState(Qt::PartiallyChecked);
  }
  else
  { // 全未选中
    ui->ckbox_All->setCheckState(Qt::Unchecked);
  }

  ui->le_Result->setText(qstr);
}

void QCheckBoxDemo::on_ckbox_All_clicked()
{
  // 手动点击时不需要部分选中，设置禁用三态
  ui->ckbox_All->setTristate(false);

  // 获得 hLayout_Items 布局下的所有QCheckBox，存入一个QList中
  auto qlistItems = ui->wgt_Items->findChildren<QCheckBox*>();

  for (auto& item : qlistItems)
  {
    item->setChecked(true);
  }

  if (Qt::Checked == ui->ckbox_All->checkState())
  { // 选中所有 QCheckBox
    for (auto& item : qlistItems)
    {
      item->setChecked(true);
    }
  }
  else
  { // 反选所有 QCheckBox
    for (auto& item : qlistItems)
    {
      item->setChecked(false);
    }
  }
}
