#include "demo08_qspinbox.h"
#include "ui_demo08_qspinbox.h"

QSpinBoxDemo::QSpinBoxDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QSpinBoxDemo)
{
  ui->setupUi(this);

  setFixedSize(250, 150);

  // 设置单价
  ui->dspbox_Price->setSingleStep(0.5);
  ui->dspbox_Price->setMinimum(0.5);
  ui->dspbox_Price->setMaximum(100.0);
  ui->dspbox_Price->setAccelerated(true);
  ui->dspbox_Price->setWrapping(true); // 设置循环，最大值溢出后从最小值重新开始
  ui->dspbox_Price->setPrefix("￥ ");
  ui->dspbox_Price->setSuffix(" 元 / 斤");
  ui->dspbox_Price->setValue(0.5);

  // 设置重量
  ui->spbox_Weight->setSingleStep(10);
  ui->spbox_Weight->setRange(0, 100000);
  ui->spbox_Weight->setAccelerated(true);
  ui->spbox_Weight->setSuffix(" 克 = 1 斤");
  ui->spbox_Weight->setValue(500);

  ui->le_Total->setReadOnly(true);
  ui->le_Total->setPlaceholderText("总价（元）");
}

QSpinBoxDemo::~QSpinBoxDemo()
{
  delete ui;
}

void QSpinBoxDemo::on_dspbox_Price_valueChanged(double arg1)
{
  double total = arg1 * ui->spbox_Weight->value() / 500;
  ui->le_Total->setText(QString("%1 元").arg(total));
}

void QSpinBoxDemo::on_spbox_Weight_valueChanged(int arg1)
{
  double total = ui->dspbox_Price->value() * arg1 / 500;
  ui->le_Total->setText(QString("%1 元").arg(total));

  double catties = 1.0 * arg1 / 500;
  ui->spbox_Weight->setSuffix(QString(" 克 = %1 斤").arg(catties));
}
