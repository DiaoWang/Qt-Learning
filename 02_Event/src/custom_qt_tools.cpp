#include "custom_qt_tools.h"

CustomQtTools::CustomQtTools()
{
}

CustomQtTools::~CustomQtTools()
{
}

void CustomQtTools::MoveToCenter(const QWidget& parent, QWidget& children)
{
  int posX = parent.size().width() / 2 - children.size().width() / 2;
  int posY = parent.size().height() / 2 - children.size().height() / 2;
  children.move(posX, posY);
}
