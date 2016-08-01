/********************************************************************************
** Form generated from reading UI file 'InstrumentWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUMENTWIDGET_H
#define UI_INSTRUMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstrumentWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *searchTab;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QWidget *createTab;
    QGridLayout *gridLayout;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QLabel *label_7;
    QSpinBox *spinBox;
    QLabel *label_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *modelLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QWidget *resultTab;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *nameLineEdit_2;
    QLabel *label_8;
    QLineEdit *modelLineEdit_2;
    QLabel *label_9;
    QDateEdit *dateEdit_2;
    QLabel *label_14;
    QTextEdit *textEdit_4;
    QLabel *label_11;
    QSpinBox *spinBox_2;
    QLabel *label_12;
    QTextEdit *textEdit_5;
    QLabel *label_13;
    QTextEdit *textEdit_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *InstrumentWidget)
    {
        if (InstrumentWidget->objectName().isEmpty())
            InstrumentWidget->setObjectName(QStringLiteral("InstrumentWidget"));
        InstrumentWidget->resize(724, 538);
        horizontalLayout = new QHBoxLayout(InstrumentWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(InstrumentWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        searchTab = new QWidget();
        searchTab->setObjectName(QStringLiteral("searchTab"));
        verticalLayout_3 = new QVBoxLayout(searchTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget = new QTableWidget(searchTab);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setColumnCount(8);

        verticalLayout_3->addWidget(tableWidget);

        tabWidget->addTab(searchTab, QString());
        createTab = new QWidget();
        createTab->setObjectName(QStringLiteral("createTab"));
        gridLayout = new QGridLayout(createTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nameLineEdit = new QLineEdit(createTab);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(createTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label = new QLabel(createTab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(createTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        verticalLayout_2->addWidget(listWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox_2, 7, 3, 1, 2);

        textEdit_2 = new QTextEdit(createTab);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 5, 2, 1, 3);

        textEdit = new QTextEdit(createTab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 3, 2, 1, 3);

        textEdit_3 = new QTextEdit(createTab);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 6, 2, 1, 3);

        label_5 = new QLabel(createTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(createTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        spinBox = new QSpinBox(createTab);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 4, 2, 1, 1);

        label_6 = new QLabel(createTab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        groupBox = new QGroupBox(createTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox, 7, 0, 1, 3);

        dateEdit = new QDateEdit(createTab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 2, 1, 1);

        label_3 = new QLabel(createTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(createTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        modelLineEdit = new QLineEdit(createTab);
        modelLineEdit->setObjectName(QStringLiteral("modelLineEdit"));

        gridLayout->addWidget(modelLineEdit, 0, 4, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(createTab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_4, 8, 0, 1, 5);

        tabWidget->addTab(createTab, QString());
        resultTab = new QWidget();
        resultTab->setObjectName(QStringLiteral("resultTab"));
        gridLayout_2 = new QGridLayout(resultTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(resultTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        nameLineEdit_2 = new QLineEdit(resultTab);
        nameLineEdit_2->setObjectName(QStringLiteral("nameLineEdit_2"));

        gridLayout_2->addWidget(nameLineEdit_2, 0, 1, 1, 1);

        label_8 = new QLabel(resultTab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        modelLineEdit_2 = new QLineEdit(resultTab);
        modelLineEdit_2->setObjectName(QStringLiteral("modelLineEdit_2"));

        gridLayout_2->addWidget(modelLineEdit_2, 0, 3, 1, 1);

        label_9 = new QLabel(resultTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        dateEdit_2 = new QDateEdit(resultTab);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        gridLayout_2->addWidget(dateEdit_2, 1, 1, 1, 1);

        label_14 = new QLabel(resultTab);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        textEdit_4 = new QTextEdit(resultTab);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout_2->addWidget(textEdit_4, 2, 1, 1, 3);

        label_11 = new QLabel(resultTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        spinBox_2 = new QSpinBox(resultTab);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        gridLayout_2->addWidget(spinBox_2, 3, 1, 1, 1);

        label_12 = new QLabel(resultTab);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        textEdit_5 = new QTextEdit(resultTab);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        gridLayout_2->addWidget(textEdit_5, 4, 1, 1, 3);

        label_13 = new QLabel(resultTab);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 5, 0, 1, 1);

        textEdit_6 = new QTextEdit(resultTab);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));

        gridLayout_2->addWidget(textEdit_6, 5, 1, 1, 3);

        groupBox_4 = new QGroupBox(resultTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_6->addWidget(label_15);


        verticalLayout_5->addLayout(horizontalLayout_6);


        gridLayout_2->addWidget(groupBox_4, 6, 0, 1, 2);

        groupBox_3 = new QGroupBox(resultTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_4->addWidget(label_16);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout_2->addWidget(groupBox_3, 6, 2, 1, 2);

        tabWidget->addTab(resultTab, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(InstrumentWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InstrumentWidget);
    } // setupUi

    void retranslateUi(QWidget *InstrumentWidget)
    {
        InstrumentWidget->setWindowTitle(QApplication::translate("InstrumentWidget", "InstrumentWidget", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("InstrumentWidget", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\236\213\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("InstrumentWidget", "\345\207\272\345\216\202\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("InstrumentWidget", "\346\226\271\346\263\225\345\255\246", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("InstrumentWidget", "\347\241\254\344\273\266\347\211\210\346\234\254", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("InstrumentWidget", "\350\275\257\344\273\266\347\211\210\346\234\254", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("InstrumentWidget", "\346\223\215\344\275\234", 0));
        tabWidget->setTabText(tabWidget->indexOf(searchTab), QApplication::translate("InstrumentWidget", "\346\237\245\347\234\213\344\273\252\345\231\250", 0));
        label_2->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\236\213\345\217\267\357\274\232", 0));
        label->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\220\215\347\247\260\357\274\232", 0));
        groupBox_2->setTitle(QApplication::translate("InstrumentWidget", "\350\275\257\344\273\266\347\211\210\346\234\254", 0));
        pushButton->setText(QApplication::translate("InstrumentWidget", "\346\267\273\345\212\240", 0));
        label_5->setText(QApplication::translate("InstrumentWidget", "\346\227\245\345\277\227\347\272\247\345\210\253\357\274\232", 0));
        label_7->setText(QApplication::translate("InstrumentWidget", "\345\244\207\346\263\250\357\274\232", 0));
        label_6->setText(QApplication::translate("InstrumentWidget", "\346\227\245\345\277\227\350\257\264\346\230\216\357\274\232", 0));
        groupBox->setTitle(QApplication::translate("InstrumentWidget", "\347\241\254\344\273\266\347\211\210\346\234\254", 0));
        pushButton_2->setText(QApplication::translate("InstrumentWidget", "\346\267\273\345\212\240", 0));
        label_3->setText(QApplication::translate("InstrumentWidget", "\345\207\272\345\216\202\346\227\245\346\234\237\357\274\232", 0));
        label_4->setText(QApplication::translate("InstrumentWidget", "\346\226\271\346\263\225\345\255\246\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("InstrumentWidget", "\344\277\235\345\255\230", 0));
        tabWidget->setTabText(tabWidget->indexOf(createTab), QApplication::translate("InstrumentWidget", "\346\267\273\345\212\240\344\273\252\345\231\250", 0));
        label_10->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\220\215\347\247\260\357\274\232", 0));
        label_8->setText(QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\345\236\213\345\217\267\357\274\232", 0));
        label_9->setText(QApplication::translate("InstrumentWidget", "\345\207\272\345\216\202\346\227\245\346\234\237\357\274\232", 0));
        label_14->setText(QApplication::translate("InstrumentWidget", "\346\226\271\346\263\225\345\255\246\357\274\232", 0));
        label_11->setText(QApplication::translate("InstrumentWidget", "\346\227\245\345\277\227\347\272\247\345\210\253\357\274\232", 0));
        label_12->setText(QApplication::translate("InstrumentWidget", "\346\227\245\345\277\227\350\257\264\346\230\216\357\274\232", 0));
        label_13->setText(QApplication::translate("InstrumentWidget", "\345\244\207\346\263\250\357\274\232", 0));
        groupBox_4->setTitle(QApplication::translate("InstrumentWidget", "\347\241\254\344\273\266\347\211\210\346\234\254", 0));
        label_15->setText(QString());
        groupBox_3->setTitle(QApplication::translate("InstrumentWidget", "\350\275\257\344\273\266\347\211\210\346\234\254", 0));
        label_16->setText(QString());
        pushButton_6->setText(QApplication::translate("InstrumentWidget", "\347\256\241\347\220\206", 0));
        pushButton_5->setText(QApplication::translate("InstrumentWidget", "\345\216\206\345\217\262", 0));
        pushButton_4->setText(QApplication::translate("InstrumentWidget", "\345\215\207\347\272\247", 0));
        tabWidget->setTabText(tabWidget->indexOf(resultTab), QApplication::translate("InstrumentWidget", "\344\273\252\345\231\250\350\257\246\346\203\205", 0));
    } // retranslateUi

};

namespace Ui {
    class InstrumentWidget: public Ui_InstrumentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENTWIDGET_H
