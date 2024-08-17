#ifndef DEMO00_EVENT_H
#define DEMO00_EVENT_H

#include <QButtonGroup>
#include <QEvent>
#include <QMouseEvent>
#include <QStackedWidget>
#include <QWidget>

class EventDemo : public QWidget
{
  Q_OBJECT

  // 用于无边框窗口时判断缩放的方向
  enum ScalingDirection
  {
    TOP = 0,
    BOTTOM,
    LEFT,
    RIGHT,
    TOP_LEFT,
    TOP_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT,
    NON_EDGE
  };

public:
  explicit EventDemo(QWidget* parent = nullptr);
  virtual ~EventDemo();

private:
  void InitNavigationPanel();
  void InitOperationPanel();

  virtual void mousePressEvent(QMouseEvent* event) override;
  virtual void mouseReleaseEvent(QMouseEvent* event) override;
  virtual void mouseMoveEvent(QMouseEvent* event) override;
  virtual bool event(QEvent* event) override;
  // virtual bool eventFilter(QObject* watched, QEvent* event) override;

private slots:
  void SwitchOperationPanel();

private:
  static constexpr int EDGE_THRESHOLD = 10;
  QWidget* m_wgtNavigationPanel;
  QWidget* m_wgtOperationPanel;
  QStackedWidget* m_stackWidget;
  QButtonGroup* m_btnGroup;
  // 无边框窗口时使用
  QPoint m_mouseOffset;
  ScalingDirection m_scalingDirection;
  bool m_disabledHoverEvent;
};
#endif // DEMO00_EVENT_H
