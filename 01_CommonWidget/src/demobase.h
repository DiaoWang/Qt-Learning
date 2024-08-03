#ifndef DEMOBASE_H
#define DEMOBASE_H

#include <QIcon>
#include <QWidget>

class DemoBase : public QWidget
{
  Q_OBJECT

public:
  static const QIcon& GetQtIcon();

protected:
  explicit DemoBase(
    const uint8_t demoType,
    QWidget* parent = nullptr); // Protected constructor to prevent
                                // instantiation from outside
  virtual ~DemoBase();
  virtual void closeEvent(QCloseEvent* event) override;

signals:
  void windowClosed(const uint8_t demoType);

protected:
  uint8_t m_u8DemoType;
};

#endif // DEMOBASE_H
