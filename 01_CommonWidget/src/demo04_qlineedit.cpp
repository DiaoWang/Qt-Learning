#include "demo04_qlineedit.h"
#include "ui_demo04_qlineedit.h"

#include <QIntValidator>
#include <QMessageBox>

QLineEditDemo::QLineEditDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QLineEditDemo)
{
  ui->setupUi(this);

  // 设置校验器，限制QLineEdit仅能输入Int类型的值
  QIntValidator* ptrIntValidator = new QIntValidator(this);
  ui->le_Addend1->setValidator(ptrIntValidator);
  ui->le_Addend2->setValidator(ptrIntValidator);
  ui->le_Minuend->setValidator(ptrIntValidator);
  ui->le_Subtrahend->setValidator(ptrIntValidator);

  connect(ui->le_Addend1, &QLineEdit::textChanged, this,
          &QLineEditDemo::onAddendTextChanged);
  connect(ui->le_Addend2, &QLineEdit::textChanged, this,
          &QLineEditDemo::onAddendTextChanged);
  connect(ui->le_Minuend, &QLineEdit::editingFinished, this,
          &QLineEditDemo::onSubtractionEditingFinished);
  connect(ui->le_Subtrahend, &QLineEdit::editingFinished, this,
          &QLineEditDemo::onSubtractionEditingFinished);
}

QLineEditDemo::~QLineEditDemo()
{
  delete ui;
}

void QLineEditDemo::on_pbtn_EchoOutput_clicked()
{
  QMessageBox::information(this, "回显内容", ui->le_EchoMode->text());
}

void QLineEditDemo::on_pbtn_NormalMode_clicked()
{
  ui->le_EchoMode->clear();
  ui->le_EchoMode->setEchoMode(QLineEdit::Normal);
  ui->le_EchoMode->setPlaceholderText("Normal");
}

void QLineEditDemo::on_pbtn_PasswordMode_clicked()
{
  ui->le_EchoMode->clear();
  ui->le_EchoMode->setEchoMode(QLineEdit::Password);
  ui->le_EchoMode->setPlaceholderText("Password");
}

void QLineEditDemo::on_pbtn_NoEchoMode_clicked()
{
  ui->le_EchoMode->clear();
  ui->le_EchoMode->setEchoMode(QLineEdit::NoEcho);
  ui->le_EchoMode->setPlaceholderText("NoEcho");
}

void QLineEditDemo::on_pbtn_PwdEchoOnEditMode_clicked()
{
  ui->le_EchoMode->clear();
  ui->le_EchoMode->setEchoMode(QLineEdit::PasswordEchoOnEdit);
  ui->le_EchoMode->setPlaceholderText("PasswordEchoOnEdit");
}

void QLineEditDemo::on_pbtn_AlignLeft_clicked()
{
  ui->le_Alignment->setAlignment(Qt::AlignLeft);
  ui->le_Alignment->setPlaceholderText("AlignLeft");
}

void QLineEditDemo::on_pbtn_AlignCenter_clicked()
{
  ui->le_Alignment->setAlignment(Qt::AlignCenter);
  ui->le_Alignment->setPlaceholderText("AlignCenter");
}

void QLineEditDemo::on_pbtn_AlignRight_clicked()
{
  ui->le_Alignment->setAlignment(Qt::AlignRight);
  ui->le_Alignment->setPlaceholderText("AlignRight");
}

void QLineEditDemo::on_pbtn_RWOutput_clicked()
{
  QMessageBox::information(this, "读写控制", ui->le_RWControl->text());
}

void QLineEditDemo::on_pbtn_ReadWrite_clicked()
{
  ui->le_RWControl->setReadOnly(false);
  ui->le_RWControl->setPlaceholderText("ReadWrite");
}

void QLineEditDemo::on_pbtn_ReadOnly_clicked()
{
  ui->le_RWControl->setReadOnly(true);
  ui->le_RWControl->setPlaceholderText("ReadOnly");
}

void QLineEditDemo::on_pbtn_DisableRWControl_clicked()
{
  ui->le_RWControl->setEnabled(false);
  ui->le_RWControl->setPlaceholderText("Disabled");
}

void QLineEditDemo::on_pbtn_EnableRWControl_clicked()
{
  ui->le_RWControl->setEnabled(true);
  ui->le_RWControl->setPlaceholderText("Enabled");
}

void QLineEditDemo::on_pbtn_NoInputMask_clicked()
{
  ui->le_InputMaskControl->setInputMask("");
}

void QLineEditDemo::on_pbtn_TelNoInputMask_clicked()
{
  // 9 表示要求输入 0-9 的数字
  // ; 表示掩码结束
  // # 表示无输入时的占位符
  ui->le_InputMaskControl->setInputMask("99999999999;#");
}

void QLineEditDemo::on_pbtn_KeyInputMask_clicked()
{
  // > 表示将输入转换为大写
  // A 表示要求输入英文字母
  // ; 表示掩码结束
  // # 表示无输入时的占位符
  ui->le_InputMaskControl->setInputMask(">AAAAA-AAAAA-AAAAA;#");
}

void QLineEditDemo::onAddendTextChanged()
{
  int sum = ui->le_Addend1->text().toInt() + ui->le_Addend2->text().toInt();
  ui->le_Sum->setText(QString::number(sum));
}

void QLineEditDemo::onSubtractionEditingFinished()
{
  int difference =
    ui->le_Minuend->text().toInt() - ui->le_Subtrahend->text().toInt();
  ui->le_Difference->setText(QString::number(difference));
}
