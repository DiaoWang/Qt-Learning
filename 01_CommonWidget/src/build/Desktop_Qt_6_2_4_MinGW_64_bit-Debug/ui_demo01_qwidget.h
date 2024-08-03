/********************************************************************************
** Form generated from reading UI file 'demo01_qwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO01_QWIDGET_H
#define UI_DEMO01_QWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWidgetDemo
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pbtn_GetGeometryAndSize;
    QPushButton *pbtn_SetSize;
    QPushButton *pbtn_SetFixedSize;
    QPushButton *pbtn_SetMinimumSize;
    QPushButton *pbtn_SetMaximumSize;
    QPushButton *pbtn_MoveToPosition;
    QPushButton *pbtn_SetTitle;
    QPushButton *pbtn_SetIcon;

    void setupUi(QWidget *QWidgetDemo)
    {
        if (QWidgetDemo->objectName().isEmpty())
            QWidgetDemo->setObjectName(QString::fromUtf8("QWidgetDemo"));
        QWidgetDemo->resize(300, 300);
        QWidgetDemo->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(QWidgetDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbtn_GetGeometryAndSize = new QPushButton(QWidgetDemo);
        pbtn_GetGeometryAndSize->setObjectName(QString::fromUtf8("pbtn_GetGeometryAndSize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbtn_GetGeometryAndSize->sizePolicy().hasHeightForWidth());
        pbtn_GetGeometryAndSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_GetGeometryAndSize);

        pbtn_SetSize = new QPushButton(QWidgetDemo);
        pbtn_SetSize->setObjectName(QString::fromUtf8("pbtn_SetSize"));
        sizePolicy.setHeightForWidth(pbtn_SetSize->sizePolicy().hasHeightForWidth());
        pbtn_SetSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetSize);

        pbtn_SetFixedSize = new QPushButton(QWidgetDemo);
        pbtn_SetFixedSize->setObjectName(QString::fromUtf8("pbtn_SetFixedSize"));
        sizePolicy.setHeightForWidth(pbtn_SetFixedSize->sizePolicy().hasHeightForWidth());
        pbtn_SetFixedSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetFixedSize);

        pbtn_SetMinimumSize = new QPushButton(QWidgetDemo);
        pbtn_SetMinimumSize->setObjectName(QString::fromUtf8("pbtn_SetMinimumSize"));
        sizePolicy.setHeightForWidth(pbtn_SetMinimumSize->sizePolicy().hasHeightForWidth());
        pbtn_SetMinimumSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetMinimumSize);

        pbtn_SetMaximumSize = new QPushButton(QWidgetDemo);
        pbtn_SetMaximumSize->setObjectName(QString::fromUtf8("pbtn_SetMaximumSize"));
        sizePolicy.setHeightForWidth(pbtn_SetMaximumSize->sizePolicy().hasHeightForWidth());
        pbtn_SetMaximumSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetMaximumSize);

        pbtn_MoveToPosition = new QPushButton(QWidgetDemo);
        pbtn_MoveToPosition->setObjectName(QString::fromUtf8("pbtn_MoveToPosition"));
        sizePolicy.setHeightForWidth(pbtn_MoveToPosition->sizePolicy().hasHeightForWidth());
        pbtn_MoveToPosition->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_MoveToPosition);

        pbtn_SetTitle = new QPushButton(QWidgetDemo);
        pbtn_SetTitle->setObjectName(QString::fromUtf8("pbtn_SetTitle"));
        sizePolicy.setHeightForWidth(pbtn_SetTitle->sizePolicy().hasHeightForWidth());
        pbtn_SetTitle->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetTitle);

        pbtn_SetIcon = new QPushButton(QWidgetDemo);
        pbtn_SetIcon->setObjectName(QString::fromUtf8("pbtn_SetIcon"));
        sizePolicy.setHeightForWidth(pbtn_SetIcon->sizePolicy().hasHeightForWidth());
        pbtn_SetIcon->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pbtn_SetIcon);


        retranslateUi(QWidgetDemo);

        QMetaObject::connectSlotsByName(QWidgetDemo);
    } // setupUi

    void retranslateUi(QWidget *QWidgetDemo)
    {
        QWidgetDemo->setWindowTitle(QCoreApplication::translate("QWidgetDemo", "QWidgetDemo", nullptr));
        pbtn_GetGeometryAndSize->setText(QCoreApplication::translate("QWidgetDemo", "\350\216\267\345\217\226\347\252\227\344\275\223\344\275\215\347\275\256\345\222\214\345\244\247\345\260\217", nullptr));
        pbtn_SetSize->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\347\252\227\344\275\223\345\260\272\345\257\270\357\274\232400\303\227400", nullptr));
        pbtn_SetFixedSize->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\345\233\272\345\256\232\345\260\272\345\257\270\357\274\232500\303\227500", nullptr));
        pbtn_SetMinimumSize->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\346\234\200\345\260\217\345\260\272\345\257\270\357\274\232300\303\227300", nullptr));
        pbtn_SetMaximumSize->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\346\234\200\345\244\247\345\260\272\345\257\270\357\274\232600\303\227600", nullptr));
        pbtn_MoveToPosition->setText(QCoreApplication::translate("QWidgetDemo", "\347\247\273\345\212\250\347\252\227\345\217\243\350\207\263\345\235\220\346\240\207 (100, 100)", nullptr));
        pbtn_SetTitle->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\347\252\227\344\275\223\346\240\207\351\242\230", nullptr));
        pbtn_SetIcon->setText(QCoreApplication::translate("QWidgetDemo", "\350\256\276\347\275\256\347\252\227\344\275\223\345\233\276\346\240\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWidgetDemo: public Ui_QWidgetDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO01_QWIDGET_H
