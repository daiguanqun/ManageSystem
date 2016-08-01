/********************************************************************************
** Form generated from reading UI file 'managesystem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESYSTEM_H
#define UI_MANAGESYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageSystemClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *bannerWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QWidget *backgroundWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *mainWidget;
    QHBoxLayout *mainHorizontalLayout;

    void setupUi(QMainWindow *ManageSystemClass)
    {
        if (ManageSystemClass->objectName().isEmpty())
            ManageSystemClass->setObjectName(QStringLiteral("ManageSystemClass"));
        ManageSystemClass->resize(2217, 704);
        centralWidget = new QWidget(ManageSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        bannerWidget = new QWidget(centralWidget);
        bannerWidget->setObjectName(QStringLiteral("bannerWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bannerWidget->sizePolicy().hasHeightForWidth());
        bannerWidget->setSizePolicy(sizePolicy);
        bannerWidget->setMinimumSize(QSize(1200, 200));
        bannerWidget->setStyleSheet(QStringLiteral("border-image: url(:/ManageSystem/images/banner.png);"));
        horizontalLayout_3 = new QHBoxLayout(bannerWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exitButton = new QPushButton(bannerWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);
        exitButton->setMinimumSize(QSize(30, 30));
        exitButton->setMaximumSize(QSize(30, 30));
        exitButton->setStyleSheet(QLatin1String("QPushButton#exitButton\n"
"{\n"
"	border-radius: 3px;\n"
"	background-color: rgba(116, 176, 176, 0);\n"
"	border-image: url(:/ManageSystem/images/exit.png);\n"
"}\n"
"QPushButton#exitButton:hover\n"
"{\n"
"	background-color: rgba(255, 255, 255, 80);\n"
"}\n"
"QPushButton#exitButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 160);\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(exitButton, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(bannerWidget, 0, Qt::AlignTop);

        backgroundWidget = new QWidget(centralWidget);
        backgroundWidget->setObjectName(QStringLiteral("backgroundWidget"));
        backgroundWidget->setStyleSheet(QLatin1String("QWidget#backgroundWidget\n"
"{\n"
"	border-image: url(:/ManageSystem/images/background.png);\n"
"}"));
        horizontalLayout = new QHBoxLayout(backgroundWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(backgroundWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setStyleSheet(QLatin1String("border:none;\n"
"background-color: transparent;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 69, 504));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("border:1px solid rgb(45, 100, 120);"));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        mainWidget = new QWidget(backgroundWidget);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setStyleSheet(QLatin1String("#mainWidget\n"
"{\n"
"background-color: white;\n"
"}"));
        mainHorizontalLayout = new QHBoxLayout(mainWidget);
        mainHorizontalLayout->setSpacing(0);
        mainHorizontalLayout->setContentsMargins(11, 11, 11, 11);
        mainHorizontalLayout->setObjectName(QStringLiteral("mainHorizontalLayout"));
        mainHorizontalLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout->addWidget(mainWidget);


        verticalLayout_2->addWidget(backgroundWidget);

        ManageSystemClass->setCentralWidget(centralWidget);

        retranslateUi(ManageSystemClass);

        QMetaObject::connectSlotsByName(ManageSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *ManageSystemClass)
    {
        ManageSystemClass->setWindowTitle(QApplication::translate("ManageSystemClass", "ManageSystem", 0));
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManageSystemClass: public Ui_ManageSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESYSTEM_H
