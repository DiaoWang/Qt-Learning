#include "demo09_qslider.h"
#include "ui_demo09_qslider.h"

QSliderDemo::QSliderDemo(QWidget *parent) :
      QWidget(parent),
      ui(new Ui::QSliderDemo)
{
  ui->setupUi(this);
}

QSliderDemo::~QSliderDemo()
{
  delete ui;
}
