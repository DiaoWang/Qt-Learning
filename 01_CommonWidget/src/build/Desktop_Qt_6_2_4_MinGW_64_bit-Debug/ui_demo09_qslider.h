/********************************************************************************
** Form generated from reading UI file 'demo09_qslider.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO09_QSLIDER_H
#define UI_DEMO09_QSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSliderDemo
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_Color;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_Red;
    QSlider *hsld_Red;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_Green;
    QSlider *hsld_Green;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *le_Blue;
    QSlider *hsld_Blue;

    void setupUi(QWidget *QSliderDemo)
    {
        if (QSliderDemo->objectName().isEmpty())
            QSliderDemo->setObjectName(QString::fromUtf8("QSliderDemo"));
        QSliderDemo->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(QSliderDemo);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lb_Color = new QLabel(QSliderDemo);
        lb_Color->setObjectName(QString::fromUtf8("lb_Color"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_Color->sizePolicy().hasHeightForWidth());
        lb_Color->setSizePolicy(sizePolicy);
        lb_Color->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lb_Color);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(QSliderDemo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(QSliderDemo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(QSliderDemo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        le_Red = new QLineEdit(QSliderDemo);
        le_Red->setObjectName(QString::fromUtf8("le_Red"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_Red->sizePolicy().hasHeightForWidth());
        le_Red->setSizePolicy(sizePolicy1);
        le_Red->setMaximumSize(QSize(30, 16777215));
        le_Red->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_Red);

        hsld_Red = new QSlider(QSliderDemo);
        hsld_Red->setObjectName(QString::fromUtf8("hsld_Red"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hsld_Red->sizePolicy().hasHeightForWidth());
        hsld_Red->setSizePolicy(sizePolicy2);
        hsld_Red->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(hsld_Red);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        le_Green = new QLineEdit(QSliderDemo);
        le_Green->setObjectName(QString::fromUtf8("le_Green"));
        sizePolicy1.setHeightForWidth(le_Green->sizePolicy().hasHeightForWidth());
        le_Green->setSizePolicy(sizePolicy1);
        le_Green->setMaximumSize(QSize(30, 16777215));
        le_Green->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_Green);

        hsld_Green = new QSlider(QSliderDemo);
        hsld_Green->setObjectName(QString::fromUtf8("hsld_Green"));
        sizePolicy2.setHeightForWidth(hsld_Green->sizePolicy().hasHeightForWidth());
        hsld_Green->setSizePolicy(sizePolicy2);
        hsld_Green->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(hsld_Green);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        le_Blue = new QLineEdit(QSliderDemo);
        le_Blue->setObjectName(QString::fromUtf8("le_Blue"));
        sizePolicy1.setHeightForWidth(le_Blue->sizePolicy().hasHeightForWidth());
        le_Blue->setSizePolicy(sizePolicy1);
        le_Blue->setMaximumSize(QSize(30, 16777215));
        le_Blue->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_Blue);

        hsld_Blue = new QSlider(QSliderDemo);
        hsld_Blue->setObjectName(QString::fromUtf8("hsld_Blue"));
        sizePolicy2.setHeightForWidth(hsld_Blue->sizePolicy().hasHeightForWidth());
        hsld_Blue->setSizePolicy(sizePolicy2);
        hsld_Blue->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(hsld_Blue);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(QSliderDemo);

        QMetaObject::connectSlotsByName(QSliderDemo);
    } // setupUi

    void retranslateUi(QWidget *QSliderDemo)
    {
        QSliderDemo->setWindowTitle(QCoreApplication::translate("QSliderDemo", "QSliderDemo", nullptr));
        lb_Color->setText(QString());
        label_2->setText(QCoreApplication::translate("QSliderDemo", "R: ", nullptr));
        label_3->setText(QCoreApplication::translate("QSliderDemo", "G: ", nullptr));
        label_4->setText(QCoreApplication::translate("QSliderDemo", "B: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSliderDemo: public Ui_QSliderDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO09_QSLIDER_H
