#include "demo05_paint_event.h"

#include <QDateTime>
#include <QDebug>
#include <QPainter>
#include <QRandomGenerator64>
#include <QVBoxLayout>

PaintEventDemo::PaintEventDemo(QWidget* parent)
    : QWidget(parent),
      m_lowerBound(0),
      m_upperBound(0),
      m_realMinVariation(0),
      m_realMaxVariation(0),
      m_lbHighTemperature(new QLabel(this)),
      m_lbLowTemperature(new QLabel(this))
{
  QVBoxLayout* vLayout = new QVBoxLayout(this);
  vLayout->setSpacing(0);
  vLayout->setContentsMargins(0, 0, 0, 0);

  m_lbHighTemperature->setFrameShape(QFrame::NoFrame);
  m_lbHighTemperature->setStyleSheet(
    "background-color: rgba(255, 220, 220, 80);");
  m_lbLowTemperature->setFrameShape(QFrame::NoFrame);
  m_lbLowTemperature->setStyleSheet(
    "background-color: rgba(200, 220, 255, 80);");

  vLayout->addWidget(m_lbHighTemperature);
  vLayout->addWidget(m_lbLowTemperature);

  m_lbHighTemperature->installEventFilter(this);
  m_lbLowTemperature->installEventFilter(this);

  UpdateTemperatures();
}

PaintEventDemo::~PaintEventDemo()
{
}

bool PaintEventDemo::eventFilter(QObject* watched, QEvent* event)
{
  if (event->type() == QEvent::MouseButtonDblClick)
  {
    UpdateTemperatures();
  }
  else if (watched == m_lbHighTemperature && event->type() == QEvent::Paint)
  {
    PaintHighTemperature();
  }
  else if (watched == m_lbLowTemperature && event->type() == QEvent::Paint)
  {
    PaintLowTemperature();
  }

  return QWidget::eventFilter(watched, event);
}
void PaintEventDemo::UpdateTemperatures()
{
  constexpr int MIN_HIGH_TEMPERATURE = -20;
  constexpr int MAX_HIGH_TEMPERATURE = 45;
  constexpr int MIN_VARIATION = 5;
  constexpr int MAX_VARIATION = 15;
  constexpr int FLUCTUATION = 6; // 多日之间的温度波动

  QRandomGenerator64 random;
  random.seed(QDateTime::currentMSecsSinceEpoch());

  // QRandomGenerator::bounded() 产生 [min, max) 范围内的随机数，所以统一 max+1
  auto referenceTemperature =
    random.bounded(MIN_HIGH_TEMPERATURE, MAX_HIGH_TEMPERATURE + 1);
  m_lowerBound = referenceTemperature - FLUCTUATION < MIN_HIGH_TEMPERATURE
                   ? MIN_HIGH_TEMPERATURE
                   : referenceTemperature - FLUCTUATION;
  m_upperBound = referenceTemperature + FLUCTUATION > MAX_HIGH_TEMPERATURE
                   ? MAX_HIGH_TEMPERATURE
                   : referenceTemperature + FLUCTUATION;

  auto newVariation = m_realMaxVariation;
  m_realMinVariation = MAX_VARIATION;
  m_realMaxVariation = MIN_VARIATION;
  for (int i = 0; i < TEMPERATURE_COUNT; ++i)
  {
    newVariation =
      random.bounded(MIN_VARIATION, MAX_VARIATION + 1); // 随机产生昼夜温差
    if (newVariation < m_realMinVariation)
    {
      m_realMinVariation = newVariation;
    }
    if (newVariation > m_realMaxVariation)
    {
      m_realMaxVariation = newVariation;
    }
    m_temperatures.at(i).first = random.bounded(m_lowerBound, m_upperBound + 1);
    m_temperatures.at(i).second = m_temperatures.at(i).first - newVariation;
  }

  m_lbHighTemperature->update();
  m_lbLowTemperature->update();
}

