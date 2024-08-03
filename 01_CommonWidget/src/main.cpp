#include "demo00_common_widget.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  // 设置窗体风格为fusion
  a.setStyle(QStyleFactory::create("fusion"));

  CommonWidgetDemo w;
  w.show();
  return a.exec();
}
