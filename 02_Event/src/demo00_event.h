#ifndef DEMO00_EVENT_H
#define DEMO00_EVENT_H

#include <QButtonGroup>
#include <QStackedWidget>
#include <QWidget>

class EventDemo : public QWidget
{
  Q_OBJECT

public:
  explicit EventDemo(QWidget* parent = nullptr);
  virtual ~EventDemo();

private:
  void InitNavigationPanel();
  void InitOperationPanel();

private slots:
  void SwitchOperationPanel();

private:
  QWidget* m_ptrWgtNavigationPanel;
  QWidget* m_ptrWgtOperationPanel;
  QStackedWidget* m_ptrStackWgt;
  QButtonGroup* m_ptrBtnGroup;
};
#endif // DEMO00_EVENT_H
