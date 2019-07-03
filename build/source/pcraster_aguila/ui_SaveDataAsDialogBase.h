/********************************************************************************
** Form generated from reading UI file 'SaveDataAsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDATAASDIALOGBASE_H
#define UI_SAVEDATAASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveDataAsDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLabel *textLabel4;
    QPushButton *d_browseButton;
    QComboBox *d_formatCombo;
    QSpacerItem *spacerItem;
    QLineEdit *d_nameEdit;
    QLabel *textLabel3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *d_cancelButton;
    QPushButton *d_saveButton;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *SaveDataAsDialogBase)
    {
        if (SaveDataAsDialogBase->objectName().isEmpty())
            SaveDataAsDialogBase->setObjectName(QStringLiteral("SaveDataAsDialogBase"));
        SaveDataAsDialogBase->resize(282, 110);
        vboxLayout = new QVBoxLayout(SaveDataAsDialogBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textLabel4 = new QLabel(SaveDataAsDialogBase);
        textLabel4->setObjectName(QStringLiteral("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout->addWidget(textLabel4, 1, 0, 1, 1);

        d_browseButton = new QPushButton(SaveDataAsDialogBase);
        d_browseButton->setObjectName(QStringLiteral("d_browseButton"));

        gridLayout->addWidget(d_browseButton, 1, 2, 1, 1);

        d_formatCombo = new QComboBox(SaveDataAsDialogBase);
        d_formatCombo->setObjectName(QStringLiteral("d_formatCombo"));

        gridLayout->addWidget(d_formatCombo, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        d_nameEdit = new QLineEdit(SaveDataAsDialogBase);
        d_nameEdit->setObjectName(QStringLiteral("d_nameEdit"));

        gridLayout->addWidget(d_nameEdit, 1, 1, 1, 1);

        textLabel3 = new QLabel(SaveDataAsDialogBase);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        hboxLayout->addItem(spacerItem1);

        d_cancelButton = new QPushButton(SaveDataAsDialogBase);
        d_cancelButton->setObjectName(QStringLiteral("d_cancelButton"));

        hboxLayout->addWidget(d_cancelButton);

        d_saveButton = new QPushButton(SaveDataAsDialogBase);
        d_saveButton->setObjectName(QStringLiteral("d_saveButton"));
        d_saveButton->setEnabled(false);

        hboxLayout->addWidget(d_saveButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        hboxLayout->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(SaveDataAsDialogBase);
        QObject::connect(d_cancelButton, SIGNAL(clicked()), SaveDataAsDialogBase, SLOT(reject()));
        QObject::connect(d_saveButton, SIGNAL(clicked()), SaveDataAsDialogBase, SLOT(accept()));
        QObject::connect(d_browseButton, SIGNAL(clicked()), SaveDataAsDialogBase, SLOT(browse()));
        QObject::connect(d_nameEdit, SIGNAL(textChanged(QString)), SaveDataAsDialogBase, SLOT(nameChanged(QString)));

        d_saveButton->setDefault(true);


        QMetaObject::connectSlotsByName(SaveDataAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SaveDataAsDialogBase)
    {
        SaveDataAsDialogBase->setWindowTitle(QApplication::translate("SaveDataAsDialogBase", "Save Data As...", Q_NULLPTR));
        textLabel4->setText(QApplication::translate("SaveDataAsDialogBase", "Name", Q_NULLPTR));
        d_browseButton->setText(QApplication::translate("SaveDataAsDialogBase", "Browse", Q_NULLPTR));
        textLabel3->setText(QApplication::translate("SaveDataAsDialogBase", "Format", Q_NULLPTR));
        d_cancelButton->setText(QApplication::translate("SaveDataAsDialogBase", "Cancel", Q_NULLPTR));
        d_saveButton->setText(QApplication::translate("SaveDataAsDialogBase", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaveDataAsDialogBase: public Ui_SaveDataAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDATAASDIALOGBASE_H
