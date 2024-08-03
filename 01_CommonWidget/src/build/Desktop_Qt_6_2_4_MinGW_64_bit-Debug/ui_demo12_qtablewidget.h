/********************************************************************************
** Form generated from reading UI file 'demo12_qtablewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO12_QTABLEWIDGET_H
#define UI_DEMO12_QTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTableWidgetDemo
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tbwgt_Info;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *ckbox_RowHeader;
    QCheckBox *ckbox_ColumnHeader;
    QCheckBox *ckbox_AlternatingRowColor;
    QCheckBox *ckbox_AlterableCell;
    QPushButton *pbtn_SetStyleSheet;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbtn_SelectCell;
    QRadioButton *rbtn_SelectLine;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *le_Name;
    QLineEdit *le_Sex;
    QLineEdit *le_Age;
    QLineEdit *le_Birthplace;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pbtn_AddLine;
    QPushButton *pbtn_InsertLine;
    QPushButton *pbtn_DeleteCurrentLine;
    QPushButton *pbtn_AlterCurrentLine;

    void setupUi(QWidget *QTableWidgetDemo)
    {
        if (QTableWidgetDemo->objectName().isEmpty())
            QTableWidgetDemo->setObjectName(QString::fromUtf8("QTableWidgetDemo"));
        QTableWidgetDemo->resize(700, 300);
        horizontalLayout_2 = new QHBoxLayout(QTableWidgetDemo);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbwgt_Info = new QTableWidget(QTableWidgetDemo);
        tbwgt_Info->setObjectName(QString::fromUtf8("tbwgt_Info"));

        horizontalLayout_2->addWidget(tbwgt_Info);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_1 = new QGroupBox(QTableWidgetDemo);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ckbox_RowHeader = new QCheckBox(groupBox_1);
        ckbox_RowHeader->setObjectName(QString::fromUtf8("ckbox_RowHeader"));
        ckbox_RowHeader->setChecked(true);

        verticalLayout_2->addWidget(ckbox_RowHeader);

        ckbox_ColumnHeader = new QCheckBox(groupBox_1);
        ckbox_ColumnHeader->setObjectName(QString::fromUtf8("ckbox_ColumnHeader"));
        ckbox_ColumnHeader->setChecked(true);

        verticalLayout_2->addWidget(ckbox_ColumnHeader);

        ckbox_AlternatingRowColor = new QCheckBox(groupBox_1);
        ckbox_AlternatingRowColor->setObjectName(QString::fromUtf8("ckbox_AlternatingRowColor"));
        ckbox_AlternatingRowColor->setChecked(true);

        verticalLayout_2->addWidget(ckbox_AlternatingRowColor);

        ckbox_AlterableCell = new QCheckBox(groupBox_1);
        ckbox_AlterableCell->setObjectName(QString::fromUtf8("ckbox_AlterableCell"));
        ckbox_AlterableCell->setChecked(true);

        verticalLayout_2->addWidget(ckbox_AlterableCell);


        horizontalLayout_3->addLayout(verticalLayout_2);

        pbtn_SetStyleSheet = new QPushButton(groupBox_1);
        pbtn_SetStyleSheet->setObjectName(QString::fromUtf8("pbtn_SetStyleSheet"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbtn_SetStyleSheet->sizePolicy().hasHeightForWidth());
        pbtn_SetStyleSheet->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pbtn_SetStyleSheet);


        horizontalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(QTableWidgetDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rbtn_SelectCell = new QRadioButton(groupBox_2);
        rbtn_SelectCell->setObjectName(QString::fromUtf8("rbtn_SelectCell"));
        rbtn_SelectCell->setChecked(true);

        verticalLayout_4->addWidget(rbtn_SelectCell);

        rbtn_SelectLine = new QRadioButton(groupBox_2);
        rbtn_SelectLine->setObjectName(QString::fromUtf8("rbtn_SelectLine"));

        verticalLayout_4->addWidget(rbtn_SelectLine);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(QTableWidgetDemo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(label_2);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(label_3);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(label_4);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        le_Name = new QLineEdit(groupBox_3);
        le_Name->setObjectName(QString::fromUtf8("le_Name"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_Name->sizePolicy().hasHeightForWidth());
        le_Name->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(le_Name);

        le_Sex = new QLineEdit(groupBox_3);
        le_Sex->setObjectName(QString::fromUtf8("le_Sex"));
        sizePolicy2.setHeightForWidth(le_Sex->sizePolicy().hasHeightForWidth());
        le_Sex->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(le_Sex);

        le_Age = new QLineEdit(groupBox_3);
        le_Age->setObjectName(QString::fromUtf8("le_Age"));
        sizePolicy2.setHeightForWidth(le_Age->sizePolicy().hasHeightForWidth());
        le_Age->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(le_Age);

        le_Birthplace = new QLineEdit(groupBox_3);
        le_Birthplace->setObjectName(QString::fromUtf8("le_Birthplace"));
        sizePolicy2.setHeightForWidth(le_Birthplace->sizePolicy().hasHeightForWidth());
        le_Birthplace->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(le_Birthplace);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pbtn_AddLine = new QPushButton(groupBox_3);
        pbtn_AddLine->setObjectName(QString::fromUtf8("pbtn_AddLine"));

        verticalLayout_7->addWidget(pbtn_AddLine);

        pbtn_InsertLine = new QPushButton(groupBox_3);
        pbtn_InsertLine->setObjectName(QString::fromUtf8("pbtn_InsertLine"));

        verticalLayout_7->addWidget(pbtn_InsertLine);

        pbtn_DeleteCurrentLine = new QPushButton(groupBox_3);
        pbtn_DeleteCurrentLine->setObjectName(QString::fromUtf8("pbtn_DeleteCurrentLine"));

        verticalLayout_7->addWidget(pbtn_DeleteCurrentLine);

        pbtn_AlterCurrentLine = new QPushButton(groupBox_3);
        pbtn_AlterCurrentLine->setObjectName(QString::fromUtf8("pbtn_AlterCurrentLine"));

        verticalLayout_7->addWidget(pbtn_AlterCurrentLine);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(QTableWidgetDemo);

        QMetaObject::connectSlotsByName(QTableWidgetDemo);
    } // setupUi

    void retranslateUi(QWidget *QTableWidgetDemo)
    {
        QTableWidgetDemo->setWindowTitle(QCoreApplication::translate("QTableWidgetDemo", "QTableWidgetDemo", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("QTableWidgetDemo", "\345\244\226\350\247\202\350\256\276\347\275\256", nullptr));
        ckbox_RowHeader->setText(QCoreApplication::translate("QTableWidgetDemo", "\350\241\214\350\241\250\345\244\264", nullptr));
        ckbox_ColumnHeader->setText(QCoreApplication::translate("QTableWidgetDemo", "\345\210\227\350\241\250\345\244\264", nullptr));
        ckbox_AlternatingRowColor->setText(QCoreApplication::translate("QTableWidgetDemo", "\344\272\244\346\233\277\350\203\214\346\231\257\350\211\262", nullptr));
        ckbox_AlterableCell->setText(QCoreApplication::translate("QTableWidgetDemo", "\345\215\225\345\205\203\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        pbtn_SetStyleSheet->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("QTableWidgetDemo", "\351\200\211\346\213\251\350\256\276\347\275\256", nullptr));
        rbtn_SelectCell->setText(QCoreApplication::translate("QTableWidgetDemo", "\351\200\211\346\213\251\345\215\225\345\205\203\346\240\274", nullptr));
        rbtn_SelectLine->setText(QCoreApplication::translate("QTableWidgetDemo", "\351\200\211\346\213\251\350\241\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QTableWidgetDemo", "\346\225\260\346\215\256\346\223\215\344\275\234", nullptr));
        label->setText(QCoreApplication::translate("QTableWidgetDemo", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QTableWidgetDemo", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QTableWidgetDemo", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("QTableWidgetDemo", "\347\261\215\350\264\257\357\274\232", nullptr));
        pbtn_AddLine->setText(QCoreApplication::translate("QTableWidgetDemo", "\346\267\273\345\212\240\344\270\200\350\241\214", nullptr));
        pbtn_InsertLine->setText(QCoreApplication::translate("QTableWidgetDemo", "\346\217\222\345\205\245\344\270\200\350\241\214", nullptr));
        pbtn_DeleteCurrentLine->setText(QCoreApplication::translate("QTableWidgetDemo", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pbtn_AlterCurrentLine->setText(QCoreApplication::translate("QTableWidgetDemo", "\344\277\256\346\224\271\345\275\223\345\211\215\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTableWidgetDemo: public Ui_QTableWidgetDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO12_QTABLEWIDGET_H
