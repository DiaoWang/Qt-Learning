#ifndef DEMO05_PAINT_EVENT_H
#define DEMO05_PAINT_EVENT_H

#include <QEvent>
#include <QLabel>
#include <QWidget>
#include <array>
#include <utility>

class PaintEventDemo : public QWidget
{
  Q_OBJECT
public:
  explicit PaintEventDemo(QWidget* parent = nullptr);
  virtual ~PaintEventDemo();

private:
  virtual bool eventFilter(QObject* watched, QEvent* event) override;
  void UpdateTemperatures();
  void PaintHighTemperature();
  void PaintLowTemperature();

private:
  static constexpr int TEMPERATURE_COUNT = 7;
  static constexpr int PADDING = 40;
  static constexpr int TEXT_OFFSET_X = 15;
  static constexpr int TEXT_OFFSET_Y = 25;
  static constexpr int POINT_RADIUS = 5;
  int m_lowerBound;
  int m_upperBound;
  int m_realMinVariation;
  int m_realMaxVariation;
  QLabel* m_lbHighTemperature;
  QLabel* m_lbLowTemperature;
  std::array<std::pair<int, int>, TEMPERATURE_COUNT> m_temperatures;
};

#endif // DEMO05_PAINT_EVENT_H
