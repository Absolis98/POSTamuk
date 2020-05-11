/********************************************************************************
** Form generated from reading UI file 'Checkout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Checkout
{
public:
    QLabel *label_2;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lblTotal;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *lblChange;

    void setupUi(QDialog *Checkout)
    {
        if (Checkout->objectName().isEmpty())
            Checkout->setObjectName(QString::fromUtf8("Checkout"));
        Checkout->resize(885, 598);
        label_2 = new QLabel(Checkout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 30, 61, 16));
        listWidget = new QListWidget(Checkout);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(560, 30, 256, 531));
        widget = new QWidget(Checkout);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 90, 321, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lblTotal = new QLabel(widget);
        lblTotal->setObjectName(QString::fromUtf8("lblTotal"));

        horizontalLayout_2->addWidget(lblTotal);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lblChange = new QLabel(widget);
        lblChange->setObjectName(QString::fromUtf8("lblChange"));

        horizontalLayout_3->addWidget(lblChange);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Checkout);

        QMetaObject::connectSlotsByName(Checkout);
    } // setupUi

    void retranslateUi(QDialog *Checkout)
    {
        Checkout->setWindowTitle(QCoreApplication::translate("Checkout", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Checkout", "CHECKOUT", nullptr));
        label_3->setText(QCoreApplication::translate("Checkout", "Total:", nullptr));
        lblTotal->setText(QCoreApplication::translate("Checkout", "$0.00", nullptr));
        label->setText(QCoreApplication::translate("Checkout", "Cash Given:", nullptr));
        pushButton->setText(QCoreApplication::translate("Checkout", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("Checkout", "Change:", nullptr));
        lblChange->setText(QCoreApplication::translate("Checkout", "$0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Checkout: public Ui_Checkout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
