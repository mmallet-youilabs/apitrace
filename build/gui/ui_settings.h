/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *extensionsBox;
    QCheckBox *functionsBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *errorsBox;
    QCheckBox *statesBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *customBox;
    QLineEdit *customEdit;
    QGroupBox *showFilterBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *showFilterCB;
    QLineEdit *showFilterEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->setEnabled(true);
        Settings->resize(571, 334);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        extensionsBox = new QCheckBox(groupBox);
        extensionsBox->setObjectName(QStringLiteral("extensionsBox"));

        horizontalLayout->addWidget(extensionsBox);

        functionsBox = new QCheckBox(groupBox);
        functionsBox->setObjectName(QStringLiteral("functionsBox"));

        horizontalLayout->addWidget(functionsBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        errorsBox = new QCheckBox(groupBox);
        errorsBox->setObjectName(QStringLiteral("errorsBox"));

        horizontalLayout_2->addWidget(errorsBox);

        statesBox = new QCheckBox(groupBox);
        statesBox->setObjectName(QStringLiteral("statesBox"));

        horizontalLayout_2->addWidget(statesBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        customBox = new QCheckBox(groupBox);
        customBox->setObjectName(QStringLiteral("customBox"));

        horizontalLayout_3->addWidget(customBox);

        customEdit = new QLineEdit(groupBox);
        customEdit->setObjectName(QStringLiteral("customEdit"));
        customEdit->setEnabled(false);

        horizontalLayout_3->addWidget(customEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        showFilterBox = new QGroupBox(Settings);
        showFilterBox->setObjectName(QStringLiteral("showFilterBox"));
        showFilterBox->setCheckable(true);
        showFilterBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(showFilterBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        showFilterCB = new QComboBox(showFilterBox);
        showFilterCB->setObjectName(QStringLiteral("showFilterCB"));

        verticalLayout_2->addWidget(showFilterCB);

        showFilterEdit = new QLineEdit(showFilterBox);
        showFilterEdit->setObjectName(QStringLiteral("showFilterEdit"));

        verticalLayout_2->addWidget(showFilterEdit);

        label = new QLabel(showFilterBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(showFilterBox);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));
        QObject::connect(customBox, SIGNAL(toggled(bool)), customEdit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "QApiTrace Settings", nullptr));
        groupBox->setTitle(QApplication::translate("Settings", "Hidden Events", nullptr));
        extensionsBox->setText(QApplication::translate("Settings", "Extension queries", nullptr));
        functionsBox->setText(QApplication::translate("Settings", "Function resolution", nullptr));
        errorsBox->setText(QApplication::translate("Settings", "Error queries", nullptr));
        statesBox->setText(QApplication::translate("Settings", "Extra state queries", nullptr));
        customBox->setText(QApplication::translate("Settings", "Custom", nullptr));
        showFilterBox->setTitle(QApplication::translate("Settings", "Only show the following events", nullptr));
        label->setText(QApplication::translate("Settings", "You can specify one of the predefined categories or create a custom regexp to show only a specific set of events.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
