/********************************************************************************
** Form generated from reading UI file 'SaveViewAsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEVIEWASDIALOGBASE_H
#define UI_SAVEVIEWASDIALOGBASE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveViewAsDialogBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QRadioButton *d_currentTimeRadioButton;
    QRadioButton *d_allTimeStepsRadioButton;
    QGridLayout *gridLayout1;
    QComboBox *d_formatCombo;
    QLabel *d_formatLabel;
    QPushButton *d_browseButton;
    QLineEdit *d_nameEdit;
    QSpacerItem *spacerItem;
    QLabel *d_nameLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *d_cancelButton;
    QPushButton *d_saveButton;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *SaveViewAsDialogBase)
    {
        if (SaveViewAsDialogBase->objectName().isEmpty())
            SaveViewAsDialogBase->setObjectName(QStringLiteral("SaveViewAsDialogBase"));
        SaveViewAsDialogBase->resize(290, 158);
        gridLayout = new QGridLayout(SaveViewAsDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        d_currentTimeRadioButton = new QRadioButton(SaveViewAsDialogBase);
        d_currentTimeRadioButton->setObjectName(QStringLiteral("d_currentTimeRadioButton"));
        d_currentTimeRadioButton->setChecked(true);

        vboxLayout1->addWidget(d_currentTimeRadioButton);

        d_allTimeStepsRadioButton = new QRadioButton(SaveViewAsDialogBase);
        d_allTimeStepsRadioButton->setObjectName(QStringLiteral("d_allTimeStepsRadioButton"));

        vboxLayout1->addWidget(d_allTimeStepsRadioButton);


        vboxLayout->addLayout(vboxLayout1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        d_formatCombo = new QComboBox(SaveViewAsDialogBase);
        d_formatCombo->setObjectName(QStringLiteral("d_formatCombo"));

        gridLayout1->addWidget(d_formatCombo, 0, 1, 1, 1);

        d_formatLabel = new QLabel(SaveViewAsDialogBase);
        d_formatLabel->setObjectName(QStringLiteral("d_formatLabel"));
        d_formatLabel->setWordWrap(false);

        gridLayout1->addWidget(d_formatLabel, 0, 0, 1, 1);

        d_browseButton = new QPushButton(SaveViewAsDialogBase);
        d_browseButton->setObjectName(QStringLiteral("d_browseButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(d_browseButton->sizePolicy().hasHeightForWidth());
        d_browseButton->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(d_browseButton, 1, 2, 1, 1);

        d_nameEdit = new QLineEdit(SaveViewAsDialogBase);
        d_nameEdit->setObjectName(QStringLiteral("d_nameEdit"));

        gridLayout1->addWidget(d_nameEdit, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 2, 1, 1);

        d_nameLabel = new QLabel(SaveViewAsDialogBase);
        d_nameLabel->setObjectName(QStringLiteral("d_nameLabel"));
        d_nameLabel->setWordWrap(false);

        gridLayout1->addWidget(d_nameLabel, 1, 0, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        d_cancelButton = new QPushButton(SaveViewAsDialogBase);
        d_cancelButton->setObjectName(QStringLiteral("d_cancelButton"));

        hboxLayout->addWidget(d_cancelButton);

        d_saveButton = new QPushButton(SaveViewAsDialogBase);
        d_saveButton->setObjectName(QStringLiteral("d_saveButton"));
        d_saveButton->setEnabled(false);

        hboxLayout->addWidget(d_saveButton);

        spacerItem2 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        d_formatLabel->setBuddy(d_formatCombo);
        d_nameLabel->setBuddy(d_nameEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(d_formatCombo, d_nameEdit);
        QWidget::setTabOrder(d_nameEdit, d_browseButton);
        QWidget::setTabOrder(d_browseButton, d_cancelButton);
        QWidget::setTabOrder(d_cancelButton, d_saveButton);

        retranslateUi(SaveViewAsDialogBase);

        d_saveButton->setDefault(true);


        QMetaObject::connectSlotsByName(SaveViewAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SaveViewAsDialogBase)
    {
        SaveViewAsDialogBase->setWindowTitle(QApplication::translate("SaveViewAsDialogBase", "Save View As...", Q_NULLPTR));
        d_currentTimeRadioButton->setText(QApplication::translate("SaveViewAsDialogBase", "Current Time Step", Q_NULLPTR));
        d_allTimeStepsRadioButton->setText(QApplication::translate("SaveViewAsDialogBase", "All Time Steps", Q_NULLPTR));
        d_formatLabel->setText(QApplication::translate("SaveViewAsDialogBase", "Format", Q_NULLPTR));
        d_browseButton->setText(QApplication::translate("SaveViewAsDialogBase", "Browse", Q_NULLPTR));
        d_nameLabel->setText(QApplication::translate("SaveViewAsDialogBase", "Name", Q_NULLPTR));
        d_cancelButton->setText(QApplication::translate("SaveViewAsDialogBase", "Cancel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        d_cancelButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        d_saveButton->setText(QApplication::translate("SaveViewAsDialogBase", "Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        d_saveButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class SaveViewAsDialogBase: public Ui_SaveViewAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEVIEWASDIALOGBASE_H
