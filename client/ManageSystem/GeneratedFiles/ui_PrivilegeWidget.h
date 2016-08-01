/********************************************************************************
** Form generated from reading UI file 'PrivilegeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVILEGEWIDGET_H
#define UI_PRIVILEGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivilegeWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *instrumentCheckBox;
    QCheckBox *instrumentProductionCheckBox;
    QCheckBox *reagentCheckBox;
    QCheckBox *reagentProductionCheckBox;
    QCheckBox *hospitalCheckBox;
    QCheckBox *accountCheckBox;

    void setupUi(QWidget *PrivilegeWidget)
    {
        if (PrivilegeWidget->objectName().isEmpty())
            PrivilegeWidget->setObjectName(QStringLiteral("PrivilegeWidget"));
        PrivilegeWidget->resize(522, 34);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PrivilegeWidget->sizePolicy().hasHeightForWidth());
        PrivilegeWidget->setSizePolicy(sizePolicy);
        PrivilegeWidget->setMinimumSize(QSize(0, 0));
        PrivilegeWidget->setMaximumSize(QSize(1000, 1000));
        horizontalLayout = new QHBoxLayout(PrivilegeWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        instrumentCheckBox = new QCheckBox(PrivilegeWidget);
        instrumentCheckBox->setObjectName(QStringLiteral("instrumentCheckBox"));

        horizontalLayout->addWidget(instrumentCheckBox);

        instrumentProductionCheckBox = new QCheckBox(PrivilegeWidget);
        instrumentProductionCheckBox->setObjectName(QStringLiteral("instrumentProductionCheckBox"));

        horizontalLayout->addWidget(instrumentProductionCheckBox);

        reagentCheckBox = new QCheckBox(PrivilegeWidget);
        reagentCheckBox->setObjectName(QStringLiteral("reagentCheckBox"));

        horizontalLayout->addWidget(reagentCheckBox);

        reagentProductionCheckBox = new QCheckBox(PrivilegeWidget);
        reagentProductionCheckBox->setObjectName(QStringLiteral("reagentProductionCheckBox"));

        horizontalLayout->addWidget(reagentProductionCheckBox);

        hospitalCheckBox = new QCheckBox(PrivilegeWidget);
        hospitalCheckBox->setObjectName(QStringLiteral("hospitalCheckBox"));

        horizontalLayout->addWidget(hospitalCheckBox);

        accountCheckBox = new QCheckBox(PrivilegeWidget);
        accountCheckBox->setObjectName(QStringLiteral("accountCheckBox"));

        horizontalLayout->addWidget(accountCheckBox);


        retranslateUi(PrivilegeWidget);

        QMetaObject::connectSlotsByName(PrivilegeWidget);
    } // setupUi

    void retranslateUi(QWidget *PrivilegeWidget)
    {
        PrivilegeWidget->setWindowTitle(QApplication::translate("PrivilegeWidget", "PrivilegeWidget", 0));
        instrumentCheckBox->setText(QApplication::translate("PrivilegeWidget", "\344\273\252\345\231\250\347\256\241\347\220\206", 0));
        instrumentProductionCheckBox->setText(QApplication::translate("PrivilegeWidget", "\344\273\252\345\231\250\347\224\237\344\272\247\347\256\241\347\220\206", 0));
        reagentCheckBox->setText(QApplication::translate("PrivilegeWidget", "\350\257\225\345\211\202\347\256\241\347\220\206", 0));
        reagentProductionCheckBox->setText(QApplication::translate("PrivilegeWidget", "\350\257\225\345\211\202\347\224\237\344\272\247\347\256\241\347\220\206", 0));
        hospitalCheckBox->setText(QApplication::translate("PrivilegeWidget", "\345\214\273\351\231\242\347\256\241\347\220\206", 0));
        accountCheckBox->setText(QApplication::translate("PrivilegeWidget", "\350\264\246\345\217\267\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class PrivilegeWidget: public Ui_PrivilegeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVILEGEWIDGET_H
