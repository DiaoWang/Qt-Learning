#ifndef DEMO08_FRAMELESS_WINDOW_H
#define DEMO08_FRAMELESS_WINDOW_H

#include <QMouseEvent>
#include <QPoint>
#include <QPushButton>
#include <QWidget>

class FramelessWindowDemo : public QWidget
{
  Q_OBJECT
public:
  explicit FramelessWindowDemo(QWidget* parent = nullptr);
  virtual ~FramelessWindowDemo();

private:
  void InitPushButtons();

private:
  QWidget* m_wgtToplevelWindow;
  QPushButton* m_pbtnFrameless;
  QPushButton* m_pbtnShowMinimized;
  QPushButton* m_pbtnShowMaximized;
  QPushButton* m_pbtnShowFullScreen;
  QPushButton* m_pbtnCloseWindow;
};

#endif // DEMO08_FRAMELESS_WINDOW_H
