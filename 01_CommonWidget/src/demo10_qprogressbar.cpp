#include "demo10_qprogressbar.h"
#include "ui_demo10_qprogressbar.h"

QProgressBarDemo::QProgressBarDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QProgressBarDemo),
      m_tmrFileDownload(new QTimer(this)),
      m_tmrFileCopy(new QTimer(this))
{
  ui->setupUi(this);

  setFixedSize(400, 300);

  // 重新设置 QProgressBar 样式，默认Fusion风格太丑而且有进度条覆盖住文本的问题
  QString qstrStyleSheet =
    QString("QProgressBar {"
            "    border-radius: 3px;"
            "    text-align: center;"
            "}"
            "QProgressBar::chunk {"
            "    border-radius: 3px;"
            "    background-color: rgba(40, 200, 80, 200);"
            "}");
  ui->prgb_FileDownload->setStyleSheet(qstrStyleSheet);
  ui->prgb_FileCopy->setStyleSheet(qstrStyleSheet);
  ui->prgb_NetworkRequest->setStyleSheet(qstrStyleSheet);

  // 设置范围、初始值
  ui->prgb_FileDownload->setRange(0, 100);
  ui->prgb_FileDownload->setValue(0);

  ui->prgb_FileCopy->setFormat("%v/%m");
  ui->prgb_FileCopy->setRange(0, 1000);
  ui->prgb_FileCopy->setValue(321);
  // 都设为 0 时会变为进度无限循环动画，没有进度文本
  ui->prgb_NetworkRequest->setRange(0, 0);

  // 设定定时器间隔（毫秒）
  m_tmrFileDownload->setInterval(100);
  m_tmrFileCopy->setInterval(10);

  // 连接定时器信号槽
  connect(m_tmrFileDownload, &QTimer::timeout, this, [&]() {
    auto currentValue = ui->prgb_FileDownload->value();
    if (currentValue < ui->prgb_FileDownload->maximum())
    {
      ui->prgb_FileDownload->setValue(++currentValue);
    }
    else
    {
      m_tmrFileDownload->stop();
      ui->lb_FileDownload->setText("下载完成");
      ui->pbtn_StartDownload->setText("开始");
    }
  });

  connect(m_tmrFileCopy, &QTimer::timeout, this, [&]() {
    auto currentValue = ui->prgb_FileCopy->value();
    if (currentValue < ui->prgb_FileCopy->maximum())
    {
      ui->prgb_FileCopy->setValue(++currentValue);
    }
    else
    {
      m_tmrFileCopy->stop();
      ui->lb_FileCopy->setText("复制完成");
      ui->pbtn_StartCopy->setText("开始");
    }
  });
}

QProgressBarDemo::~QProgressBarDemo()
{
  delete ui;
}

void QProgressBarDemo::on_pbtn_StartDownload_clicked()
{
  if (ui->pbtn_StartDownload->text() == "暂停")
  {
    m_tmrFileDownload->stop();
    ui->lb_FileDownload->setText("已暂停，请点击继续");
    ui->pbtn_StartDownload->setText("继续");
    return;
  }

  if (ui->prgb_FileDownload->value() == ui->prgb_FileDownload->maximum())
  {
    ui->prgb_FileDownload->reset();
  }

  ui->lb_FileDownload->setText("正在下载");
  ui->pbtn_StartDownload->setText("暂停");
  // 也可以在 start() 时同时设定间隔（毫秒）m_tmrFileDownload->start(100);
  m_tmrFileDownload->start();
}

void QProgressBarDemo::on_pbtn_StartCopy_clicked()
{
  if (ui->pbtn_StartCopy->text() == "暂停")
  {
    m_tmrFileCopy->stop();
    ui->lb_FileCopy->setText("已暂停，请点击继续");
    ui->pbtn_StartCopy->setText("继续");
    return;
  }

  if (ui->prgb_FileCopy->value() == ui->prgb_FileCopy->maximum())
  {
    ui->prgb_FileCopy->reset();
  }

  ui->lb_FileCopy->setText("正在复制");
  ui->pbtn_StartCopy->setText("暂停");
  m_tmrFileCopy->start();
}
