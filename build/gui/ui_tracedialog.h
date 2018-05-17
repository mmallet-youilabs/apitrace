/********************************************************************************
** Form generated from reading UI file 'tracedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEDIALOG_H
#define UI_TRACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TraceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *apiComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *applicationEdit;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *argumentsEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TraceDialog)
    {
        if (TraceDialog->objectName().isEmpty())
            TraceDialog->setObjectName(QStringLiteral("TraceDialog"));
        TraceDialog->resize(401, 95);
        verticalLayout = new QVBoxLayout(TraceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(TraceDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        apiComboBox = new QComboBox(TraceDialog);
        apiComboBox->setObjectName(QStringLiteral("apiComboBox"));

        horizontalLayout_3->addWidget(apiComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(TraceDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        applicationEdit = new QLineEdit(TraceDialog);
        applicationEdit->setObjectName(QStringLiteral("applicationEdit"));

        horizontalLayout->addWidget(applicationEdit);

        browseButton = new QPushButton(TraceDialog);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setFlat(false);

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(TraceDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        argumentsEdit = new QLineEdit(TraceDialog);
        argumentsEdit->setObjectName(QStringLiteral("argumentsEdit"));

        horizontalLayout_2->addWidget(argumentsEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TraceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TraceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TraceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TraceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TraceDialog);
    } // setupUi

    void retranslateUi(QDialog *TraceDialog)
    {
        TraceDialog->setWindowTitle(QApplication::translate("TraceDialog", "Dialog", nullptr));
        label_3->setText(QApplication::translate("TraceDialog", "API:", nullptr));
        label->setText(QApplication::translate("TraceDialog", "Application:", nullptr));
        applicationEdit->setPlaceholderText(QApplication::translate("TraceDialog", "Application to trace", nullptr));
        browseButton->setText(QApplication::translate("TraceDialog", "Browse...", nullptr));
        label_2->setText(QApplication::translate("TraceDialog", "Arguments:", nullptr));
        argumentsEdit->setPlaceholderText(QApplication::translate("TraceDialog", "Separate arguments with \";\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TraceDialog: public Ui_TraceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEDIALOG_H
