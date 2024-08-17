#include "demo08_frameless_window.h"

#include <QCursor>
#include <QDebug>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QVBoxLayout>

FramelessWindowDemo::FramelessWindowDemo(QWidget* parent)
    : QWidget(parent),
      m_wgtToplevelWindow(this),
      m_pbtnFrameless(new QPushButton(this)),
      m_pbtnShowMinimized(new QPushButton(this)),
      m_pbtnShowMaximized(new QPushButton(this)),
      m_pbtnShowFullScreen(new QPushButton(this)),
      m_pbtnCloseWindow(new QPushButton(this))
{
  QHBoxLayout* hLayout = new QHBoxLayout(this);
  hLayout->setSpacing(0);
  hLayout->setContentsMargins(0, 0, 0, 0);
  QVBoxLayout* vLayout = new QVBoxLayout();
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  QSpacerItem* hSpacer =
    new QSpacerItem(100, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

  hLayout->addSpacerItem(hSpacer);
  hLayout->addLayout(vLayout);

  InitPushButtons();

  vLayout->addWidget(m_pbtnFrameless);
  vLayout->addWidget(m_pbtnShowMinimized);
  vLayout->addWidget(m_pbtnShowMaximized);
  vLayout->addWidget(m_pbtnShowFullScreen);
  vLayout->addWidget(m_pbtnCloseWindow);
}

FramelessWindowDemo::~FramelessWindowDemo()
{
}

void FramelessWindowDemo::InitPushButtons()
{
  m_pbtnFrameless->setText("无边框窗口");
  m_pbtnFrameless->setStyleSheet(R"(
    QPushButton {
      padding-left: 10px;
      padding-right: 10px;
    }
    QPushButton:focus {
      outline: none;
    }
  )");
  m_pbtnShowMinimized->setText("最小化");
  m_pbtnShowMinimized->setStyleSheet(R"(
    QPushButton {
      padding-left: 10px;
      padding-right: 10px;
    }
    QPushButton:focus {
      outline: none;
    }
  )");
  m_pbtnShowMaximized->setText("最大化");
  m_pbtnShowMaximized->setStyleSheet(R"(
    QPushButton {
      padding-left: 10px;
      padding-right: 10px;
    }
    QPushButton:focus {
      outline: none;
    }
  )");
  m_pbtnShowFullScreen->setText("全屏");
  m_pbtnShowFullScreen->setStyleSheet(R"(
    QPushButton {
      padding-left: 10px;
      padding-right: 10px;
    }
    QPushButton:focus {
      outline: none;
    }
  )");
  m_pbtnCloseWindow->setText("关闭");
  m_pbtnCloseWindow->setStyleSheet(R"(
    QPushButton {
      padding-left: 10px;
      padding-right: 10px;
    }
    QPushButton:focus {
      outline: none;
    }
  )");

  m_pbtnFrameless->setSizePolicy(QSizePolicy::Preferred,
                                 QSizePolicy::Expanding);
  m_pbtnShowMinimized->setSizePolicy(QSizePolicy::Preferred,
                                     QSizePolicy::Expanding);
  m_pbtnShowMaximized->setSizePolicy(QSizePolicy::Preferred,
                                     QSizePolicy::Expanding);
  m_pbtnShowFullScreen->setSizePolicy(QSizePolicy::Preferred,
                                      QSizePolicy::Expanding);
  m_pbtnCloseWindow->setSizePolicy(QSizePolicy::Preferred,
                                   QSizePolicy::Expanding);

  while (m_wgtToplevelWindow->windowType() != Qt::Window)
  { // windowType() 为 Qt::Window 表示顶层窗口
    m_wgtToplevelWindow = m_wgtToplevelWindow->parentWidget();
  }

  connect(m_pbtnFrameless, &QPushButton::clicked, this, [&]() {
    if (m_wgtToplevelWindow->windowFlags() & Qt::FramelessWindowHint)
    {
      m_pbtnFrameless->setText("无边框窗口");
      m_wgtToplevelWindow->setWindowFlags(m_wgtToplevelWindow->windowFlags() &
                                          ~Qt::FramelessWindowHint);
      // 设置 WindowFlags 窗口会自动隐藏，需要调用 show() 显示
      m_wgtToplevelWindow->show();

      // QWidget* wgtParent = this;
      // while (wgtParent->windowType() != Qt::Window)
      // {
      //   wgtParent->setMouseTracking(false);
      //   wgtParent = wgtParent->parentWidget();
      // }
      // m_wgtToplevelWindow->setMouseTracking(false);
    }
    else
    {
      m_pbtnFrameless->setText("有边框窗口");
      m_wgtToplevelWindow->setWindowFlags(Qt::FramelessWindowHint);
      // 设置 WindowFlags 窗口会自动隐藏，需要调用 show() 显示
      m_wgtToplevelWindow->show();

      // QWidget* wgtParent = this;
      // while (wgtParent->windowType() != Qt::Window)
      // {
      //   wgtParent->setMouseTracking(true);
      //   wgtParent = wgtParent->parentWidget();
      // }
      // m_wgtToplevelWindow->setMouseTracking(true);
    }
  });
  connect(m_pbtnShowMinimized, &QPushButton::clicked, this,
          [&]() { m_wgtToplevelWindow->showMinimized(); });
  connect(m_pbtnShowMaximized, &QPushButton::clicked, this, [&]() {
    if (m_wgtToplevelWindow->isMaximized())
    {
      m_pbtnShowFullScreen->setDisabled(false);

      m_pbtnShowMaximized->setText("最大化");
      m_wgtToplevelWindow->showNormal();
    }
    else
    {
      // 全屏与最大化互斥
      m_pbtnShowFullScreen->setDisabled(true);

      m_pbtnShowMaximized->setText("窗口");
      m_wgtToplevelWindow->showMaximized();
    }
  });
  connect(m_pbtnShowFullScreen, &QPushButton::clicked, this, [&]() {
    if (m_wgtToplevelWindow->isFullScreen())
    {
      m_pbtnShowMaximized->setDisabled(false);
      m_pbtnFrameless->setDisabled(false);

      m_pbtnShowFullScreen->setText("全屏");
      m_wgtToplevelWindow->showNormal();
    }
    else
    {
      // 全屏与最大化互斥
      m_pbtnShowMaximized->setDisabled(true);
      // 全屏与无边框窗口互斥
      m_pbtnFrameless->setDisabled(true);

      m_pbtnShowFullScreen->setText("窗口");
      m_wgtToplevelWindow->showFullScreen();
    }
  });
  connect(m_pbtnCloseWindow, &QPushButton::clicked, this,
          [&]() { m_wgtToplevelWindow->close(); });
}
