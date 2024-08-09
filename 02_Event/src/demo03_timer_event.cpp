#include "demo03_timer_event.h"

#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>

TimerEventDemo::TimerEventDemo(QWidget* parent)
    : QWidget(parent),
      m_lbCubeForTimerEvent(new QLabel(this)),
      m_lbCubeForTimerObject(new QLabel(this)),
      m_timer(new QTimer(this)),
      m_timerId(0),
      m_isStart(false)
{
  QVBoxLayout* vLayout = new QVBoxLayout(this);
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  m_lbCubeForTimerEvent->setFrameShape(QFrame::NoFrame);
  m_lbCubeForTimerEvent->setAlignment(Qt::AlignCenter);
  m_lbCubeForTimerEvent->setFixedWidth(80);
  m_lbCubeForTimerEvent->setFixedHeight(80);
  m_lbCubeForTimerEvent->setStyleSheet("background-color: rgb(255, 150, 150);");

  m_lbCubeForTimerObject->setFrameShape(QFrame::NoFrame);
  m_lbCubeForTimerObject->setAlignment(Qt::AlignCenter);
  m_lbCubeForTimerObject->setFixedWidth(80);
  m_lbCubeForTimerObject->setFixedHeight(80);
  m_lbCubeForTimerObject->setStyleSheet(
    "background-color: rgb(160, 200, 255);");

  QHBoxLayout* hLayout = new QHBoxLayout();
  hLayout->setSpacing(0);
  hLayout->setContentsMargins(0, 0, 0, 0);

  QPushButton* pbtnStart = new QPushButton(this);
  pbtnStart->setText("开始");
  QPushButton* pbtnStop = new QPushButton(this);
  pbtnStop->setText("停止");
  QPushButton* pbtnReset = new QPushButton(this);
  pbtnReset->setText("重置");

  hLayout->addWidget(pbtnStart);
  hLayout->addWidget(pbtnStop);
  hLayout->addWidget(pbtnReset);

  vLayout->addWidget(m_lbCubeForTimerEvent);
  vLayout->addWidget(m_lbCubeForTimerObject);
  vLayout->addLayout(hLayout);

  connect(pbtnStart, &QPushButton::clicked, this,
          &TimerEventDemo::onStartClicked);
  connect(pbtnStop, &QPushButton::clicked, this,
          &TimerEventDemo::onStopClicked);
  connect(pbtnReset, &QPushButton::clicked, this,
          &TimerEventDemo::onResetClicked);
  connect(m_timer, &QTimer::timeout, this, &TimerEventDemo::onTimerTimeout);
}

TimerEventDemo::~TimerEventDemo()
{
}

void TimerEventDemo::timerEvent(QTimerEvent* event)
{
  if (event->timerId() == m_timerId)
  {
    MoveCube(m_lbCubeForTimerEvent);
  }

  QWidget::timerEvent(event);
}

void TimerEventDemo::MoveCube(QWidget* wgt)
{
  auto dstX = wgt->x() + 5;
  if (dstX > width() - 1)
  {
    dstX = -wgt->width() + 1;
  }
  wgt->move(dstX, wgt->y());
}

void TimerEventDemo::onStartClicked()
{
  // unit is milliseconds
  m_timerId = startTimer(10, Qt::PreciseTimer);
  m_timer->start(20);
  m_isStart = true;
}

void TimerEventDemo::onStopClicked()
{
  if (m_isStart)
  {
    killTimer(m_timerId);
    m_timer->stop();
    m_isStart = false;
  }
}

void TimerEventDemo::onResetClicked()
{
  m_lbCubeForTimerEvent->move(0, m_lbCubeForTimerEvent->y());
  m_lbCubeForTimerObject->move(0, m_lbCubeForTimerObject->y());
}

void TimerEventDemo::onTimerTimeout()
{
  MoveCube(m_lbCubeForTimerObject);
}
