/********************************************************************************
** Form generated from reading UI file 'demo00_common_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO00_COMMON_WIDGET_H
#define UI_DEMO00_COMMON_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommonWidgetDemo
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbtn_QListWidget;
    QPushButton *pbtn_QRadioButton;
    QPushButton *pbtn_QSlider;
    QPushButton *pbtn_QProgressBar;
    QPushButton *pbtn_QComboBox;
    QPushButton *pbtn_QWidget;
    QPushButton *pbtn_QPushButton;
    QPushButton *pbtn_QLabel;
    QPushButton *pbtn_QCheckBox;
    QPushButton *pbtn_QSpinBox;
    QPushButton *pbtn_QTableWidget;
    QPushButton *pbtn_QLineEdit;

    void setupUi(QWidget *CommonWidgetDemo)
    {
        if (CommonWidgetDemo->objectName().isEmpty())
            CommonWidgetDemo->setObjectName(QString::fromUtf8("CommonWidgetDemo"));
        CommonWidgetDemo->resize(400, 400);
        CommonWidgetDemo->setMinimumSize(QSize(300, 300));
        CommonWidgetDemo->setMaximumSize(QSize(600, 600));
        gridLayout = new QGridLayout(CommonWidgetDemo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbtn_QListWidget = new QPushButton(CommonWidgetDemo);
        pbtn_QListWidget->setObjectName(QString::fromUtf8("pbtn_QListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbtn_QListWidget->sizePolicy().hasHeightForWidth());
        pbtn_QListWidget->setSizePolicy(sizePolicy);
        pbtn_QListWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QListWidget, 5, 0, 1, 1);

        pbtn_QRadioButton = new QPushButton(CommonWidgetDemo);
        pbtn_QRadioButton->setObjectName(QString::fromUtf8("pbtn_QRadioButton"));
        sizePolicy.setHeightForWidth(pbtn_QRadioButton->sizePolicy().hasHeightForWidth());
        pbtn_QRadioButton->setSizePolicy(sizePolicy);
        pbtn_QRadioButton->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QRadioButton, 2, 0, 1, 1);

        pbtn_QSlider = new QPushButton(CommonWidgetDemo);
        pbtn_QSlider->setObjectName(QString::fromUtf8("pbtn_QSlider"));
        sizePolicy.setHeightForWidth(pbtn_QSlider->sizePolicy().hasHeightForWidth());
        pbtn_QSlider->setSizePolicy(sizePolicy);
        pbtn_QSlider->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QSlider, 4, 0, 1, 1);

        pbtn_QProgressBar = new QPushButton(CommonWidgetDemo);
        pbtn_QProgressBar->setObjectName(QString::fromUtf8("pbtn_QProgressBar"));
        sizePolicy.setHeightForWidth(pbtn_QProgressBar->sizePolicy().hasHeightForWidth());
        pbtn_QProgressBar->setSizePolicy(sizePolicy);
        pbtn_QProgressBar->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QProgressBar, 4, 1, 1, 1);

        pbtn_QComboBox = new QPushButton(CommonWidgetDemo);
        pbtn_QComboBox->setObjectName(QString::fromUtf8("pbtn_QComboBox"));
        sizePolicy.setHeightForWidth(pbtn_QComboBox->sizePolicy().hasHeightForWidth());
        pbtn_QComboBox->setSizePolicy(sizePolicy);
        pbtn_QComboBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QComboBox, 3, 0, 1, 1);

        pbtn_QWidget = new QPushButton(CommonWidgetDemo);
        pbtn_QWidget->setObjectName(QString::fromUtf8("pbtn_QWidget"));
        sizePolicy.setHeightForWidth(pbtn_QWidget->sizePolicy().hasHeightForWidth());
        pbtn_QWidget->setSizePolicy(sizePolicy);
        pbtn_QWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QWidget, 0, 0, 1, 1);

        pbtn_QPushButton = new QPushButton(CommonWidgetDemo);
        pbtn_QPushButton->setObjectName(QString::fromUtf8("pbtn_QPushButton"));
        sizePolicy.setHeightForWidth(pbtn_QPushButton->sizePolicy().hasHeightForWidth());
        pbtn_QPushButton->setSizePolicy(sizePolicy);
        pbtn_QPushButton->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QPushButton, 0, 1, 1, 1);

        pbtn_QLabel = new QPushButton(CommonWidgetDemo);
        pbtn_QLabel->setObjectName(QString::fromUtf8("pbtn_QLabel"));
        sizePolicy.setHeightForWidth(pbtn_QLabel->sizePolicy().hasHeightForWidth());
        pbtn_QLabel->setSizePolicy(sizePolicy);
        pbtn_QLabel->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QLabel, 1, 0, 1, 1);

        pbtn_QCheckBox = new QPushButton(CommonWidgetDemo);
        pbtn_QCheckBox->setObjectName(QString::fromUtf8("pbtn_QCheckBox"));
        sizePolicy.setHeightForWidth(pbtn_QCheckBox->sizePolicy().hasHeightForWidth());
        pbtn_QCheckBox->setSizePolicy(sizePolicy);
        pbtn_QCheckBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QCheckBox, 2, 1, 1, 1);

        pbtn_QSpinBox = new QPushButton(CommonWidgetDemo);
        pbtn_QSpinBox->setObjectName(QString::fromUtf8("pbtn_QSpinBox"));
        sizePolicy.setHeightForWidth(pbtn_QSpinBox->sizePolicy().hasHeightForWidth());
        pbtn_QSpinBox->setSizePolicy(sizePolicy);
        pbtn_QSpinBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QSpinBox, 3, 1, 1, 1);

        pbtn_QTableWidget = new QPushButton(CommonWidgetDemo);
        pbtn_QTableWidget->setObjectName(QString::fromUtf8("pbtn_QTableWidget"));
        sizePolicy.setHeightForWidth(pbtn_QTableWidget->sizePolicy().hasHeightForWidth());
        pbtn_QTableWidget->setSizePolicy(sizePolicy);
        pbtn_QTableWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QTableWidget, 5, 1, 1, 1);

        pbtn_QLineEdit = new QPushButton(CommonWidgetDemo);
        pbtn_QLineEdit->setObjectName(QString::fromUtf8("pbtn_QLineEdit"));
        sizePolicy.setHeightForWidth(pbtn_QLineEdit->sizePolicy().hasHeightForWidth());
        pbtn_QLineEdit->setSizePolicy(sizePolicy);
        pbtn_QLineEdit->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbtn_QLineEdit, 1, 1, 1, 1);


        retranslateUi(CommonWidgetDemo);

        QMetaObject::connectSlotsByName(CommonWidgetDemo);
    } // setupUi

    void retranslateUi(QWidget *CommonWidgetDemo)
    {
        CommonWidgetDemo->setWindowTitle(QString());
        pbtn_QListWidget->setText(QCoreApplication::translate("CommonWidgetDemo", "QListWidget", nullptr));
        pbtn_QRadioButton->setText(QCoreApplication::translate("CommonWidgetDemo", "QRadioButton", nullptr));
        pbtn_QSlider->setText(QCoreApplication::translate("CommonWidgetDemo", "QSlider", nullptr));
        pbtn_QProgressBar->setText(QCoreApplication::translate("CommonWidgetDemo", "QProgressBar", nullptr));
        pbtn_QComboBox->setText(QCoreApplication::translate("CommonWidgetDemo", "QComboBox", nullptr));
        pbtn_QWidget->setText(QCoreApplication::translate("CommonWidgetDemo", "QWidget", nullptr));
        pbtn_QPushButton->setText(QCoreApplication::translate("CommonWidgetDemo", "QPushButton", nullptr));
        pbtn_QLabel->setText(QCoreApplication::translate("CommonWidgetDemo", "QLabel", nullptr));
        pbtn_QCheckBox->setText(QCoreApplication::translate("CommonWidgetDemo", "QCheckBox", nullptr));
        pbtn_QSpinBox->setText(QCoreApplication::translate("CommonWidgetDemo", "QSpinBox", nullptr));
        pbtn_QTableWidget->setText(QCoreApplication::translate("CommonWidgetDemo", "QTableWidget", nullptr));
        pbtn_QLineEdit->setText(QCoreApplication::translate("CommonWidgetDemo", "QLineEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommonWidgetDemo: public Ui_CommonWidgetDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO00_COMMON_WIDGET_H
