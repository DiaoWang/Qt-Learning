#include "demo09_qslider.h"
#include "ui_demo09_qslider.h"

#include <QValidator>

QSliderDemo::QSliderDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QSliderDemo)
{
  ui->setupUi(this);

  setFixedSize(400, 300);

  // 设置label初始颜色
  //  ui->lb_Color->setStyleSheet("background-color: rgb(0, 0, 0);");

  // 设置颜色值文本框初始值及校验器
  QIntValidator* intValidator = new QIntValidator(0, 255, this);
  ui->le_Red->setValidator(intValidator);
  ui->le_Green->setValidator(intValidator);
  ui->le_Blue->setValidator(intValidator);
  ui->le_Red->setText("0");
  ui->le_Green->setText("0");
  ui->le_Blue->setText("0");

  // 设置范围
  ui->hsld_Red->setRange(0, 255);
  ui->hsld_Green->setRange(0, 255);
  ui->hsld_Blue->setRange(0, 255);
  // 设置按键盘 ← → 键时的步长
  ui->hsld_Red->setSingleStep(1);
  ui->hsld_Green->setSingleStep(1);
  ui->hsld_Blue->setSingleStep(1);
  // 设置鼠标单击滑块左右测时的步长
  ui->hsld_Red->setPageStep(10);
  ui->hsld_Green->setPageStep(10);
  ui->hsld_Blue->setPageStep(10);
  // 设置初始值
  ui->hsld_Red->setValue(0);
  ui->hsld_Green->setValue(0);
  ui->hsld_Blue->setValue(0);
}

QSliderDemo::~QSliderDemo()
{
  delete ui;
}

void QSliderDemo::updateColor()
{
  QString strStyleSheet = QString("background-color: rgb(%1, %2, %3);")
                            .arg(ui->hsld_Red->value())
                            .arg(ui->hsld_Green->value())
                            .arg(ui->hsld_Blue->value());
  ui->lb_Color->setStyleSheet(strStyleSheet);
}

void QSliderDemo::on_hsld_Red_valueChanged(int value)
{
  ui->le_Red->setText(QString::number(value));
  updateColor();
}

void QSliderDemo::on_hsld_Green_valueChanged(int value)
{
  ui->le_Green->setText(QString::number(value));
  updateColor();
}

void QSliderDemo::on_hsld_Blue_valueChanged(int value)
{
  ui->le_Blue->setText(QString::number(value));
  updateColor();
}

void QSliderDemo::on_le_Red_textChanged(const QString& arg1)
{
  ui->hsld_Red->setValue(arg1.toInt());
  updateColor();
}

void QSliderDemo::on_le_Green_textChanged(const QString& arg1)
{
  ui->hsld_Green->setValue(arg1.toInt());
  updateColor();
}

void QSliderDemo::on_le_Blue_textChanged(const QString& arg1)
{
  ui->hsld_Blue->setValue(arg1.toInt());
  updateColor();
}
