#include "demo04_drag_event.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QMimeData>
#include <QVBoxLayout>

DragEventDemo::DragEventDemo(QWidget* parent)
    : QWidget(parent)
{
  QVBoxLayout* vLayout = new QVBoxLayout(this);
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  DragEventTextEdit* txtEdit = new DragEventTextEdit(this);
  txtEdit->setPlaceholderText("要打开文件，将其拖入窗口中");

  vLayout->addWidget(txtEdit);

  setAcceptDrops(true);
}

DragEventDemo::~DragEventDemo()
{
}

// ---------- DragEventTextEdit ----------

DragEventTextEdit::DragEventTextEdit(QWidget* parent)
    : QTextEdit(parent)
{
}

DragEventTextEdit::~DragEventTextEdit()
{
}

void DragEventTextEdit::dragEnterEvent(QDragEnterEvent* event)
{
  // qDebug() << "QTextEdit::dragEnterEvent";

  /**
   * 即使你已经在窗口上调用了 setAcceptDrops(true) ，这只是告诉 Qt ，
   * 你的窗口愿意接受拖放操作。但是，具体的拖放行为还是需要你在相应的
   * 事件处理器中进行处理。当你在拖放操作中收到 QDragEnterEvent 或
   * QDropEvent 时，系统会检查你是否愿意接受该拖放操作。默认情况下，
   * 这些事件会被忽略，除非你明确地接受它们。在 QDragEnterEvent 或
   * QDropEvent 事件的处理函数中调用 acceptProposedAction() ，表示
   * 你接受系统所建议的拖放操作（例如，复制、移动等）
   */
  event->acceptProposedAction();
  QTextEdit::dragEnterEvent(event);
}

void DragEventTextEdit::dragLeaveEvent(QDragLeaveEvent* event)
{
  // qDebug() << "QTextEdit::dragLeaveEvent";

  QTextEdit::dragLeaveEvent(event);
}

void DragEventTextEdit::dragMoveEvent(QDragMoveEvent* event)
{
  // qDebug() << "QTextEdit::dragMoveEvent";

  QTextEdit::dragMoveEvent(event);
}

void DragEventTextEdit::dropEvent(QDropEvent* event)
{
  // qDebug() << "QTextEdit::dropEvent";

  auto urls = event->mimeData()->urls();
  if (urls.isEmpty())
  {
    return QTextEdit::dropEvent(event);
  }

  auto fileName = urls.first().toLocalFile();
  QFile file(fileName);
  if (file.open(QIODevice::ReadOnly))
  {
    setPlainText(file.readAll());
  }
  file.close();

  QTextEdit::dropEvent(event);
}

void DragEventTextEdit::wheelEvent(QWheelEvent* event)
{
  // qDebug() << "QTextEdit::wheelEvent";

  if (QApplication::keyboardModifiers() == Qt::ControlModifier)
  {
    if (event->angleDelta().y() > 0)
    {
      zoomIn();
    }
    else
    {
      zoomOut();
    }
    // 此时直接返回，不需要调用父类的事件处理函数，否则会一边滚动一边缩放
    return;
  }

  QTextEdit::wheelEvent(event);
}
