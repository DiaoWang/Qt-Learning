#include "demo00_common_widget.h"
#include "demobase.h"
#include "ui_demo00_common_widget.h"

#include <QMessageBox>

CommonWidgetDemo::CommonWidgetDemo(QWidget* parent)
    : QWidget(parent),
      ui(new Ui::CommonWidgetDemo),
      m_ptrQWidgetDemo(nullptr),
      m_ptrQPushButtonDemo(nullptr),
      m_ptrQLabelDemo(nullptr),
      m_ptrQLineEditDemo(nullptr),
      m_ptrQRadioButtonDemo(nullptr),
      m_ptrQCheckBoxDemo(nullptr),
      m_ptrQComboBoxDemo(nullptr),
      m_ptrQSpinBoxDemo(nullptr),
      m_ptrQSliderDemo(nullptr),
      m_ptrQProgressBarDemo(nullptr),
      m_ptrQListWidgetDemo(nullptr),
      m_ptrQTableWidgetDemo(nullptr)
{
  ui->setupUi(this);

  // 设置标题
  setWindowTitle("常用控件Demo");
  // 设置窗体icon
  setWindowIcon(DemoBase::GetQtIcon());
}

CommonWidgetDemo::~CommonWidgetDemo()
{
  delete ui;
}

void CommonWidgetDemo::onSubWindowClosed(uint8_t demoType)
{
  if (static_cast<uint8_t>(DemoType::INVALID) <= demoType)
  {
    throw std::out_of_range("Invalid value for DemoType");
  }

  DemoType eDemoType = static_cast<DemoType>(demoType);
  switch (eDemoType)
  {
  case DemoType::QWIDGET: {
    if (nullptr != m_ptrQWidgetDemo)
    {
      delete m_ptrQWidgetDemo;
      m_ptrQWidgetDemo = nullptr;
    }
  }
  break;
  case DemoType::QPUSHBUTTON: {
    if (nullptr != m_ptrQPushButtonDemo)
    {
      delete m_ptrQPushButtonDemo;
      m_ptrQPushButtonDemo = nullptr;
    }
  }
  break;
  case DemoType::QLABEL: {
    if (nullptr != m_ptrQLabelDemo)
    {
      delete m_ptrQLabelDemo;
      m_ptrQLabelDemo = nullptr;
    }
  }
  break;
  case DemoType::QLINEEDIT: {
    if (nullptr != m_ptrQLineEditDemo)
    {
      delete m_ptrQLineEditDemo;
      m_ptrQLineEditDemo = nullptr;
    }
  }
  break;
  case DemoType::QRADIOBUTTON: {
    if (nullptr != m_ptrQRadioButtonDemo)
    {
      delete m_ptrQRadioButtonDemo;
      m_ptrQRadioButtonDemo = nullptr;
    }
  }
  break;
  case DemoType::QCHECKBOX: {
    if (nullptr != m_ptrQCheckBoxDemo)
    {
      delete m_ptrQCheckBoxDemo;
      m_ptrQCheckBoxDemo = nullptr;
    }
  }
  break;
  case DemoType::QCOMBOBOX: {
    if (nullptr != m_ptrQComboBoxDemo)
    {
      delete m_ptrQComboBoxDemo;
      m_ptrQComboBoxDemo = nullptr;
    }
  }
  break;
  case DemoType::QSPINBOX: {
    if (nullptr != m_ptrQSpinBoxDemo)
    {
      delete m_ptrQSpinBoxDemo;
      m_ptrQSpinBoxDemo = nullptr;
    }
  }
  break;
  case DemoType::QSLIDER: {
    if (nullptr != m_ptrQSliderDemo)
    {
      delete m_ptrQSliderDemo;
      m_ptrQSliderDemo = nullptr;
    }
  }
  break;
  case DemoType::QPROGRESSBAR: {
    if (nullptr != m_ptrQProgressBarDemo)
    {
      delete m_ptrQProgressBarDemo;
      m_ptrQProgressBarDemo = nullptr;
    }
  }
  break;
  case DemoType::QLISTWIDGET: {
    if (nullptr != m_ptrQListWidgetDemo)
    {
      delete m_ptrQListWidgetDemo;
      m_ptrQListWidgetDemo = nullptr;
    }
  }
  break;
  case DemoType::QTABLEWIDGET: {
    if (nullptr != m_ptrQTableWidgetDemo)
    {
      delete m_ptrQTableWidgetDemo;
      m_ptrQTableWidgetDemo = nullptr;
    }
  }
  break;
  default:
    break;
  }
}

