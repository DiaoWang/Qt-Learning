#include "demo02_qpushbutton.h"
#include "ui_demo02_qpushbutton.h"

#include <QDebug>

QPushButtonDemo::QPushButtonDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QPushButtonDemo),
      m_bPlayFlag(true),
      m_bConnectFlag(false)
{
  ui->setupUi(this);

  setFixedSize(280, 380);
}

QPushButtonDemo::~QPushButtonDemo()
{
  delete ui;
}

void QPushButtonDemo::on_pbtn_Play_clicked()
{
  if (m_bPlayFlag)
  {
    m_bPlayFlag = false;
    ui->pbtn_Play->setText("停止");
    ui->pbtn_Play->setIcon(QIcon(":/img/stop_ff3040.png"));
  }
  else
  {
    m_bPlayFlag = true;
    ui->pbtn_Play->setText("启动");
    ui->pbtn_Play->setIcon(QIcon(":/img/start_4acf5a.png"));
  }
}

void QPushButtonDemo::on_pbtn_Connect_clicked()
{
  if (m_bConnectFlag)
  {
    m_bConnectFlag = false;
    ui->pbtn_Connect->setText("连接");
    ui->pbtn_SendCmd->setEnabled(false);
  }
  else
  {
    m_bConnectFlag = true;
    ui->pbtn_Connect->setText("断开");
    ui->pbtn_SendCmd->setEnabled(true);
  }
}

void QPushButtonDemo::on_pbtn_SignalDemo_clicked()
{
  qDebug() << "Signal - clicked";
}

void QPushButtonDemo::on_pbtn_SignalDemo_pressed()
{
  qDebug() << "Signal - pressed";
}

void QPushButtonDemo::on_pbtn_SignalDemo_released()
{
  qDebug() << "Signal - released";
}
