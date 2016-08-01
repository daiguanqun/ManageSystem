/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *usernameEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *passwordEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *rememberCheckBox;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(833, 514);
        LoginDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainWidget = new QWidget(LoginDialog);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setStyleSheet(QLatin1String("#mainWidget\n"
"{\n"
"border-image: url(images/background.png) 0 0 0 0 stretch stretch;\n"
"border-radius: 20px;\n"
"border: 2px solid #8f8f91;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(mainWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(mainWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(340, 60));
        label->setMaximumSize(QSize(340, 60));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter);

        widget = new QWidget(mainWidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(540, 340));
        widget->setMaximumSize(QSize(540, 340));
        widget->setStyleSheet(QLatin1String("#widget\n"
"{\n"
"	border-radius: 10px;\n"
"	background-color: rgba(255, 255, 255, 120);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        usernameEdit = new QLineEdit(widget);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        sizePolicy.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy);
        usernameEdit->setMinimumSize(QSize(480, 70));
        usernameEdit->setMaximumSize(QSize(480, 70));
        usernameEdit->setContextMenuPolicy(Qt::NoContextMenu);
        usernameEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(139, 201, 192, 255), stop:1 rgba(119, 179, 179, 255));\n"
"color:white;\n"
"font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        usernameEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(usernameEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setMinimumSize(QSize(480, 70));
        passwordEdit->setMaximumSize(QSize(480, 70));
        passwordEdit->setContextMenuPolicy(Qt::NoContextMenu);
        passwordEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(139, 201, 192, 255), stop:1 rgba(119, 179, 179, 255));\n"
"color:white;\n"
"font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        passwordEdit->setEchoMode(QLineEdit::Password);
        passwordEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(passwordEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(170, 60));
        loginButton->setMaximumSize(QSize(170, 60));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton\n"
"{\n"
"color: white;\n"
"font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-radius: 10px;\n"
"background-color: rgb(116, 176, 176);\n"
"}\n"
"QPushButton#loginButton:hover\n"
"{\n"
"background-color: rgb(126, 186, 186);\n"
"}\n"
"QPushButton#loginButton:pressed\n"
"{\n"
"background-color: rgb(106, 166, 166);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(loginButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(170, 60));
        exitButton->setMaximumSize(QSize(170, 60));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton\n"
"{\n"
"	color: white;\n"
"	font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 10px;\n"
"	background-color: rgb(90, 160, 160);\n"
"}\n"
"QPushButton#exitButton:hover\n"
"{\n"
"background-color: rgb(100, 170, 170);\n"
"}\n"
"QPushButton#exitButton:pressed\n"
"{\n"
"background-color: rgb(80, 150, 150);\n"
"}"));

        horizontalLayout->addWidget(exitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(widget, 0, Qt::AlignHCenter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        rememberCheckBox = new QCheckBox(mainWidget);
        rememberCheckBox->setObjectName(QStringLiteral("rememberCheckBox"));
        rememberCheckBox->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        rememberCheckBox->setTristate(false);

        horizontalLayout_4->addWidget(rememberCheckBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        checkBox_2 = new QCheckBox(mainWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(checkBox_2);

        horizontalSpacer_9 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout->addWidget(mainWidget);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "LoginDialog", 0));
        label->setText(QApplication::translate("LoginDialog", "\350\264\250\346\216\247\345\271\263\345\217\260\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        loginButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        exitButton->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
        rememberCheckBox->setText(QApplication::translate("LoginDialog", "\350\256\260\344\275\217\350\264\246\345\217\267", 0));
        checkBox_2->setText(QApplication::translate("LoginDialog", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
