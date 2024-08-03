/********************************************************************************
** Form generated from reading UI file 'demo07_qcombobox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO07_QCOMBOBOX_H
#define UI_DEMO07_QCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QComboBoxDemo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLineEdit *le_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbbox_School;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbbox_Province;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbbox_City;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *le_Result;

    void setupUi(QWidget *QComboBoxDemo)
    {
        if (QComboBoxDemo->objectName().isEmpty())
            QComboBoxDemo->setObjectName(QString::fromUtf8("QComboBoxDemo"));
        QComboBoxDemo->resize(300, 200);
        verticalLayout = new QVBoxLayout(QComboBoxDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_1 = new QLabel(QComboBoxDemo);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        horizontalLayout->addWidget(label_1);

        le_Name = new QLineEdit(QComboBoxDemo);
        le_Name->setObjectName(QString::fromUtf8("le_Name"));

        horizontalLayout->addWidget(le_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(QComboBoxDemo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbbox_School = new QComboBox(QComboBoxDemo);
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->addItem(QString());
        cbbox_School->setObjectName(QString::fromUtf8("cbbox_School"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbbox_School->sizePolicy().hasHeightForWidth());
        cbbox_School->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cbbox_School);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(QComboBoxDemo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbbox_Province = new QComboBox(QComboBoxDemo);
        cbbox_Province->setObjectName(QString::fromUtf8("cbbox_Province"));
        sizePolicy.setHeightForWidth(cbbox_Province->sizePolicy().hasHeightForWidth());
        cbbox_Province->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(cbbox_Province);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(QComboBoxDemo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cbbox_City = new QComboBox(QComboBoxDemo);
        cbbox_City->setObjectName(QString::fromUtf8("cbbox_City"));
        sizePolicy.setHeightForWidth(cbbox_City->sizePolicy().hasHeightForWidth());
        cbbox_City->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(cbbox_City);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(QComboBoxDemo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        le_Result = new QLineEdit(QComboBoxDemo);
        le_Result->setObjectName(QString::fromUtf8("le_Result"));
        le_Result->setReadOnly(true);

        horizontalLayout_5->addWidget(le_Result);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(QComboBoxDemo);

        QMetaObject::connectSlotsByName(QComboBoxDemo);
    } // setupUi

    void retranslateUi(QWidget *QComboBoxDemo)
    {
        QComboBoxDemo->setWindowTitle(QCoreApplication::translate("QComboBoxDemo", "QComboBoxDemo", nullptr));
        label_1->setText(QCoreApplication::translate("QComboBoxDemo", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QComboBoxDemo", "\345\255\246\346\240\241\357\274\232", nullptr));
        cbbox_School->setItemText(0, QCoreApplication::translate("QComboBoxDemo", "\346\270\205\345\215\216\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(1, QCoreApplication::translate("QComboBoxDemo", "\345\214\227\344\272\254\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(2, QCoreApplication::translate("QComboBoxDemo", "\346\265\231\346\261\237\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(3, QCoreApplication::translate("QComboBoxDemo", "\345\244\215\346\227\246\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(4, QCoreApplication::translate("QComboBoxDemo", "\344\270\212\346\265\267\344\272\244\351\200\232\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(5, QCoreApplication::translate("QComboBoxDemo", "\345\215\227\344\272\254\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(6, QCoreApplication::translate("QComboBoxDemo", "\350\245\277\345\256\211\344\272\244\351\200\232\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(7, QCoreApplication::translate("QComboBoxDemo", "\344\270\255\345\233\275\347\247\221\345\255\246\346\212\200\346\234\257\345\244\247\345\255\246", nullptr));
        cbbox_School->setItemText(8, QCoreApplication::translate("QComboBoxDemo", "\345\223\210\345\260\224\346\273\250\345\267\245\344\270\232\345\244\247\345\255\246", nullptr));

        label_3->setText(QCoreApplication::translate("QComboBoxDemo", "\347\234\201\344\273\275\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("QComboBoxDemo", "\345\237\216\345\270\202\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("QComboBoxDemo", "\347\273\223\346\236\234\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QComboBoxDemo: public Ui_QComboBoxDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO07_QCOMBOBOX_H
