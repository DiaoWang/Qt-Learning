#ifndef DEMO02_KEYBOARD_EVENT_H
#define DEMO02_KEYBOARD_EVENT_H

#include <QKeyEvent>
#include <QLabel>
#include <QWidget>
#include <cstdint>

class KeyboardEventDemo : public QWidget
{
  Q_OBJECT

public:
  explicit KeyboardEventDemo(QWidget* parent = nullptr);
  virtual ~KeyboardEventDemo();

private:
  virtual void keyPressEvent(QKeyEvent* event) override;
  virtual void keyReleaseEvent(QKeyEvent* event) override;

private:
  QLabel* m_lbCube;
  bool m_keyUpPressed;
  bool m_keyDownPressed;
  bool m_keyLeftPressed;
  bool m_keyRightPressed;
};

#endif // DEMO02_KEYBOARD_EVENT_H
