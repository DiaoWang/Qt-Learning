#include "demo01_qwidget.h"
#include "ui_demo01_qwidget.h"

#include <QMessageBox>
#include <QRect>
#include <QString>

QWidgetDemo::QWidgetDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QWidgetDemo)
{
  ui->setupUi(this);
}

QWidgetDemo::~QWidgetDemo()
{
  delete ui;
}

void QWidgetDemo::on_pbtn_GetGeometryAndSize_clicked()
{
  QRect rect = geometry();

  QString strInfo;
  strInfo += QString("左上：(%1, %2)\n")
               .arg(QString::number(rect.topLeft().x()),
                    QString::number(rect.topLeft().y()));
  strInfo += QString("右上：(%1, %2)\n")
               .arg(QString::number(rect.topRight().x()),
                    QString::number(rect.topRight().y()));
  strInfo += QString("左下：(%1, %2)\n")
               .arg(QString::number(rect.bottomLeft().x()),
                    QString::number(rect.bottomLeft().y()));
  strInfo += QString("右下：(%1, %2)\n")
               .arg(QString::number(rect.bottomRight().x()),
                    QString::number(rect.bottomRight().y()));
  strInfo += QString("宽度：%1\n").arg(QString::number(rect.width()));
  strInfo += QString("高度：%1").arg(QString::number(rect.height()));

  QMessageBox::information(this, "位置与大小", strInfo);
}

void QWidgetDemo::on_pbtn_SetSize_clicked()
{
  resize(400, 400);
}

void QWidgetDemo::on_pbtn_SetFixedSize_clicked()
{
  setFixedSize(500, 500);
}

void QWidgetDemo::on_pbtn_SetMinimumSize_clicked()
{
  setMinimumSize(300, 300);
}

void QWidgetDemo::on_pbtn_SetMaximumSize_clicked()
{
  setMaximumSize(600, 600);
}

void QWidgetDemo::on_pbtn_MoveToPosition_clicked()
{
  move(100, 100);
}

void QWidgetDemo::on_pbtn_SetTitle_clicked()
{
  setWindowTitle("新设置的标题");
}

void QWidgetDemo::on_pbtn_SetIcon_clicked()
{
  setWindowIcon(QIcon(":/img/stop_ff3040.png"));
}
