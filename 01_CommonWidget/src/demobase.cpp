#include "demobase.h"

DemoBase::DemoBase(const uint8_t demoType, QWidget* parent)
    : QWidget(parent),
      m_u8DemoType(demoType)
{
  setWindowIcon(GetQtIcon());
}

DemoBase::~DemoBase()
{
}

// static
const QIcon& DemoBase::GetQtIcon()
{
  static QIcon iconQt(":/icon/qt_256.ico");
  return iconQt;
}

void DemoBase::closeEvent(QCloseEvent* event)
{
  // 发射 windowClosed 信号以通知主窗口子窗口已关闭
  emit windowClosed(m_u8DemoType);
  // 调用基类事件处理函数继续事件处理流程
  QWidget::closeEvent(event);
}
