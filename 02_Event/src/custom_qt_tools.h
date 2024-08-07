#ifndef CUSTOM_QT_TOOLS_H
#define CUSTOM_QT_TOOLS_H

#include <QObject>
#include <QWidget>

class CustomQtTools
{
public:
  CustomQtTools();
  ~CustomQtTools();

  static void MoveToCenter(const QWidget& parent, QWidget& children);
};

#endif // CUSTOM_QT_TOOLS_H
