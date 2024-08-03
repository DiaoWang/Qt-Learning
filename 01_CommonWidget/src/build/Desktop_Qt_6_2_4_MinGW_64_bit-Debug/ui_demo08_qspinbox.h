/********************************************************************************
** Form generated from reading UI file 'demo08_qspinbox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO08_QSPINBOX_H
#define UI_DEMO08_QSPINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSpinBoxDemo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QDoubleSpinBox *dspbox_Price;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spbox_Weight;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *le_Total;

    void setupUi(QWidget *QSpinBoxDemo)
    {
        if (QSpinBoxDemo->objectName().isEmpty())
            QSpinBoxDemo->setObjectName(QString::fromUtf8("QSpinBoxDemo"));
        QSpinBoxDemo->resize(200, 100);
        verticalLayout = new QVBoxLayout(QSpinBoxDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_1 = new QLabel(QSpinBoxDemo);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        horizontalLayout->addWidget(label_1);

        dspbox_Price = new QDoubleSpinBox(QSpinBoxDemo);
        dspbox_Price->setObjectName(QString::fromUtf8("dspbox_Price"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dspbox_Price->sizePolicy().hasHeightForWidth());
        dspbox_Price->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dspbox_Price);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(QSpinBoxDemo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spbox_Weight = new QSpinBox(QSpinBoxDemo);
        spbox_Weight->setObjectName(QString::fromUtf8("spbox_Weight"));
        sizePolicy.setHeightForWidth(spbox_Weight->sizePolicy().hasHeightForWidth());
        spbox_Weight->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(spbox_Weight);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(QSpinBoxDemo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        le_Total = new QLineEdit(QSpinBoxDemo);
        le_Total->setObjectName(QString::fromUtf8("le_Total"));

        horizontalLayout_3->addWidget(le_Total);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(QSpinBoxDemo);

        QMetaObject::connectSlotsByName(QSpinBoxDemo);
    } // setupUi

    void retranslateUi(QWidget *QSpinBoxDemo)
    {
        QSpinBoxDemo->setWindowTitle(QCoreApplication::translate("QSpinBoxDemo", "QSpinBoxDemo", nullptr));
        label_1->setText(QCoreApplication::translate("QSpinBoxDemo", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QSpinBoxDemo", "\351\207\215\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QSpinBoxDemo", "\346\200\273\344\273\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSpinBoxDemo: public Ui_QSpinBoxDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO08_QSPINBOX_H
