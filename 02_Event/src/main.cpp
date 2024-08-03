#include "demo00_event.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  // 设置窗体风格为fusion
  a.setStyle(QStyleFactory::create("fusion"));

  EventDemo w;
  w.show();
  return a.exec();
}
