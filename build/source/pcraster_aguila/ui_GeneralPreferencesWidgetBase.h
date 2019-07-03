/********************************************************************************
** Form generated from reading UI file 'GeneralPreferencesWidgetBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALPREFERENCESWIDGETBASE_H
#define UI_GENERALPREFERENCESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralPreferencesWidgetBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QPushButton *d_changeBackgroundColourButton;
    QPushButton *d_resetButton;

    void setupUi(QWidget *GeneralPreferencesWidgetBase)
    {
        if (GeneralPreferencesWidgetBase->objectName().isEmpty())
            GeneralPreferencesWidgetBase->setObjectName(QStringLiteral("GeneralPreferencesWidgetBase"));
        GeneralPreferencesWidgetBase->resize(302, 50);
        vboxLayout = new QVBoxLayout(GeneralPreferencesWidgetBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(GeneralPreferencesWidgetBase);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        d_changeBackgroundColourButton = new QPushButton(GeneralPreferencesWidgetBase);
        d_changeBackgroundColourButton->setObjectName(QStringLiteral("d_changeBackgroundColourButton"));

        hboxLayout->addWidget(d_changeBackgroundColourButton);

        d_resetButton = new QPushButton(GeneralPreferencesWidgetBase);
        d_resetButton->setObjectName(QStringLiteral("d_resetButton"));

        hboxLayout->addWidget(d_resetButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(GeneralPreferencesWidgetBase);

        QMetaObject::connectSlotsByName(GeneralPreferencesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *GeneralPreferencesWidgetBase)
    {
        GeneralPreferencesWidgetBase->setWindowTitle(QApplication::translate("GeneralPreferencesWidgetBase", "Form2", Q_NULLPTR));
        textLabel1->setText(QApplication::translate("GeneralPreferencesWidgetBase", "Background colour", Q_NULLPTR));
        d_changeBackgroundColourButton->setText(QApplication::translate("GeneralPreferencesWidgetBase", "Change", Q_NULLPTR));
        d_resetButton->setText(QApplication::translate("GeneralPreferencesWidgetBase", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GeneralPreferencesWidgetBase: public Ui_GeneralPreferencesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALPREFERENCESWIDGETBASE_H
