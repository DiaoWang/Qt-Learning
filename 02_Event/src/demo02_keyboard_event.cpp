#include "demo02_keyboard_event.h"

#include <QDebug>

KeyboardEventDemo::KeyboardEventDemo(QWidget* parent)
    : QWidget(parent),
      m_lbCube(new QLabel(this)),
      m_keyUpPressed(false),
      m_keyDownPressed(false),
      m_keyLeftPressed(false),
      m_keyRightPressed(false)
{
  m_lbCube->setFrameShape(QFrame::NoFrame);
  m_lbCube->setAlignment(Qt::AlignCenter);
  m_lbCube->setFixedWidth(80);
  m_lbCube->setFixedHeight(80);
  m_lbCube->setStyleSheet("background-color: rgb(160, 200, 255);");

  // 设置强焦点
  setFocusPolicy(Qt::StrongFocus);
}

KeyboardEventDemo::~KeyboardEventDemo()
{
}

void KeyboardEventDemo::keyPressEvent(QKeyEvent* event)
{
  auto dstX = m_lbCube->pos().x();
  auto dstY = m_lbCube->pos().y();
  const auto MIN_X = 0 - m_lbCube->width() + 1;
  const auto MIN_Y = 0 - m_lbCube->height() + 1;
  const auto MAX_X = width() - 1;
  const auto MAX_Y = height() - 1;
  int step = 10;

  if (event->modifiers() ==
      (Qt::ShiftModifier | Qt::ControlModifier | Qt::AltModifier))
  {
    step = 40;
  }
  else if (event->modifiers() == (Qt::ShiftModifier | Qt::ControlModifier))
  {
    step = 30;
  }
  else if (event->modifiers() == Qt::ControlModifier)
  {
    step = 20;
  }

  switch (event->key())
  {
  case Qt::Key_Up: {
    m_keyUpPressed = true;
  }
  break;
  case Qt::Key_Down: {
    m_keyDownPressed = true;
  }
  break;
  case Qt::Key_Left: {
    m_keyLeftPressed = true;
  }
  break;
  case Qt::Key_Right: {
    m_keyRightPressed = true;
  }
  break;
  default:
    break;
  }

  if (m_keyUpPressed)
  {
    if (dstY - step < MIN_Y)
    {
      dstY = MAX_Y;
    }
    else
    {
      dstY -= step;
    }
  }
  if (m_keyDownPressed)
  {
    if (dstY + step > MAX_Y)
    {
      dstY = MIN_Y;
    }
    else
    {
      dstY += step;
    }
  }
  if (m_keyLeftPressed)
  {
    if (dstX - step < MIN_X)
    {
      dstX = MAX_X;
    }
    else
    {
      dstX -= step;
    }
  }
  if (m_keyRightPressed)
  {
    if (dstX + step > MAX_X)
    {
      dstX = MIN_X;
    }
    else
    {
      dstX += step;
    }
  }

  m_lbCube->move(dstX, dstY);

  QWidget::keyPressEvent(event);
}

void KeyboardEventDemo::keyReleaseEvent(QKeyEvent* event)
{
  switch (event->key())
  {
  case Qt::Key_Up: {
    m_keyUpPressed = false;
  }
  break;
  case Qt::Key_Down: {
    m_keyDownPressed = false;
  }
  break;
  case Qt::Key_Left: {
    m_keyLeftPressed = false;
  }
  break;
  case Qt::Key_Right: {
    m_keyRightPressed = false;
  }
  break;
  default:
    break;
  }
}
