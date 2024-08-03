#include "demo03_qlabel.h"
#include "ui_demo03_qlabel.h"

#include <QMessageBox>
#include <QPixmap>
#include <QTime>

QLabelDemo::QLabelDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QLabelDemo),
      m_uImageIndex(0)
{
  ui->setupUi(this);

  m_qvecImages.emplace_back(QPixmap(":/img/focus.png"));
  m_qvecImages.emplace_back(QPixmap(":/img/power.png"));
  m_qvecImages.emplace_back(QPixmap(":/img/signal.png"));
  m_qvecImages.emplace_back(QPixmap(":/img/start_4acf5a.png"));
  m_qvecImages.emplace_back(QPixmap(":/img/stop_ff3040.png"));
  ui->lb_Image->setPixmap(
    m_qvecImages.at(m_qvecImages.size() - 1)
      .scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
  ui->lb_Image->setAlignment(Qt::AlignCenter);
}

QLabelDemo::~QLabelDemo()
{
  delete ui;
}

void QLabelDemo::on_pbtn_GetText_clicked()
{
  QMessageBox::information(this, "获取文本", ui->lb_Time->text());
}

void QLabelDemo::on_pbtn_SetText_clicked()
{
  ui->lb_Time->setText(QTime::currentTime().toString());
}

void QLabelDemo::on_pbtn_AlignLeft_clicked()
{
  ui->lb_TextAlignment->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
}

void QLabelDemo::on_pbtn_AlignCenter_clicked()
{
  ui->lb_TextAlignment->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
}

void QLabelDemo::on_pbtn_AlignRight_clicked()
{
  ui->lb_TextAlignment->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
}

void QLabelDemo::on_pbtn_DisableWordWrap_clicked()
{
  ui->lb_WordWrap->setWordWrap(false);
}

void QLabelDemo::on_pbtn_EnableWordWrap_clicked()
{
  ui->lb_WordWrap->setWordWrap(true);
}

void QLabelDemo::on_pbtn_SwitchImage_clicked()
{
  if (0 == m_qvecImages.size())
  {
    return;
  }

  if (m_uImageIndex >= m_qvecImages.size())
  {
    m_uImageIndex = 0;
  }

  ui->lb_Image->setPixmap(
    m_qvecImages.at(m_uImageIndex)
      .scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
  ui->lb_Image->setAlignment(Qt::AlignCenter);

  ++m_uImageIndex;
}
