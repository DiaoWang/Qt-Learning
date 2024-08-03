/********************************************************************************
** Form generated from reading UI file 'demo02_qpushbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO02_QPUSHBUTTON_H
#define UI_DEMO02_QPUSHBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPushButtonDemo
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtn_Play;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbtn_Connect;
    QPushButton *pbtn_SendCmd;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtn_StyleSheet;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbtn_SignalDemo;

    void setupUi(QWidget *QPushButtonDemo)
    {
        if (QPushButtonDemo->objectName().isEmpty())
            QPushButtonDemo->setObjectName(QString::fromUtf8("QPushButtonDemo"));
        QPushButtonDemo->resize(200, 280);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QPushButtonDemo->sizePolicy().hasHeightForWidth());
        QPushButtonDemo->setSizePolicy(sizePolicy);
        QPushButtonDemo->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(9);
        QPushButtonDemo->setFont(font);
        verticalLayout = new QVBoxLayout(QPushButtonDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_1 = new QGroupBox(QPushButtonDemo);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        groupBox_1->setFont(font1);
        horizontalLayout = new QHBoxLayout(groupBox_1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbtn_Play = new QPushButton(groupBox_1);
        pbtn_Play->setObjectName(QString::fromUtf8("pbtn_Play"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbtn_Play->sizePolicy().hasHeightForWidth());
        pbtn_Play->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/start_4acf5a.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbtn_Play->setIcon(icon);
        pbtn_Play->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pbtn_Play);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(QPushButtonDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbtn_Connect = new QPushButton(groupBox_2);
        pbtn_Connect->setObjectName(QString::fromUtf8("pbtn_Connect"));
        sizePolicy1.setHeightForWidth(pbtn_Connect->sizePolicy().hasHeightForWidth());
        pbtn_Connect->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtn_Connect);

        pbtn_SendCmd = new QPushButton(groupBox_2);
        pbtn_SendCmd->setObjectName(QString::fromUtf8("pbtn_SendCmd"));
        pbtn_SendCmd->setEnabled(false);
        sizePolicy1.setHeightForWidth(pbtn_SendCmd->sizePolicy().hasHeightForWidth());
        pbtn_SendCmd->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtn_SendCmd);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QPushButtonDemo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbtn_StyleSheet = new QPushButton(groupBox_3);
        pbtn_StyleSheet->setObjectName(QString::fromUtf8("pbtn_StyleSheet"));
        sizePolicy1.setHeightForWidth(pbtn_StyleSheet->sizePolicy().hasHeightForWidth());
        pbtn_StyleSheet->setSizePolicy(sizePolicy1);
        pbtn_StyleSheet->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout_3->addWidget(pbtn_StyleSheet);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(QPushButtonDemo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbtn_SignalDemo = new QPushButton(groupBox_4);
        pbtn_SignalDemo->setObjectName(QString::fromUtf8("pbtn_SignalDemo"));
        sizePolicy1.setHeightForWidth(pbtn_SignalDemo->sizePolicy().hasHeightForWidth());
        pbtn_SignalDemo->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pbtn_SignalDemo);


        verticalLayout->addWidget(groupBox_4);


        retranslateUi(QPushButtonDemo);

        QMetaObject::connectSlotsByName(QPushButtonDemo);
    } // setupUi

    void retranslateUi(QWidget *QPushButtonDemo)
    {
        QPushButtonDemo->setWindowTitle(QCoreApplication::translate("QPushButtonDemo", "QPushButtonDemo", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("QPushButtonDemo", "\350\256\276\347\275\256\346\226\207\346\234\254\345\222\214\345\233\276\346\240\207", nullptr));
        pbtn_Play->setText(QCoreApplication::translate("QPushButtonDemo", "\345\220\257\345\212\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QPushButtonDemo", "\350\256\276\347\275\256\345\220\257\347\224\250 / \347\246\201\347\224\250 (enabled)", nullptr));
        pbtn_Connect->setText(QCoreApplication::translate("QPushButtonDemo", "\350\277\236\346\216\245", nullptr));
        pbtn_SendCmd->setText(QCoreApplication::translate("QPushButtonDemo", "\345\217\221\351\200\201\345\221\275\344\273\244", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QPushButtonDemo", "\346\240\267\345\274\217\350\241\250", nullptr));
        pbtn_StyleSheet->setText(QCoreApplication::translate("QPushButtonDemo", "\350\256\276\347\275\256\346\240\267\345\274\217\350\241\250\347\244\272\344\276\213", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QPushButtonDemo", "\344\277\241\345\217\267", nullptr));
        pbtn_SignalDemo->setText(QCoreApplication::translate("QPushButtonDemo", "\344\277\241\345\217\267\346\274\224\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPushButtonDemo: public Ui_QPushButtonDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO02_QPUSHBUTTON_H
