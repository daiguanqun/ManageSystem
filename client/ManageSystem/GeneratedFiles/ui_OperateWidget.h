/********************************************************************************
** Form generated from reading UI file 'OperateWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATEWIDGET_H
#define UI_OPERATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperateWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *modifyButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *OperateWidget)
    {
        if (OperateWidget->objectName().isEmpty())
            OperateWidget->setObjectName(QStringLiteral("OperateWidget"));
        OperateWidget->resize(94, 41);
        horizontalLayout = new QHBoxLayout(OperateWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modifyButton = new QPushButton(OperateWidget);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modifyButton->sizePolicy().hasHeightForWidth());
        modifyButton->setSizePolicy(sizePolicy);
        modifyButton->setMinimumSize(QSize(35, 0));
        modifyButton->setMaximumSize(QSize(35, 16777215));
        QFont font;
        font.setUnderline(true);
        modifyButton->setFont(font);
        modifyButton->setFlat(true);

        horizontalLayout->addWidget(modifyButton);

        deleteButton = new QPushButton(OperateWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(35, 0));
        deleteButton->setMaximumSize(QSize(35, 16777215));
        deleteButton->setFont(font);
        deleteButton->setFlat(true);

        horizontalLayout->addWidget(deleteButton);


        retranslateUi(OperateWidget);

        QMetaObject::connectSlotsByName(OperateWidget);
    } // setupUi

    void retranslateUi(QWidget *OperateWidget)
    {
        OperateWidget->setWindowTitle(QApplication::translate("OperateWidget", "OperateWidget", 0));
        modifyButton->setText(QApplication::translate("OperateWidget", "\344\277\256\346\224\271", 0));
        deleteButton->setText(QApplication::translate("OperateWidget", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class OperateWidget: public Ui_OperateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATEWIDGET_H
