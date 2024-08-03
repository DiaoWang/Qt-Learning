#ifndef DEMO03_QLABEL_H
#define DEMO03_QLABEL_H

#include "demobase.h"
#include <QWidget>

namespace Ui
{
  class QLabelDemo;
}

class QLabelDemo : public DemoBase
{
  Q_OBJECT

public:
  explicit QLabelDemo(const uint8_t demoType, QWidget* parent = nullptr);
  virtual ~QLabelDemo();

private slots:
  void on_pbtn_GetText_clicked();

  void on_pbtn_SetText_clicked();

  void on_pbtn_AlignLeft_clicked();

  void on_pbtn_AlignCenter_clicked();

  void on_pbtn_AlignRight_clicked();

  void on_pbtn_DisableWordWrap_clicked();

  void on_pbtn_EnableWordWrap_clicked();

  void on_pbtn_SwitchImage_clicked();

private:
  Ui::QLabelDemo* ui;
  uint m_uImageIndex;
  QVector<QPixmap> m_qvecImages;
};

#endif // DEMO03_QLABEL_H
