#include "demo05_qradiobutton.h"
#include "ui_demo05_qradiobutton.h"

#include <QString>

QRadioButtonDemo::QRadioButtonDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QRadioButtonDemo),
      m_ptrButtonGroupGender(new QButtonGroup(this)),
      m_ptrButtonGroupEducation(new QButtonGroup(this))
{
  ui->setupUi(this);

  // addButton 方法的第二个参数 id 为添加的按钮分配组内唯一标识符，
  // 以便处理按钮事件时能够区分哪个按钮被按下，
  // 该参数默认值 -1 ，此时将自动分配 id ，自动分配的 id 为负数，从 -2 开始
  m_ptrButtonGroupGender->addButton(ui->rbtn_Male_4);
  m_ptrButtonGroupGender->addButton(ui->rbtn_Female_4);
  m_ptrButtonGroupEducation->addButton(ui->rbtn_Doctor_4);
  m_ptrButtonGroupEducation->addButton(ui->rbtn_Master_4);
  m_ptrButtonGroupEducation->addButton(ui->rbtn_Bachelor_4);
  m_ptrButtonGroupEducation->addButton(ui->rbtn_Other_4);

  connect(ui->rbtn_Male_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);
  connect(ui->rbtn_Female_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);
  connect(ui->rbtn_Doctor_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);
  connect(ui->rbtn_Master_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);
  connect(ui->rbtn_Bachelor_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);
  connect(ui->rbtn_Other_4, &QRadioButton::clicked, this,
          &QRadioButtonDemo::onRadioButtonClicked);

  // 设置默认选中
  ui->rbtn_Male_3->setChecked(true);
  ui->rbtn_Doctor_3->setChecked(true);
  ui->rbtn_Male_4->setChecked(true);
  ui->rbtn_Doctor_4->setChecked(true);
  onRadioButtonClicked();
}

QRadioButtonDemo::~QRadioButtonDemo()
{
  delete ui;
}

void QRadioButtonDemo::on_pbtn_PrintSelectResult_clicked()
{
  QString str;

  // 添加性别
  if (ui->rbtn_Male_3->isChecked())
  {
    str += ui->rbtn_Male_3->text();
  }
  else if (ui->rbtn_Female_3->isChecked())
  {
    str += ui->rbtn_Female_3->text();
  }

  // 添加学历
  if (ui->rbtn_Doctor_3->isChecked())
  {
    str += ui->rbtn_Doctor_3->text();
  }
  else if (ui->rbtn_Master_3->isChecked())
  {
    str += ui->rbtn_Master_3->text();
  }
  else if (ui->rbtn_Bachelor_3->isChecked())
  {
    str += ui->rbtn_Bachelor_3->text();
  }
  else if (ui->rbtn_Other_3->isChecked())
  {
    str += ui->rbtn_Other_3->text();
  }

  ui->le_SelectResult_3->setText(str);
}

void QRadioButtonDemo::onRadioButtonClicked()
{
  QString qstr;

  // QButtonGroup::checkedId() 也可以使用这种方法，
  // 但是需要添加对应 ID ，比较麻烦
  qstr += m_ptrButtonGroupGender->checkedButton()->text();
  qstr += m_ptrButtonGroupEducation->checkedButton()->text();

  ui->le_SelectResult_4->setText(qstr);
}
