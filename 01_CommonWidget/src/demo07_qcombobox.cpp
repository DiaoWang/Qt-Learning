#include "demo07_qcombobox.h"
#include "ui_demo07_qcombobox.h"

#include <QMap>
#include <QString>
#include <QStringList>
#include <QVector>

QComboBoxDemo::QComboBoxDemo(const uint8_t demoType, QWidget* parent)
    : DemoBase(demoType, parent),
      ui(new Ui::QComboBoxDemo)
{
  ui->setupUi(this);

  setFixedSize(400, 200);

  ui->le_Name->setText("不知名大学生");

  m_qvecProvinceAndCity.emplace_back(
    qMakePair(QString("北京市"), QStringList{"北京市"}));
  m_qvecProvinceAndCity.emplace_back(
    qMakePair(QString("上海市"), QStringList{"上海市"}));
  m_qvecProvinceAndCity.emplace_back(
    qMakePair(QString("江苏省"),
              QStringList{"南京市", "苏州市", "无锡市", "常州市", "镇江市",
                          "扬州市", "南通市", "泰州市", "徐州市", "盐城市",
                          "淮安市", "连云港市", "宿迁市"}));
  m_qvecProvinceAndCity.emplace_back(qMakePair(
    QString("浙江省"),
    QStringList{"杭州市", "宁波市", "温州市", "嘉兴市", "湖州市", "绍兴市",
                "金华市", "衢州市", "舟山市", "台州市", "丽水市"}));
  m_qvecProvinceAndCity.emplace_back(qMakePair(
    QString("安徽省"),
    QStringList{"合肥市", "淮北市", "亳州市", "宿州市", "蚌埠市", "阜阳市",
                "淮南市", "滁州市", "六安市", "马鞍山市", "芜湖市", "宣城市",
                "铜陵市", "池州市", "安庆市", "黄山市"}));
  m_qvecProvinceAndCity.emplace_back(
    qMakePair(QString("黑龙江省"),
              QStringList{"哈尔滨市", "齐齐哈尔市", "鸡西市", "鹤岗市",
                          "双鸭山市", "大庆市", "伊春市", "佳木斯市",
                          "七台河市", "牡丹江市", "黑河市", "绥化市"}));

  // 在 Designer 界面右键单击 QComboBox - 编辑项目已经添加学校项目
  // 添加省份项目
  const QIcon& iconQt = DemoBase::GetQtIcon(); // 供添加项使用的图标
  for (const auto& pair : m_qvecProvinceAndCity)
  {
    ui->cbbox_Province->addItem(iconQt, pair.first);
  }

  // 添加城市项目
  ui->cbbox_City->addItems(m_qvecProvinceAndCity.at(0).second);

  setLineEditResult();
}

QComboBoxDemo::~QComboBoxDemo()
{
  delete ui;
}

void QComboBoxDemo::setLineEditResult()
{
  QString qstrResult =
    QString("%1毕业于%2，来自%3%4")
      .arg(ui->le_Name->text(), ui->cbbox_School->currentText(),
           ui->cbbox_Province->currentText(), ui->cbbox_City->currentText());

  ui->le_Result->setText(qstrResult);
}

void QComboBoxDemo::on_le_Name_textChanged(const QString&)
{
  setLineEditResult();
}

void QComboBoxDemo::on_cbbox_School_currentTextChanged(const QString&)
{
  setLineEditResult();
}

void QComboBoxDemo::on_cbbox_Province_currentIndexChanged(int index)
{
  ui->cbbox_City->clear();
  ui->cbbox_City->addItems(m_qvecProvinceAndCity.at(index).second);

  setLineEditResult();
}

void QComboBoxDemo::on_cbbox_City_currentTextChanged(const QString&)
{
  setLineEditResult();
}