void PaintEventDemo::PaintHighTemperature()
{
  QPainter painter(m_lbHighTemperature);
  QPen pen = painter.pen();
  pen.setWidth(POINT_RADIUS);
  pen.setStyle(Qt::SolidLine);
  pen.setColor(QColor(255, 100, 100)); // Pen 设置边框颜色
  painter.setPen(pen);
  painter.setBrush(QColor(255, 100, 100)); // Brush 设置内部填充色
  painter.setRenderHint(QPainter::Antialiasing, true); // 启用抗锯齿

  auto ComputePoint = [&](QPoint& point, int index) {
    point.setX(PADDING +
               (m_lbHighTemperature->width() - PADDING * 2) / 6 * index);
    point.setY(m_lbHighTemperature->height() - PADDING -
               (m_lbHighTemperature->height() - PADDING * 2) /
                 (m_upperBound - m_lowerBound) *
                 (m_temperatures.at(index).first - m_lowerBound));
  };

  auto DrawPoint = [&](const QPoint& point, int index) {
    painter.drawEllipse(point, POINT_RADIUS, POINT_RADIUS);
    painter.drawText(
      point.x() - TEXT_OFFSET_X, point.y() - TEXT_OFFSET_Y,
      QString("%1℃").arg(QString::number(m_temperatures.at(index).first)));
  };

  QPoint pointLeft;
  QPoint pointRight;

  // 绘制最右侧点
  ComputePoint(pointRight, TEMPERATURE_COUNT - 1);
  DrawPoint(pointRight, TEMPERATURE_COUNT - 1);

  for (int i = TEMPERATURE_COUNT - 2; i > 0; --i)
  {
    ComputePoint(pointLeft, i);
    DrawPoint(pointLeft, i);

    // 绘制线段
    painter.drawLine(pointRight, pointLeft);
    pointRight = pointLeft;
  }

  // 绘制最左侧点
  ComputePoint(pointLeft, 0);
  DrawPoint(pointLeft, 0);
  // 切换为虚线
  pen.setStyle(Qt::DotLine);
  painter.setPen(pen);
  // 绘制线段
  painter.drawLine(pointLeft, pointRight);
}

void PaintEventDemo::PaintLowTemperature()
{
  QPainter painter(m_lbLowTemperature);
  QPen pen = painter.pen();
  pen.setWidth(POINT_RADIUS);
  pen.setColor(QColor(80, 100, 255)); // Pen 设置边框颜色
  painter.setPen(pen);
  painter.setBrush(QColor(80, 100, 255)); // Brush 设置内部填充色
  painter.setRenderHint(QPainter::Antialiasing, true); // 启用抗锯齿

  auto ComputePoint = [&](QPoint& point, int index) {
    point.setX(PADDING +
               (m_lbLowTemperature->width() - PADDING * 2) / 6 * index);
    point.setY(m_lbLowTemperature->height() - PADDING -
               (m_lbLowTemperature->height() - PADDING * 2) /
                 (m_upperBound - m_realMinVariation - m_lowerBound +
                  m_realMaxVariation) /* 低温范围 */
                 * (m_temperatures.at(index).second - m_lowerBound +
                    m_realMaxVariation));
  };

  auto DrawPoint = [&](const QPoint& point, int index) {
    painter.drawEllipse(point, POINT_RADIUS, POINT_RADIUS);
    painter.drawText(
      point.x() - TEXT_OFFSET_X, point.y() - TEXT_OFFSET_Y,
      QString("%1℃").arg(QString::number(m_temperatures.at(index).second)));
  };

  QPoint pointLeft;
  QPoint pointRight;

  // 绘制最右侧点
  ComputePoint(pointRight, TEMPERATURE_COUNT - 1);
  DrawPoint(pointRight, TEMPERATURE_COUNT - 1);

  for (int i = TEMPERATURE_COUNT - 2; i > 0; --i)
  {
    ComputePoint(pointLeft, i);
    DrawPoint(pointLeft, i);

    // 绘制线段
    painter.drawLine(pointLeft, pointRight);
    pointRight = pointLeft;
  }

  // 绘制最左侧点
  ComputePoint(pointLeft, 0);
  DrawPoint(pointLeft, 0);
  // 切换为虚线
  pen.setStyle(Qt::DotLine);
  painter.setPen(pen);
  // 绘制线段
  painter.drawLine(pointLeft, pointRight);
}
