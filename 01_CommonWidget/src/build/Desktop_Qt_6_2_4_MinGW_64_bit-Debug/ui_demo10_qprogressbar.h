/********************************************************************************
** Form generated from reading UI file 'demo10_qprogressbar.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO10_QPROGRESSBAR_H
#define UI_DEMO10_QPROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QProgressBarDemo
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_FileDownload;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *prgb_FileDownload;
    QPushButton *pbtn_StartDownload;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_FileCopy;
    QHBoxLayout *horizontalLayout;
    QProgressBar *prgb_FileCopy;
    QPushButton *pbtn_StartCopy;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_NetworkRequest;
    QProgressBar *prgb_NetworkRequest;

    void setupUi(QWidget *QProgressBarDemo)
    {
        if (QProgressBarDemo->objectName().isEmpty())
            QProgressBarDemo->setObjectName(QString::fromUtf8("QProgressBarDemo"));
        QProgressBarDemo->resize(400, 300);
        verticalLayout = new QVBoxLayout(QProgressBarDemo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_1 = new QGroupBox(QProgressBarDemo);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        verticalLayout_3 = new QVBoxLayout(groupBox_1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lb_FileDownload = new QLabel(groupBox_1);
        lb_FileDownload->setObjectName(QString::fromUtf8("lb_FileDownload"));
        lb_FileDownload->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lb_FileDownload);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        prgb_FileDownload = new QProgressBar(groupBox_1);
        prgb_FileDownload->setObjectName(QString::fromUtf8("prgb_FileDownload"));
        prgb_FileDownload->setValue(70);
        prgb_FileDownload->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(prgb_FileDownload);

        pbtn_StartDownload = new QPushButton(groupBox_1);
        pbtn_StartDownload->setObjectName(QString::fromUtf8("pbtn_StartDownload"));

        horizontalLayout_2->addWidget(pbtn_StartDownload);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(QProgressBarDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lb_FileCopy = new QLabel(groupBox_2);
        lb_FileCopy->setObjectName(QString::fromUtf8("lb_FileCopy"));
        lb_FileCopy->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lb_FileCopy);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        prgb_FileCopy = new QProgressBar(groupBox_2);
        prgb_FileCopy->setObjectName(QString::fromUtf8("prgb_FileCopy"));
        prgb_FileCopy->setValue(30);
        prgb_FileCopy->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(prgb_FileCopy);

        pbtn_StartCopy = new QPushButton(groupBox_2);
        pbtn_StartCopy->setObjectName(QString::fromUtf8("pbtn_StartCopy"));

        horizontalLayout->addWidget(pbtn_StartCopy);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QProgressBarDemo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lb_NetworkRequest = new QLabel(groupBox_3);
        lb_NetworkRequest->setObjectName(QString::fromUtf8("lb_NetworkRequest"));
        lb_NetworkRequest->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lb_NetworkRequest);

        prgb_NetworkRequest = new QProgressBar(groupBox_3);
        prgb_NetworkRequest->setObjectName(QString::fromUtf8("prgb_NetworkRequest"));
        prgb_NetworkRequest->setMaximum(0);
        prgb_NetworkRequest->setValue(0);
        prgb_NetworkRequest->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(prgb_NetworkRequest);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(QProgressBarDemo);

        QMetaObject::connectSlotsByName(QProgressBarDemo);
    } // setupUi

    void retranslateUi(QWidget *QProgressBarDemo)
    {
        QProgressBarDemo->setWindowTitle(QCoreApplication::translate("QProgressBarDemo", "QProgressBarDemo", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("QProgressBarDemo", "\346\226\207\344\273\266\344\270\213\350\275\275", nullptr));
        lb_FileDownload->setText(QCoreApplication::translate("QProgressBarDemo", "\345\207\206\345\244\207\345\260\261\347\273\252\357\274\214\350\257\267\347\202\271\345\207\273\345\274\200\345\247\213", nullptr));
        pbtn_StartDownload->setText(QCoreApplication::translate("QProgressBarDemo", "\345\274\200\345\247\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QProgressBarDemo", "\346\226\207\344\273\266\346\213\267\350\264\235", nullptr));
        lb_FileCopy->setText(QCoreApplication::translate("QProgressBarDemo", "\345\267\262\346\232\202\345\201\234\357\274\214\350\257\267\347\202\271\345\207\273\347\273\247\347\273\255", nullptr));
        pbtn_StartCopy->setText(QCoreApplication::translate("QProgressBarDemo", "\347\273\247\347\273\255", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QProgressBarDemo", "\347\275\221\347\273\234\350\257\267\346\261\202", nullptr));
        lb_NetworkRequest->setText(QCoreApplication::translate("QProgressBarDemo", "\347\275\221\347\273\234\350\257\267\346\261\202\344\270\255\357\274\214\350\257\267\347\250\215\345\220\216", nullptr));
        prgb_NetworkRequest->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class QProgressBarDemo: public Ui_QProgressBarDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO10_QPROGRESSBAR_H
