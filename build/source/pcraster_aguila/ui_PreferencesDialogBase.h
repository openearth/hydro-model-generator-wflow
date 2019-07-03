/********************************************************************************
** Form generated from reading UI file 'PreferencesDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOGBASE_H
#define UI_PREFERENCESDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QTabWidget *d_preferencesTab;
    QWidget *tab;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *d_okButton;
    QPushButton *d_applyButton;
    QPushButton *d_cancelButton;

    void setupUi(QDialog *PreferencesDialogBase)
    {
        if (PreferencesDialogBase->objectName().isEmpty())
            PreferencesDialogBase->setObjectName(QStringLiteral("PreferencesDialogBase"));
        PreferencesDialogBase->resize(328, 109);
        vboxLayout = new QVBoxLayout(PreferencesDialogBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        d_preferencesTab = new QTabWidget(PreferencesDialogBase);
        d_preferencesTab->setObjectName(QStringLiteral("d_preferencesTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        vboxLayout2 = new QVBoxLayout(tab);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        d_preferencesTab->addTab(tab, QString());

        vboxLayout1->addWidget(d_preferencesTab);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        d_okButton = new QPushButton(PreferencesDialogBase);
        d_okButton->setObjectName(QStringLiteral("d_okButton"));

        hboxLayout->addWidget(d_okButton);

        d_applyButton = new QPushButton(PreferencesDialogBase);
        d_applyButton->setObjectName(QStringLiteral("d_applyButton"));

        hboxLayout->addWidget(d_applyButton);

        d_cancelButton = new QPushButton(PreferencesDialogBase);
        d_cancelButton->setObjectName(QStringLiteral("d_cancelButton"));

        hboxLayout->addWidget(d_cancelButton);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addLayout(vboxLayout1);

        QWidget::setTabOrder(d_preferencesTab, d_okButton);
        QWidget::setTabOrder(d_okButton, d_cancelButton);

        retranslateUi(PreferencesDialogBase);

        d_cancelButton->setDefault(true);


        QMetaObject::connectSlotsByName(PreferencesDialogBase);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialogBase)
    {
        PreferencesDialogBase->setWindowTitle(QApplication::translate("PreferencesDialogBase", "Preferences", Q_NULLPTR));
        d_preferencesTab->setTabText(d_preferencesTab->indexOf(tab), QApplication::translate("PreferencesDialogBase", "General", Q_NULLPTR));
        d_okButton->setText(QApplication::translate("PreferencesDialogBase", "&OK", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        d_okButton->setShortcut(QApplication::translate("PreferencesDialogBase", "Alt+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        d_applyButton->setText(QApplication::translate("PreferencesDialogBase", "&Apply", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        d_applyButton->setShortcut(QApplication::translate("PreferencesDialogBase", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        d_cancelButton->setText(QApplication::translate("PreferencesDialogBase", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        d_cancelButton->setShortcut(QApplication::translate("PreferencesDialogBase", "Alt+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialogBase: public Ui_PreferencesDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOGBASE_H
