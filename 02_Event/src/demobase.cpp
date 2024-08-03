#include "demobase.h"

DemoBase::DemoBase(QWidget* parent)
    : QWidget(parent),
      m_vLayout{new QVBoxLayout(this)},
      m_label{new QLabel(this)}
{
  m_vLayout->setSpacing(0);
  m_vLayout->setContentsMargins(0, 0, 0, 0);

  m_label->setFrameShape(QFrame::NoFrame);
  m_label->setAlignment(Qt::AlignCenter);
  m_label->setFixedHeight(50);
  m_label->setStyleSheet("background-color: rgba(255, 220, 220, 200);");

  m_vLayout->addWidget(m_label);
  setLayout(m_vLayout);
}

DemoBase::~DemoBase()
{
}
