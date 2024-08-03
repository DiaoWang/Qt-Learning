#ifndef DEMOBASE_H
#define DEMOBASE_H

#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class DemoBase : public QWidget
{
  Q_OBJECT
protected:
  explicit DemoBase(QWidget* parent = nullptr);
  virtual ~DemoBase();

protected:
  QVBoxLayout* m_vLayout;
  QLabel* m_label;
};

#endif // DEMOBASE_H
