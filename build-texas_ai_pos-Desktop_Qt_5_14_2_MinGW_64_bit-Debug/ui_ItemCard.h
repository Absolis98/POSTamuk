/********************************************************************************
** Form generated from reading UI file 'ItemCard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMCARD_H
#define UI_ITEMCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemCard
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblItemName;
    QLabel *lblImage;
    QGridLayout *gridLayout_2;
    QLabel *lblCount;
    QLabel *lblForPrice;
    QSpinBox *boxCount;
    QLabel *lblAvailable;
    QLabel *lblPrice;
    QComboBox *boxSize;
    QPushButton *btnAddToCart;

    void setupUi(QWidget *ItemCard)
    {
        if (ItemCard->objectName().isEmpty())
            ItemCard->setObjectName(QString::fromUtf8("ItemCard"));
        ItemCard->resize(267, 391);
        horizontalLayout = new QHBoxLayout(ItemCard);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(ItemCard);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblItemName = new QLabel(groupBox_3);
        lblItemName->setObjectName(QString::fromUtf8("lblItemName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblItemName->sizePolicy().hasHeightForWidth());
        lblItemName->setSizePolicy(sizePolicy);
        lblItemName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblItemName);

        lblImage = new QLabel(groupBox_3);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblImage->sizePolicy().hasHeightForWidth());
        lblImage->setSizePolicy(sizePolicy1);
        lblImage->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblImage);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblCount = new QLabel(groupBox_3);
        lblCount->setObjectName(QString::fromUtf8("lblCount"));

        gridLayout_2->addWidget(lblCount, 2, 1, 1, 1);

        lblForPrice = new QLabel(groupBox_3);
        lblForPrice->setObjectName(QString::fromUtf8("lblForPrice"));

        gridLayout_2->addWidget(lblForPrice, 1, 0, 1, 1);

        boxCount = new QSpinBox(groupBox_3);
        boxCount->setObjectName(QString::fromUtf8("boxCount"));

        gridLayout_2->addWidget(boxCount, 2, 2, 1, 1);

        lblAvailable = new QLabel(groupBox_3);
        lblAvailable->setObjectName(QString::fromUtf8("lblAvailable"));

        gridLayout_2->addWidget(lblAvailable, 2, 0, 1, 1);

        lblPrice = new QLabel(groupBox_3);
        lblPrice->setObjectName(QString::fromUtf8("lblPrice"));

        gridLayout_2->addWidget(lblPrice, 1, 1, 1, 1);

        boxSize = new QComboBox(groupBox_3);
        boxSize->setObjectName(QString::fromUtf8("boxSize"));

        gridLayout_2->addWidget(boxSize, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        btnAddToCart = new QPushButton(groupBox_3);
        btnAddToCart->setObjectName(QString::fromUtf8("btnAddToCart"));

        verticalLayout_2->addWidget(btnAddToCart);


        horizontalLayout->addWidget(groupBox_3);


        retranslateUi(ItemCard);

        QMetaObject::connectSlotsByName(ItemCard);
    } // setupUi

    void retranslateUi(QWidget *ItemCard)
    {
        ItemCard->setWindowTitle(QCoreApplication::translate("ItemCard", "Form", nullptr));
        groupBox_3->setTitle(QString());
        lblItemName->setText(QCoreApplication::translate("ItemCard", "Item", nullptr));
        lblImage->setText(QString());
        lblCount->setText(QCoreApplication::translate("ItemCard", "8", nullptr));
        lblForPrice->setText(QCoreApplication::translate("ItemCard", "Price:", nullptr));
        lblAvailable->setText(QCoreApplication::translate("ItemCard", "Available:", nullptr));
        lblPrice->setText(QCoreApplication::translate("ItemCard", "$0.00", nullptr));
        btnAddToCart->setText(QCoreApplication::translate("ItemCard", "Add To Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemCard: public Ui_ItemCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMCARD_H
