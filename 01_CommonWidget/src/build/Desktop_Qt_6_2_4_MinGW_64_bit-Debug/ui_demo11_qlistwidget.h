/********************************************************************************
** Form generated from reading UI file 'demo11_qlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO11_QLISTWIDGET_H
#define UI_DEMO11_QLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QListWidgetDemo
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstwgt_Province;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbtn_ListMode;
    QRadioButton *rbtn_IconMode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_CurrentItem;
    QLineEdit *le_Input;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtn_Add;
    QPushButton *pbtn_Insert;
    QPushButton *pbtn_Delete;

    void setupUi(QWidget *QListWidgetDemo)
    {
        if (QListWidgetDemo->objectName().isEmpty())
            QListWidgetDemo->setObjectName(QString::fromUtf8("QListWidgetDemo"));
        QListWidgetDemo->resize(300, 300);
        verticalLayout = new QVBoxLayout(QListWidgetDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstwgt_Province = new QListWidget(QListWidgetDemo);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/qt_256.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icon/qt_256.ico"), QSize(), QIcon::Selected, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(lstwgt_Province);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(lstwgt_Province);
        __qlistwidgetitem1->setIcon(icon);
        lstwgt_Province->setObjectName(QString::fromUtf8("lstwgt_Province"));

        verticalLayout->addWidget(lstwgt_Province);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbtn_ListMode = new QRadioButton(QListWidgetDemo);
        rbtn_ListMode->setObjectName(QString::fromUtf8("rbtn_ListMode"));

        horizontalLayout->addWidget(rbtn_ListMode);

        rbtn_IconMode = new QRadioButton(QListWidgetDemo);
        rbtn_IconMode->setObjectName(QString::fromUtf8("rbtn_IconMode"));

        horizontalLayout->addWidget(rbtn_IconMode);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(QListWidgetDemo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        le_CurrentItem = new QLineEdit(QListWidgetDemo);
        le_CurrentItem->setObjectName(QString::fromUtf8("le_CurrentItem"));

        horizontalLayout_2->addWidget(le_CurrentItem);


        verticalLayout->addLayout(horizontalLayout_2);

        le_Input = new QLineEdit(QListWidgetDemo);
        le_Input->setObjectName(QString::fromUtf8("le_Input"));

        verticalLayout->addWidget(le_Input);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbtn_Add = new QPushButton(QListWidgetDemo);
        pbtn_Add->setObjectName(QString::fromUtf8("pbtn_Add"));

        horizontalLayout_3->addWidget(pbtn_Add);

        pbtn_Insert = new QPushButton(QListWidgetDemo);
        pbtn_Insert->setObjectName(QString::fromUtf8("pbtn_Insert"));

        horizontalLayout_3->addWidget(pbtn_Insert);

        pbtn_Delete = new QPushButton(QListWidgetDemo);
        pbtn_Delete->setObjectName(QString::fromUtf8("pbtn_Delete"));

        horizontalLayout_3->addWidget(pbtn_Delete);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(QListWidgetDemo);

        QMetaObject::connectSlotsByName(QListWidgetDemo);
    } // setupUi

    void retranslateUi(QWidget *QListWidgetDemo)
    {
        QListWidgetDemo->setWindowTitle(QCoreApplication::translate("QListWidgetDemo", "QListWidgetDemo", nullptr));

        const bool __sortingEnabled = lstwgt_Province->isSortingEnabled();
        lstwgt_Province->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lstwgt_Province->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QListWidgetDemo", "\347\244\272\344\276\213\351\241\271\347\233\2561", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lstwgt_Province->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QListWidgetDemo", "\347\244\272\344\276\213\351\241\271\347\233\2562", nullptr));
        lstwgt_Province->setSortingEnabled(__sortingEnabled);

        rbtn_ListMode->setText(QCoreApplication::translate("QListWidgetDemo", "\345\210\227\350\241\250\346\250\241\345\274\217", nullptr));
        rbtn_IconMode->setText(QCoreApplication::translate("QListWidgetDemo", "\345\233\276\346\240\207\346\250\241\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("QListWidgetDemo", "\345\275\223\345\211\215\351\200\211\344\270\255\346\235\241\347\233\256\357\274\232", nullptr));
        pbtn_Add->setText(QCoreApplication::translate("QListWidgetDemo", "\346\267\273\345\212\240", nullptr));
        pbtn_Insert->setText(QCoreApplication::translate("QListWidgetDemo", "\346\217\222\345\205\245", nullptr));
        pbtn_Delete->setText(QCoreApplication::translate("QListWidgetDemo", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QListWidgetDemo: public Ui_QListWidgetDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO11_QLISTWIDGET_H
