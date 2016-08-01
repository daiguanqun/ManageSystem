/********************************************************************************
** Form generated from reading UI file 'MenuItem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUITEM_H
#define UI_MENUITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuItem
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *expandButton;
    QWidget *subItemWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *MenuItem)
    {
        if (MenuItem->objectName().isEmpty())
            MenuItem->setObjectName(QStringLiteral("MenuItem"));
        MenuItem->resize(147, 65);
        MenuItem->setStyleSheet(QLatin1String("QWidget#MenuItem\n"
"{\n"
"	border: 2px solid rgb(45,100,120);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(MenuItem);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        expandButton = new QPushButton(MenuItem);
        expandButton->setObjectName(QStringLiteral("expandButton"));
        expandButton->setFocusPolicy(Qt::NoFocus);
        expandButton->setContextMenuPolicy(Qt::NoContextMenu);
        expandButton->setLayoutDirection(Qt::RightToLeft);
        expandButton->setStyleSheet(QString::fromUtf8("QPushButton#expandButton\n"
"{\n"
"	background-color: rgb(45, 100, 120);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: white;\n"
"	text-align: left;\n"
"}"));
        expandButton->setCheckable(false);
        expandButton->setFlat(true);

        verticalLayout->addWidget(expandButton);

        subItemWidget = new QWidget(MenuItem);
        subItemWidget->setObjectName(QStringLiteral("subItemWidget"));
        subItemWidget->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(85, 140, 160);\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: white;\n"
"	text-align: left;\n"
"	border:none;\n"
"	border-left: 1px solid rgb(65, 120, 140);\n"
"	border-right: 1px solid rgb(65, 120, 140);\n"
"	border-bottom: 1px solid rgb(65, 120, 140);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(subItemWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(subItemWidget);


        retranslateUi(MenuItem);

        QMetaObject::connectSlotsByName(MenuItem);
    } // setupUi

    void retranslateUi(QWidget *MenuItem)
    {
        MenuItem->setWindowTitle(QApplication::translate("MenuItem", "MenuItem", 0));
        expandButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MenuItem: public Ui_MenuItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUITEM_H
