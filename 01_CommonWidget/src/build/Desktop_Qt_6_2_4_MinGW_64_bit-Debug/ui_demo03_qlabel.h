/********************************************************************************
** Form generated from reading UI file 'demo03_qlabel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO03_QLABEL_H
#define UI_DEMO03_QLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLabelDemo
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_Time;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtn_GetText;
    QPushButton *pbtn_SetText;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_TextAlignment;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbtn_AlignLeft;
    QPushButton *pbtn_AlignCenter;
    QPushButton *pbtn_AlignRight;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_WordWrap;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtn_DisableWordWrap;
    QPushButton *pbtn_EnableWordWrap;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *lb_Image;
    QPushButton *pbtn_SwitchImage;

    void setupUi(QWidget *QLabelDemo)
    {
        if (QLabelDemo->objectName().isEmpty())
            QLabelDemo->setObjectName(QString::fromUtf8("QLabelDemo"));
        QLabelDemo->resize(400, 500);
        verticalLayout = new QVBoxLayout(QLabelDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_1 = new QGroupBox(QLabelDemo);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        verticalLayout_2 = new QVBoxLayout(groupBox_1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb_Time = new QLabel(groupBox_1);
        lb_Time->setObjectName(QString::fromUtf8("lb_Time"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_Time->sizePolicy().hasHeightForWidth());
        lb_Time->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lb_Time);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtn_GetText = new QPushButton(groupBox_1);
        pbtn_GetText->setObjectName(QString::fromUtf8("pbtn_GetText"));
        sizePolicy.setHeightForWidth(pbtn_GetText->sizePolicy().hasHeightForWidth());
        pbtn_GetText->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pbtn_GetText);

        pbtn_SetText = new QPushButton(groupBox_1);
        pbtn_SetText->setObjectName(QString::fromUtf8("pbtn_SetText"));
        sizePolicy.setHeightForWidth(pbtn_SetText->sizePolicy().hasHeightForWidth());
        pbtn_SetText->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pbtn_SetText);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(QLabelDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lb_TextAlignment = new QLabel(groupBox_2);
        lb_TextAlignment->setObjectName(QString::fromUtf8("lb_TextAlignment"));
        sizePolicy.setHeightForWidth(lb_TextAlignment->sizePolicy().hasHeightForWidth());
        lb_TextAlignment->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(lb_TextAlignment);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbtn_AlignLeft = new QPushButton(groupBox_2);
        pbtn_AlignLeft->setObjectName(QString::fromUtf8("pbtn_AlignLeft"));
        sizePolicy.setHeightForWidth(pbtn_AlignLeft->sizePolicy().hasHeightForWidth());
        pbtn_AlignLeft->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pbtn_AlignLeft);

        pbtn_AlignCenter = new QPushButton(groupBox_2);
        pbtn_AlignCenter->setObjectName(QString::fromUtf8("pbtn_AlignCenter"));
        sizePolicy.setHeightForWidth(pbtn_AlignCenter->sizePolicy().hasHeightForWidth());
        pbtn_AlignCenter->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pbtn_AlignCenter);

        pbtn_AlignRight = new QPushButton(groupBox_2);
        pbtn_AlignRight->setObjectName(QString::fromUtf8("pbtn_AlignRight"));
        sizePolicy.setHeightForWidth(pbtn_AlignRight->sizePolicy().hasHeightForWidth());
        pbtn_AlignRight->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pbtn_AlignRight);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QLabelDemo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lb_WordWrap = new QLabel(groupBox_3);
        lb_WordWrap->setObjectName(QString::fromUtf8("lb_WordWrap"));
        sizePolicy.setHeightForWidth(lb_WordWrap->sizePolicy().hasHeightForWidth());
        lb_WordWrap->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(lb_WordWrap);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbtn_DisableWordWrap = new QPushButton(groupBox_3);
        pbtn_DisableWordWrap->setObjectName(QString::fromUtf8("pbtn_DisableWordWrap"));
        sizePolicy.setHeightForWidth(pbtn_DisableWordWrap->sizePolicy().hasHeightForWidth());
        pbtn_DisableWordWrap->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pbtn_DisableWordWrap);

        pbtn_EnableWordWrap = new QPushButton(groupBox_3);
        pbtn_EnableWordWrap->setObjectName(QString::fromUtf8("pbtn_EnableWordWrap"));
        sizePolicy.setHeightForWidth(pbtn_EnableWordWrap->sizePolicy().hasHeightForWidth());
        pbtn_EnableWordWrap->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pbtn_EnableWordWrap);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(QLabelDemo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lb_Image = new QLabel(groupBox_4);
        lb_Image->setObjectName(QString::fromUtf8("lb_Image"));
        sizePolicy.setHeightForWidth(lb_Image->sizePolicy().hasHeightForWidth());
        lb_Image->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(lb_Image);

        pbtn_SwitchImage = new QPushButton(groupBox_4);
        pbtn_SwitchImage->setObjectName(QString::fromUtf8("pbtn_SwitchImage"));
        sizePolicy.setHeightForWidth(pbtn_SwitchImage->sizePolicy().hasHeightForWidth());
        pbtn_SwitchImage->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(pbtn_SwitchImage);


        verticalLayout->addWidget(groupBox_4);


        retranslateUi(QLabelDemo);

        QMetaObject::connectSlotsByName(QLabelDemo);
    } // setupUi

    void retranslateUi(QWidget *QLabelDemo)
    {
        QLabelDemo->setWindowTitle(QCoreApplication::translate("QLabelDemo", "QLabelDemo", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("QLabelDemo", "\350\216\267\345\217\226 / \350\256\276\347\275\256\346\226\207\346\234\254", nullptr));
        lb_Time->setText(QCoreApplication::translate("QLabelDemo", "Hello QLabel!", nullptr));
        pbtn_GetText->setText(QCoreApplication::translate("QLabelDemo", "\350\216\267\345\217\226\346\226\207\346\234\254", nullptr));
        pbtn_SetText->setText(QCoreApplication::translate("QLabelDemo", "\350\256\276\347\275\256\346\226\207\346\234\254", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QLabelDemo", "\346\226\207\346\234\254\345\257\271\351\275\220\346\226\271\345\274\217", nullptr));
        lb_TextAlignment->setText(QCoreApplication::translate("QLabelDemo", "\345\234\250QLabel\344\270\255\346\274\224\347\244\272\345\257\271\351\275\220\346\226\271\345\274\217", nullptr));
        pbtn_AlignLeft->setText(QCoreApplication::translate("QLabelDemo", "\345\267\246\345\257\271\351\275\220", nullptr));
        pbtn_AlignCenter->setText(QCoreApplication::translate("QLabelDemo", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        pbtn_AlignRight->setText(QCoreApplication::translate("QLabelDemo", "\345\217\263\345\257\271\351\275\220", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QLabelDemo", "\346\226\207\346\234\254\346\215\242\350\241\214", nullptr));
        lb_WordWrap->setText(QCoreApplication::translate("QLabelDemo", "\350\277\231\346\230\257\344\270\200\346\256\265\351\225\277\346\226\207\345\255\227\357\274\214\347\224\250\346\235\245\346\274\224\347\244\272 QLabel \346\216\247\344\273\266\347\232\204\350\207\252\345\212\250\346\215\242\350\241\214 (WordWrap) \345\212\237\350\203\275\343\200\202\346\263\250\346\204\217\357\274\214\350\257\245\346\216\247\344\273\266\345\234\250\346\230\276\347\244\272\350\213\261\346\226\207\346\227\266\345\277\205\351\241\273\346\234\211\347\251\272\346\240\274\357\274\214\345\220\246\345\210\231\346\227\240\346\263\225\346\215\242\350\241\214\343\200\202", nullptr));
        pbtn_DisableWordWrap->setText(QCoreApplication::translate("QLabelDemo", "\347\246\201\346\255\242\346\215\242\350\241\214", nullptr));
        pbtn_EnableWordWrap->setText(QCoreApplication::translate("QLabelDemo", "\345\205\201\350\256\270\346\215\242\350\241\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QLabelDemo", "\346\230\276\347\244\272\345\233\276\347\211\207", nullptr));
        lb_Image->setText(QString());
        pbtn_SwitchImage->setText(QCoreApplication::translate("QLabelDemo", "\345\210\207\346\215\242\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QLabelDemo: public Ui_QLabelDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO03_QLABEL_H
