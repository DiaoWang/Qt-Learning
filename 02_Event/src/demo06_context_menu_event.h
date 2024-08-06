#ifndef DEMO06_CONTEXT_MENU_EVENT_H
#define DEMO06_CONTEXT_MENU_EVENT_H

#include <QWidget>

class ContextMenuEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit ContextMenuEventDemo(QWidget* parent = nullptr);
  virtual ~ContextMenuEventDemo();
};

#endif // DEMO06_CONTEXT_MENU_EVENT_H
