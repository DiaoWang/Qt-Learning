#ifndef DEMO06_CONTEXT_MENU_EVENT_H
#define DEMO06_CONTEXT_MENU_EVENT_H

#include <QAction>
#include <QContextMenuEvent>
#include <QMenu>
#include <QWidget>

class ContextMenuEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit ContextMenuEventDemo(QWidget* parent = nullptr);
  virtual ~ContextMenuEventDemo();

private:
  virtual void contextMenuEvent(QContextMenuEvent* event) override;

private slots:
  void onActionTriggered();

private:
  QAction* m_actCut;
  QAction* m_actCopy;
  QAction* m_actPaste;
  QAction* m_actToUpper;
  QAction* m_actToLower;
  QAction* m_actHide;
  QMenu* m_menu;
};

#endif // DEMO06_CONTEXT_MENU_EVENT_H
