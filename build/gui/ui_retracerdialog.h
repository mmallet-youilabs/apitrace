/********************************************************************************
** Form generated from reading UI file 'retracerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRACERDIALOG_H
#define UI_RETRACERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RetracerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *doubleBufferingCB;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *coreProfileCB;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *errorCheckCB;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *singlethreadCB;
    QSpacerItem *horizontalSpacer_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RetracerDialog)
    {
        if (RetracerDialog->objectName().isEmpty())
            RetracerDialog->setObjectName(QStringLiteral("RetracerDialog"));
        RetracerDialog->setWindowModality(Qt::ApplicationModal);
        RetracerDialog->resize(286, 125);
        RetracerDialog->setModal(true);
        verticalLayout = new QVBoxLayout(RetracerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        doubleBufferingCB = new QCheckBox(RetracerDialog);
        doubleBufferingCB->setObjectName(QStringLiteral("doubleBufferingCB"));

        horizontalLayout->addWidget(doubleBufferingCB);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        coreProfileCB = new QCheckBox(RetracerDialog);
        coreProfileCB->setObjectName(QStringLiteral("coreProfileCB"));

        horizontalLayout_7->addWidget(coreProfileCB);

        horizontalSpacer_7 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        errorCheckCB = new QCheckBox(RetracerDialog);
        errorCheckCB->setObjectName(QStringLiteral("errorCheckCB"));
        errorCheckCB->setChecked(true);

        horizontalLayout_2->addWidget(errorCheckCB);

        horizontalSpacer_3 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        singlethreadCB = new QCheckBox(RetracerDialog);
        singlethreadCB->setObjectName(QStringLiteral("singlethreadCB"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(singlethreadCB->sizePolicy().hasHeightForWidth());
        singlethreadCB->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(singlethreadCB);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(RetracerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RetracerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RetracerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RetracerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RetracerDialog);
    } // setupUi

    void retranslateUi(QDialog *RetracerDialog)
    {
        RetracerDialog->setWindowTitle(QApplication::translate("RetracerDialog", "Retracer Configuration", nullptr));
#ifndef QT_NO_WHATSTHIS
        RetracerDialog->setWhatsThis(QApplication::translate("RetracerDialog", "Allows setting options on the retracing process.", nullptr));
#endif // QT_NO_WHATSTHIS
        doubleBufferingCB->setText(QApplication::translate("RetracerDialog", "Use double buffering", nullptr));
        coreProfileCB->setText(QApplication::translate("RetracerDialog", "Use core profile", nullptr));
        errorCheckCB->setText(QApplication::translate("RetracerDialog", "Error checking", nullptr));
        singlethreadCB->setText(QApplication::translate("RetracerDialog", "Singlethread", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RetracerDialog: public Ui_RetracerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRACERDIALOG_H
