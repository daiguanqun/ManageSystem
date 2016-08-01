/********************************************************************************
** Form generated from reading UI file 'UserCreateWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCREATEWIDGET_H
#define UI_USERCREATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "privilegewidget.h"

QT_BEGIN_NAMESPACE

class Ui_UserCreateWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *passwordEdit;
    QLabel *label_2;
    QLabel *label;
    PrivilegeWidget *widget;
    QLineEdit *usernameEdit;
    QLabel *label_3;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *UserCreateWidget)
    {
        if (UserCreateWidget->objectName().isEmpty())
            UserCreateWidget->setObjectName(QStringLiteral("UserCreateWidget"));
        UserCreateWidget->resize(400, 300);
        gridLayout = new QGridLayout(UserCreateWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(UserCreateWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);
        passwordEdit->setMinimumSize(QSize(200, 0));
        passwordEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(passwordEdit, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        widget = new PrivilegeWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(100, 20));
        widget->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(widget, 3, 1, 1, 1);

        usernameEdit = new QLineEdit(groupBox);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        sizePolicy.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy);
        usernameEdit->setMinimumSize(QSize(200, 0));
        usernameEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(usernameEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        gridLayout_2->addWidget(saveButton, 4, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(UserCreateWidget);

        QMetaObject::connectSlotsByName(UserCreateWidget);
    } // setupUi

    void retranslateUi(QWidget *UserCreateWidget)
    {
        UserCreateWidget->setWindowTitle(QApplication::translate("UserCreateWidget", "UserCreateWidget", 0));
        groupBox->setTitle(QApplication::translate("UserCreateWidget", "\345\210\233\345\273\272\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("UserCreateWidget", "\345\257\206  \347\240\201\357\274\232", 0));
        label->setText(QApplication::translate("UserCreateWidget", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("UserCreateWidget", "\346\235\203  \351\231\220\357\274\232", 0));
        saveButton->setText(QApplication::translate("UserCreateWidget", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class UserCreateWidget: public Ui_UserCreateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCREATEWIDGET_H