void CommonWidgetDemo::on_pbtn_QWidget_clicked()
{
  if (nullptr == m_ptrQWidgetDemo)
  {
    m_ptrQWidgetDemo = new QWidgetDemo(static_cast<uint8_t>(DemoType::QWIDGET));
    connect(m_ptrQWidgetDemo, &QWidgetDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQWidgetDemo->show();
}

void CommonWidgetDemo::on_pbtn_QPushButton_clicked()
{
  if (nullptr == m_ptrQPushButtonDemo)
  {
    m_ptrQPushButtonDemo =
      new QPushButtonDemo(static_cast<uint8_t>(DemoType::QPUSHBUTTON));
    connect(m_ptrQPushButtonDemo, &QPushButtonDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQPushButtonDemo->show();
}

void CommonWidgetDemo::on_pbtn_QLabel_clicked()
{
  if (nullptr == m_ptrQLabelDemo)
  {
    m_ptrQLabelDemo = new QLabelDemo(static_cast<uint8_t>(DemoType::QLABEL));
    connect(m_ptrQLabelDemo, &QLabelDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQLabelDemo->show();
}

void CommonWidgetDemo::on_pbtn_QLineEdit_clicked()
{
  if (nullptr == m_ptrQLineEditDemo)
  {
    m_ptrQLineEditDemo =
      new QLineEditDemo(static_cast<uint8_t>(DemoType::QLINEEDIT));
    connect(m_ptrQLineEditDemo, &QLineEditDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQLineEditDemo->show();
}

void CommonWidgetDemo::on_pbtn_QRadioButton_clicked()
{
  if (nullptr == m_ptrQRadioButtonDemo)
  {
    m_ptrQRadioButtonDemo =
      new QRadioButtonDemo(static_cast<uint8_t>(DemoType::QRADIOBUTTON));
    connect(m_ptrQRadioButtonDemo, &QRadioButtonDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQRadioButtonDemo->show();
}

void CommonWidgetDemo::on_pbtn_QCheckBox_clicked()
{
  if (nullptr == m_ptrQCheckBoxDemo)
  {
    m_ptrQCheckBoxDemo =
      new QCheckBoxDemo(static_cast<uint8_t>(DemoType::QCHECKBOX));
    connect(m_ptrQCheckBoxDemo, &QCheckBoxDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQCheckBoxDemo->show();
}

void CommonWidgetDemo::on_pbtn_QComboBox_clicked()
{
  if (nullptr == m_ptrQComboBoxDemo)
  {
    m_ptrQComboBoxDemo =
      new QComboBoxDemo(static_cast<uint8_t>(DemoType::QCOMBOBOX));
    connect(m_ptrQComboBoxDemo, &QComboBoxDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQComboBoxDemo->show();
}

void CommonWidgetDemo::on_pbtn_QSpinBox_clicked()
{
  if (nullptr == m_ptrQSpinBoxDemo)
  {
    m_ptrQSpinBoxDemo =
      new QSpinBoxDemo(static_cast<uint8_t>(DemoType::QSPINBOX));
    connect(m_ptrQSpinBoxDemo, &QSpinBoxDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQSpinBoxDemo->show();
}

void CommonWidgetDemo::on_pbtn_QSlider_clicked()
{
  if (nullptr == m_ptrQSliderDemo)
  {
    m_ptrQSliderDemo = new QSliderDemo(static_cast<uint8_t>(DemoType::QSLIDER));
    connect(m_ptrQSliderDemo, &QSliderDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQSliderDemo->show();
}

void CommonWidgetDemo::on_pbtn_QProgressBar_clicked()
{
  if (nullptr == m_ptrQProgressBarDemo)
  {
    m_ptrQProgressBarDemo =
      new QProgressBarDemo(static_cast<uint8_t>(DemoType::QPROGRESSBAR));
    connect(m_ptrQProgressBarDemo, &QProgressBarDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQProgressBarDemo->show();
}

void CommonWidgetDemo::on_pbtn_QListWidget_clicked()
{
  if (nullptr == m_ptrQListWidgetDemo)
  {
    m_ptrQListWidgetDemo =
      new QListWidgetDemo(static_cast<uint8_t>(DemoType::QLISTWIDGET));
    connect(m_ptrQListWidgetDemo, &QListWidgetDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQListWidgetDemo->show();
}

void CommonWidgetDemo::on_pbtn_QTableWidget_clicked()
{
  if (nullptr == m_ptrQTableWidgetDemo)
  {
    m_ptrQTableWidgetDemo =
      new QTableWidgetDemo(static_cast<uint8_t>(DemoType::QTABLEWIDGET));
    connect(m_ptrQTableWidgetDemo, &QTableWidgetDemo::windowClosed, this,
            &CommonWidgetDemo::onSubWindowClosed);
  }

  m_ptrQTableWidgetDemo->show();
}
