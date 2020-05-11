/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ItemCard.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *btnShirts;
    QPushButton *btnSweatShirts;
    QPushButton *btnCaps;
    QPushButton *btnCups;
    QPushButton *btnStickers;
    QPushButton *pushButton_13;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    ItemCard *widget;
    ItemCard *widget_2;
    ItemCard *widget_3;
    ItemCard *widget_4;
    ItemCard *widget_5;
    ItemCard *widget_6;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QListView *listView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1757, 998);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/pics/pics/porky.png")));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnShirts = new QPushButton(groupBox);
        btnShirts->setObjectName(QString::fromUtf8("btnShirts"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnShirts->sizePolicy().hasHeightForWidth());
        btnShirts->setSizePolicy(sizePolicy1);
        btnShirts->setToolTipDuration(7);

        verticalLayout->addWidget(btnShirts);

        btnSweatShirts = new QPushButton(groupBox);
        btnSweatShirts->setObjectName(QString::fromUtf8("btnSweatShirts"));
        sizePolicy1.setHeightForWidth(btnSweatShirts->sizePolicy().hasHeightForWidth());
        btnSweatShirts->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnSweatShirts);

        btnCaps = new QPushButton(groupBox);
        btnCaps->setObjectName(QString::fromUtf8("btnCaps"));
        sizePolicy1.setHeightForWidth(btnCaps->sizePolicy().hasHeightForWidth());
        btnCaps->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnCaps);

        btnCups = new QPushButton(groupBox);
        btnCups->setObjectName(QString::fromUtf8("btnCups"));
        sizePolicy1.setHeightForWidth(btnCups->sizePolicy().hasHeightForWidth());
        btnCups->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnCups);

        btnStickers = new QPushButton(groupBox);
        btnStickers->setObjectName(QString::fromUtf8("btnStickers"));
        sizePolicy1.setHeightForWidth(btnStickers->sizePolicy().hasHeightForWidth());
        btnStickers->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnStickers);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton_13);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_11, 3, 2, 1, 1);

        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_12, 3, 1, 1, 1);

        widget = new ItemCard(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        widget_2 = new ItemCard(groupBox_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout->addWidget(widget_2, 1, 2, 1, 1);

        widget_3 = new ItemCard(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        widget_4 = new ItemCard(groupBox_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        gridLayout->addWidget(widget_4, 2, 1, 1, 1);

        widget_5 = new ItemCard(groupBox_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        gridLayout->addWidget(widget_5, 2, 2, 1, 1);

        widget_6 = new ItemCard(groupBox_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));

        gridLayout->addWidget(widget_6, 1, 0, 1, 1);

        gridLayout->setRowStretch(1, 33);
        gridLayout->setRowStretch(2, 33);
        gridLayout->setRowStretch(3, 5);

        verticalLayout_6->addWidget(groupBox_2);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        listView = new QListView(groupBox_4);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_8->addWidget(listView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 90);

        verticalLayout_8->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(pushButton_2);

        verticalLayout_8->setStretch(0, 80);
        verticalLayout_8->setStretch(1, 5);
        verticalLayout_8->setStretch(2, 15);

        verticalLayout_7->addWidget(groupBox_4);

        verticalLayout_7->setStretch(0, 80);

        horizontalLayout->addLayout(verticalLayout_7);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 60);

        retranslateUi(Widget);
        QObject::connect(btnShirts, SIGNAL(clicked()), widget_6, SLOT(setShirts()));
        QObject::connect(btnShirts, SIGNAL(clicked()), widget, SLOT(setShirts()));
        QObject::connect(btnShirts, SIGNAL(clicked()), widget_2, SLOT(setShirts()));
        QObject::connect(btnShirts, SIGNAL(clicked()), widget_3, SLOT(setShirts()));
        QObject::connect(btnShirts, SIGNAL(clicked()), widget_4, SLOT(setShirts()));
        QObject::connect(btnShirts, SIGNAL(clicked()), widget_5, SLOT(setShirts()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget_6, SLOT(setCaps()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget, SLOT(setCaps()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget_2, SLOT(setCaps()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget_3, SLOT(setCaps()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget_4, SLOT(setCaps()));
        QObject::connect(btnCaps, SIGNAL(clicked()), widget_5, SLOT(setCaps()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_8->setText(QString());
        groupBox->setTitle(QString());
        btnShirts->setText(QCoreApplication::translate("Widget", "Shirts", nullptr));
        btnSweatShirts->setText(QCoreApplication::translate("Widget", "Sweat Shirts", nullptr));
        btnCaps->setText(QCoreApplication::translate("Widget", "Caps", nullptr));
        btnCups->setText(QCoreApplication::translate("Widget", "Cups", nullptr));
        btnStickers->setText(QCoreApplication::translate("Widget", "Stickers", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "Misc", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Texas A&I Store", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Products:", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "Next Page", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "Previous Page", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "Cart:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Total:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "$0.00", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
