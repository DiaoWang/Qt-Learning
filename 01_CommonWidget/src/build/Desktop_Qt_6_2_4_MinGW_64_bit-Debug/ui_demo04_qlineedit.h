/********************************************************************************
** Form generated from reading UI file 'demo04_qlineedit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO04_QLINEEDIT_H
#define UI_DEMO04_QLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLineEditDemo
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_EchoMode;
    QPushButton *pbtn_EchoOutput;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbtn_NormalMode;
    QPushButton *pbtn_PasswordMode;
    QPushButton *pbtn_NoEchoMode;
    QPushButton *pbtn_PwdEchoOnEditMode;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *le_Alignment;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtn_AlignLeft;
    QPushButton *pbtn_AlignCenter;
    QPushButton *pbtn_AlignRight;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *le_RWControl;
    QPushButton *pbtn_RWOutput;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbtn_ReadWrite;
    QPushButton *pbtn_ReadOnly;
    QPushButton *pbtn_DisableRWControl;
    QPushButton *pbtn_EnableRWControl;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *le_InputMaskControl;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbtn_NoInputMask;
    QPushButton *pbtn_TelNoInputMask;
    QPushButton *pbtn_KeyInputMask;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *le_Addend1;
    QLineEdit *le_Minuend;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *le_Addend2;
    QLineEdit *le_Subtrahend;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *le_Sum;
    QLineEdit *le_Difference;

    void setupUi(QWidget *QLineEditDemo)
    {
        if (QLineEditDemo->objectName().isEmpty())
            QLineEditDemo->setObjectName(QString::fromUtf8("QLineEditDemo"));
        QLineEditDemo->resize(404, 426);
        verticalLayout = new QVBoxLayout(QLineEditDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_1 = new QGroupBox(QLineEditDemo);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        verticalLayout_2 = new QVBoxLayout(groupBox_1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        le_EchoMode = new QLineEdit(groupBox_1);
        le_EchoMode->setObjectName(QString::fromUtf8("le_EchoMode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_EchoMode->sizePolicy().hasHeightForWidth());
        le_EchoMode->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(le_EchoMode);

        pbtn_EchoOutput = new QPushButton(groupBox_1);
        pbtn_EchoOutput->setObjectName(QString::fromUtf8("pbtn_EchoOutput"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbtn_EchoOutput->sizePolicy().hasHeightForWidth());
        pbtn_EchoOutput->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pbtn_EchoOutput);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbtn_NormalMode = new QPushButton(groupBox_1);
        pbtn_NormalMode->setObjectName(QString::fromUtf8("pbtn_NormalMode"));
        sizePolicy1.setHeightForWidth(pbtn_NormalMode->sizePolicy().hasHeightForWidth());
        pbtn_NormalMode->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtn_NormalMode);

        pbtn_PasswordMode = new QPushButton(groupBox_1);
        pbtn_PasswordMode->setObjectName(QString::fromUtf8("pbtn_PasswordMode"));
        sizePolicy1.setHeightForWidth(pbtn_PasswordMode->sizePolicy().hasHeightForWidth());
        pbtn_PasswordMode->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtn_PasswordMode);

        pbtn_NoEchoMode = new QPushButton(groupBox_1);
        pbtn_NoEchoMode->setObjectName(QString::fromUtf8("pbtn_NoEchoMode"));
        sizePolicy1.setHeightForWidth(pbtn_NoEchoMode->sizePolicy().hasHeightForWidth());
        pbtn_NoEchoMode->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtn_NoEchoMode);

        pbtn_PwdEchoOnEditMode = new QPushButton(groupBox_1);
        pbtn_PwdEchoOnEditMode->setObjectName(QString::fromUtf8("pbtn_PwdEchoOnEditMode"));
        sizePolicy1.setHeightForWidth(pbtn_PwdEchoOnEditMode->sizePolicy().hasHeightForWidth());
        pbtn_PwdEchoOnEditMode->setSizePolicy(sizePolicy1);
        pbtn_PwdEchoOnEditMode->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(pbtn_PwdEchoOnEditMode);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(QLineEditDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        le_Alignment = new QLineEdit(groupBox_2);
        le_Alignment->setObjectName(QString::fromUtf8("le_Alignment"));
        sizePolicy.setHeightForWidth(le_Alignment->sizePolicy().hasHeightForWidth());
        le_Alignment->setSizePolicy(sizePolicy);
        le_Alignment->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 237, 237);\n"
"font: 700 12pt \"Microsoft YaHei UI\";"));
        le_Alignment->setAlignment(Qt::AlignCenter);
        le_Alignment->setReadOnly(false);

        verticalLayout_3->addWidget(le_Alignment);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbtn_AlignLeft = new QPushButton(groupBox_2);
        pbtn_AlignLeft->setObjectName(QString::fromUtf8("pbtn_AlignLeft"));
        sizePolicy1.setHeightForWidth(pbtn_AlignLeft->sizePolicy().hasHeightForWidth());
        pbtn_AlignLeft->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pbtn_AlignLeft);

        pbtn_AlignCenter = new QPushButton(groupBox_2);
        pbtn_AlignCenter->setObjectName(QString::fromUtf8("pbtn_AlignCenter"));
        sizePolicy1.setHeightForWidth(pbtn_AlignCenter->sizePolicy().hasHeightForWidth());
        pbtn_AlignCenter->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pbtn_AlignCenter);

        pbtn_AlignRight = new QPushButton(groupBox_2);
        pbtn_AlignRight->setObjectName(QString::fromUtf8("pbtn_AlignRight"));
        sizePolicy1.setHeightForWidth(pbtn_AlignRight->sizePolicy().hasHeightForWidth());
        pbtn_AlignRight->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pbtn_AlignRight);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QLineEditDemo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        le_RWControl = new QLineEdit(groupBox_3);
        le_RWControl->setObjectName(QString::fromUtf8("le_RWControl"));
        sizePolicy.setHeightForWidth(le_RWControl->sizePolicy().hasHeightForWidth());
        le_RWControl->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(le_RWControl);

        pbtn_RWOutput = new QPushButton(groupBox_3);
        pbtn_RWOutput->setObjectName(QString::fromUtf8("pbtn_RWOutput"));
        sizePolicy1.setHeightForWidth(pbtn_RWOutput->sizePolicy().hasHeightForWidth());
        pbtn_RWOutput->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pbtn_RWOutput);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pbtn_ReadWrite = new QPushButton(groupBox_3);
        pbtn_ReadWrite->setObjectName(QString::fromUtf8("pbtn_ReadWrite"));
        sizePolicy1.setHeightForWidth(pbtn_ReadWrite->sizePolicy().hasHeightForWidth());
        pbtn_ReadWrite->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(pbtn_ReadWrite);

        pbtn_ReadOnly = new QPushButton(groupBox_3);
        pbtn_ReadOnly->setObjectName(QString::fromUtf8("pbtn_ReadOnly"));
        sizePolicy1.setHeightForWidth(pbtn_ReadOnly->sizePolicy().hasHeightForWidth());
        pbtn_ReadOnly->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(pbtn_ReadOnly);

        pbtn_DisableRWControl = new QPushButton(groupBox_3);
        pbtn_DisableRWControl->setObjectName(QString::fromUtf8("pbtn_DisableRWControl"));
        sizePolicy1.setHeightForWidth(pbtn_DisableRWControl->sizePolicy().hasHeightForWidth());
        pbtn_DisableRWControl->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(pbtn_DisableRWControl);

        pbtn_EnableRWControl = new QPushButton(groupBox_3);
        pbtn_EnableRWControl->setObjectName(QString::fromUtf8("pbtn_EnableRWControl"));
        sizePolicy1.setHeightForWidth(pbtn_EnableRWControl->sizePolicy().hasHeightForWidth());
        pbtn_EnableRWControl->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(pbtn_EnableRWControl);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(QLineEditDemo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        le_InputMaskControl = new QLineEdit(groupBox_4);
        le_InputMaskControl->setObjectName(QString::fromUtf8("le_InputMaskControl"));
        sizePolicy.setHeightForWidth(le_InputMaskControl->sizePolicy().hasHeightForWidth());
        le_InputMaskControl->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(le_InputMaskControl);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pbtn_NoInputMask = new QPushButton(groupBox_4);
        pbtn_NoInputMask->setObjectName(QString::fromUtf8("pbtn_NoInputMask"));
        sizePolicy1.setHeightForWidth(pbtn_NoInputMask->sizePolicy().hasHeightForWidth());
        pbtn_NoInputMask->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(pbtn_NoInputMask);

        pbtn_TelNoInputMask = new QPushButton(groupBox_4);
        pbtn_TelNoInputMask->setObjectName(QString::fromUtf8("pbtn_TelNoInputMask"));
        sizePolicy1.setHeightForWidth(pbtn_TelNoInputMask->sizePolicy().hasHeightForWidth());
        pbtn_TelNoInputMask->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(pbtn_TelNoInputMask);

        pbtn_KeyInputMask = new QPushButton(groupBox_4);
        pbtn_KeyInputMask->setObjectName(QString::fromUtf8("pbtn_KeyInputMask"));
        sizePolicy1.setHeightForWidth(pbtn_KeyInputMask->sizePolicy().hasHeightForWidth());
        pbtn_KeyInputMask->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(pbtn_KeyInputMask);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(QLineEditDemo);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, 0, -1);
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(label_2);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        le_Addend1 = new QLineEdit(groupBox_5);
        le_Addend1->setObjectName(QString::fromUtf8("le_Addend1"));
        sizePolicy.setHeightForWidth(le_Addend1->sizePolicy().hasHeightForWidth());
        le_Addend1->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(le_Addend1);

        le_Minuend = new QLineEdit(groupBox_5);
        le_Minuend->setObjectName(QString::fromUtf8("le_Minuend"));
        sizePolicy.setHeightForWidth(le_Minuend->sizePolicy().hasHeightForWidth());
        le_Minuend->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(le_Minuend);


        horizontalLayout_7->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_3);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);


        horizontalLayout_7->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        le_Addend2 = new QLineEdit(groupBox_5);
        le_Addend2->setObjectName(QString::fromUtf8("le_Addend2"));
        sizePolicy.setHeightForWidth(le_Addend2->sizePolicy().hasHeightForWidth());
        le_Addend2->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(le_Addend2);

        le_Subtrahend = new QLineEdit(groupBox_5);
        le_Subtrahend->setObjectName(QString::fromUtf8("le_Subtrahend"));
        sizePolicy.setHeightForWidth(le_Subtrahend->sizePolicy().hasHeightForWidth());
        le_Subtrahend->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(le_Subtrahend);


        horizontalLayout_7->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_5);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_6);


        horizontalLayout_7->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        le_Sum = new QLineEdit(groupBox_5);
        le_Sum->setObjectName(QString::fromUtf8("le_Sum"));
        sizePolicy.setHeightForWidth(le_Sum->sizePolicy().hasHeightForWidth());
        le_Sum->setSizePolicy(sizePolicy);
        le_Sum->setReadOnly(true);

        verticalLayout_11->addWidget(le_Sum);

        le_Difference = new QLineEdit(groupBox_5);
        le_Difference->setObjectName(QString::fromUtf8("le_Difference"));
        sizePolicy.setHeightForWidth(le_Difference->sizePolicy().hasHeightForWidth());
        le_Difference->setSizePolicy(sizePolicy);
        le_Difference->setReadOnly(true);

        verticalLayout_11->addWidget(le_Difference);


        horizontalLayout_7->addLayout(verticalLayout_11);


        verticalLayout->addWidget(groupBox_5);


        retranslateUi(QLineEditDemo);

        QMetaObject::connectSlotsByName(QLineEditDemo);
    } // setupUi

    void retranslateUi(QWidget *QLineEditDemo)
    {
        QLineEditDemo->setWindowTitle(QCoreApplication::translate("QLineEditDemo", "QLineEditDemo", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("QLineEditDemo", "\345\233\236\346\230\276\346\250\241\345\274\217", nullptr));
        le_EchoMode->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "Normal", nullptr));
        pbtn_EchoOutput->setText(QCoreApplication::translate("QLineEditDemo", "\350\276\223\345\207\272\345\206\205\345\256\271", nullptr));
        pbtn_NormalMode->setText(QCoreApplication::translate("QLineEditDemo", "\346\255\243\345\270\270\346\250\241\345\274\217", nullptr));
        pbtn_PasswordMode->setText(QCoreApplication::translate("QLineEditDemo", "\345\257\206\347\240\201\346\250\241\345\274\217", nullptr));
        pbtn_NoEchoMode->setText(QCoreApplication::translate("QLineEditDemo", "\346\227\240\345\233\236\346\230\276\346\250\241\345\274\217", nullptr));
        pbtn_PwdEchoOnEditMode->setText(QCoreApplication::translate("QLineEditDemo", "\345\244\261\345\216\273\347\204\246\347\202\271\345\217\230\345\257\206\347\240\201\346\250\241\345\274\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QLineEditDemo", "\345\257\271\351\275\220\346\226\271\345\274\217", nullptr));
        le_Alignment->setText(QCoreApplication::translate("QLineEditDemo", "\345\257\271\351\275\220\346\226\271\345\274\217\346\274\224\347\244\272", nullptr));
        pbtn_AlignLeft->setText(QCoreApplication::translate("QLineEditDemo", "\345\267\246\345\257\271\351\275\220", nullptr));
        pbtn_AlignCenter->setText(QCoreApplication::translate("QLineEditDemo", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        pbtn_AlignRight->setText(QCoreApplication::translate("QLineEditDemo", "\345\217\263\345\257\271\351\275\220", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QLineEditDemo", "\350\257\273\345\206\231\346\216\247\345\210\266", nullptr));
        pbtn_RWOutput->setText(QCoreApplication::translate("QLineEditDemo", "\350\276\223\345\207\272\345\206\205\345\256\271", nullptr));
        pbtn_ReadWrite->setText(QCoreApplication::translate("QLineEditDemo", "\350\257\273 / \345\206\231", nullptr));
        pbtn_ReadOnly->setText(QCoreApplication::translate("QLineEditDemo", "\345\217\252\350\257\273", nullptr));
        pbtn_DisableRWControl->setText(QCoreApplication::translate("QLineEditDemo", "\347\246\201\347\224\250", nullptr));
        pbtn_EnableRWControl->setText(QCoreApplication::translate("QLineEditDemo", "\345\220\257\347\224\250", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QLineEditDemo", "\346\240\274\345\274\217\346\216\247\345\210\266", nullptr));
        pbtn_NoInputMask->setText(QCoreApplication::translate("QLineEditDemo", "\346\227\240\346\216\247\345\210\266", nullptr));
        pbtn_TelNoInputMask->setText(QCoreApplication::translate("QLineEditDemo", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        pbtn_KeyInputMask->setText(QCoreApplication::translate("QLineEditDemo", "\345\257\206\351\222\245", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("QLineEditDemo", "\344\277\241\345\217\267\346\247\275", nullptr));
        label->setText(QCoreApplication::translate("QLineEditDemo", "textChange \344\277\241\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QLineEditDemo", "editingFinished \344\277\241\345\217\267\357\274\232", nullptr));
        le_Addend1->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\345\212\240\346\225\2601", nullptr));
        le_Minuend->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\350\242\253\345\207\217\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("QLineEditDemo", "+", nullptr));
        label_4->setText(QCoreApplication::translate("QLineEditDemo", "-", nullptr));
        le_Addend2->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\345\212\240\346\225\2602", nullptr));
        le_Subtrahend->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\345\207\217\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("QLineEditDemo", "=", nullptr));
        label_6->setText(QCoreApplication::translate("QLineEditDemo", "=", nullptr));
        le_Sum->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\345\222\214", nullptr));
        le_Difference->setPlaceholderText(QCoreApplication::translate("QLineEditDemo", "\345\267\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QLineEditDemo: public Ui_QLineEditDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO04_QLINEEDIT_H
