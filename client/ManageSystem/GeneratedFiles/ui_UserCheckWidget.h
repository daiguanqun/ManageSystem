/********************************************************************************
** Form generated from reading UI file 'UserCheckWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHECKWIDGET_H
#define UI_USERCHECKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserCheckWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *searchButton;
    QPushButton *searchAllButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *UserCheckWidget)
    {
        if (UserCheckWidget->objectName().isEmpty())
            UserCheckWidget->setObjectName(QStringLiteral("UserCheckWidget"));
        UserCheckWidget->resize(451, 404);
        verticalLayout = new QVBoxLayout(UserCheckWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(UserCheckWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout->addWidget(searchButton);

        searchAllButton = new QPushButton(widget);
        searchAllButton->setObjectName(QStringLiteral("searchAllButton"));

        horizontalLayout->addWidget(searchAllButton);


        verticalLayout_2->addWidget(widget);

        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(4);

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(groupBox);


        retranslateUi(UserCheckWidget);

        QMetaObject::connectSlotsByName(UserCheckWidget);
    } // setupUi

    void retranslateUi(QWidget *UserCheckWidget)
    {
        UserCheckWidget->setWindowTitle(QApplication::translate("UserCheckWidget", "UserCheckWidget", 0));
        groupBox->setTitle(QApplication::translate("UserCheckWidget", "\346\237\245\347\234\213\350\264\246\345\217\267", 0));
        label->setText(QApplication::translate("UserCheckWidget", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        searchButton->setText(QApplication::translate("UserCheckWidget", "\346\237\245\350\257\242", 0));
        searchAllButton->setText(QApplication::translate("UserCheckWidget", "\346\237\245\350\257\242\345\205\250\351\203\250", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserCheckWidget", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserCheckWidget", "\347\224\250\346\210\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserCheckWidget", "\346\235\203\351\231\220", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserCheckWidget", "\346\223\215\344\275\234", 0));
    } // retranslateUi

};

namespace Ui {
    class UserCheckWidget: public Ui_UserCheckWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHECKWIDGET_H
