/********************************************************************************
** Form generated from reading UI file 'demo06_qcheckbox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO06_QCHECKBOX_H
#define UI_DEMO06_QCHECKBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCheckBoxDemo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QCheckBox *ckbox_All;
    QWidget *wgt_Items;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ckbox_Apple;
    QCheckBox *ckbox_Pear;
    QCheckBox *ckbox_Peach;
    QCheckBox *ckbox_Orange;
    QCheckBox *ckbox_Banana;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_Result;

    void setupUi(QWidget *QCheckBoxDemo)
    {
        if (QCheckBoxDemo->objectName().isEmpty())
            QCheckBoxDemo->setObjectName(QString::fromUtf8("QCheckBoxDemo"));
        QCheckBoxDemo->resize(300, 150);
        QCheckBoxDemo->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QCheckBoxDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_1 = new QLabel(QCheckBoxDemo);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_1);

        ckbox_All = new QCheckBox(QCheckBoxDemo);
        ckbox_All->setObjectName(QString::fromUtf8("ckbox_All"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ckbox_All->sizePolicy().hasHeightForWidth());
        ckbox_All->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ckbox_All);

        wgt_Items = new QWidget(QCheckBoxDemo);
        wgt_Items->setObjectName(QString::fromUtf8("wgt_Items"));
        horizontalLayout = new QHBoxLayout(wgt_Items);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        ckbox_Apple = new QCheckBox(wgt_Items);
        ckbox_Apple->setObjectName(QString::fromUtf8("ckbox_Apple"));
        sizePolicy1.setHeightForWidth(ckbox_Apple->sizePolicy().hasHeightForWidth());
        ckbox_Apple->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ckbox_Apple);

        ckbox_Pear = new QCheckBox(wgt_Items);
        ckbox_Pear->setObjectName(QString::fromUtf8("ckbox_Pear"));
        sizePolicy1.setHeightForWidth(ckbox_Pear->sizePolicy().hasHeightForWidth());
        ckbox_Pear->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ckbox_Pear);

        ckbox_Peach = new QCheckBox(wgt_Items);
        ckbox_Peach->setObjectName(QString::fromUtf8("ckbox_Peach"));
        sizePolicy1.setHeightForWidth(ckbox_Peach->sizePolicy().hasHeightForWidth());
        ckbox_Peach->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ckbox_Peach);

        ckbox_Orange = new QCheckBox(wgt_Items);
        ckbox_Orange->setObjectName(QString::fromUtf8("ckbox_Orange"));
        sizePolicy1.setHeightForWidth(ckbox_Orange->sizePolicy().hasHeightForWidth());
        ckbox_Orange->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ckbox_Orange);

        ckbox_Banana = new QCheckBox(wgt_Items);
        ckbox_Banana->setObjectName(QString::fromUtf8("ckbox_Banana"));
        sizePolicy1.setHeightForWidth(ckbox_Banana->sizePolicy().hasHeightForWidth());
        ckbox_Banana->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ckbox_Banana);


        verticalLayout->addWidget(wgt_Items);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(QCheckBoxDemo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        le_Result = new QLineEdit(QCheckBoxDemo);
        le_Result->setObjectName(QString::fromUtf8("le_Result"));
        le_Result->setReadOnly(true);

        horizontalLayout_2->addWidget(le_Result);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QCheckBoxDemo);

        QMetaObject::connectSlotsByName(QCheckBoxDemo);
    } // setupUi

    void retranslateUi(QWidget *QCheckBoxDemo)
    {
        QCheckBoxDemo->setWindowTitle(QCoreApplication::translate("QCheckBoxDemo", "QCheckBoxDemo", nullptr));
        label_1->setText(QCoreApplication::translate("QCheckBoxDemo", "\350\257\267\351\200\211\346\213\251\344\275\240\345\226\234\346\254\242\347\232\204\346\260\264\346\236\234\357\274\232", nullptr));
        ckbox_All->setText(QCoreApplication::translate("QCheckBoxDemo", "\345\205\250\351\200\211", nullptr));
        ckbox_Apple->setText(QCoreApplication::translate("QCheckBoxDemo", "\350\213\271\346\236\234", nullptr));
        ckbox_Pear->setText(QCoreApplication::translate("QCheckBoxDemo", "\346\242\250\345\255\220", nullptr));
        ckbox_Peach->setText(QCoreApplication::translate("QCheckBoxDemo", "\346\241\203\345\255\220", nullptr));
        ckbox_Orange->setText(QCoreApplication::translate("QCheckBoxDemo", "\346\251\230\345\255\220", nullptr));
        ckbox_Banana->setText(QCoreApplication::translate("QCheckBoxDemo", "\351\246\231\350\225\211", nullptr));
        label_2->setText(QCoreApplication::translate("QCheckBoxDemo", "\345\275\223\345\211\215\351\200\211\346\213\251\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QCheckBoxDemo: public Ui_QCheckBoxDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO06_QCHECKBOX_H
