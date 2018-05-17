/********************************************************************************
** Form generated from reading UI file 'profilereplaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEREPLAYDIALOG_H
#define UI_PROFILEREPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProfileReplayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *profileGroup;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *gpuTimesCB;
    QCheckBox *cpuTimesCB;
    QCheckBox *pixelsDrawnCB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProfileReplayDialog)
    {
        if (ProfileReplayDialog->objectName().isEmpty())
            ProfileReplayDialog->setObjectName(QStringLiteral("ProfileReplayDialog"));
        ProfileReplayDialog->setWindowModality(Qt::ApplicationModal);
        ProfileReplayDialog->resize(353, 165);
        ProfileReplayDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ProfileReplayDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        profileGroup = new QGroupBox(ProfileReplayDialog);
        profileGroup->setObjectName(QStringLiteral("profileGroup"));
        verticalLayout_2 = new QVBoxLayout(profileGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gpuTimesCB = new QCheckBox(profileGroup);
        gpuTimesCB->setObjectName(QStringLiteral("gpuTimesCB"));
        gpuTimesCB->setChecked(true);

        verticalLayout_2->addWidget(gpuTimesCB);

        cpuTimesCB = new QCheckBox(profileGroup);
        cpuTimesCB->setObjectName(QStringLiteral("cpuTimesCB"));
        cpuTimesCB->setChecked(true);

        verticalLayout_2->addWidget(cpuTimesCB);

        pixelsDrawnCB = new QCheckBox(profileGroup);
        pixelsDrawnCB->setObjectName(QStringLiteral("pixelsDrawnCB"));
        pixelsDrawnCB->setChecked(true);

        verticalLayout_2->addWidget(pixelsDrawnCB);


        verticalLayout->addWidget(profileGroup);

        buttonBox = new QDialogButtonBox(ProfileReplayDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProfileReplayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProfileReplayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProfileReplayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProfileReplayDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileReplayDialog)
    {
        ProfileReplayDialog->setWindowTitle(QApplication::translate("ProfileReplayDialog", "Profile Configuration", nullptr));
#ifndef QT_NO_WHATSTHIS
        ProfileReplayDialog->setWhatsThis(QApplication::translate("ProfileReplayDialog", "Allows setting options on the profiling process.", nullptr));
#endif // QT_NO_WHATSTHIS
        profileGroup->setTitle(QApplication::translate("ProfileReplayDialog", "Profiling", nullptr));
        gpuTimesCB->setText(QApplication::translate("ProfileReplayDialog", "GPU times", nullptr));
        cpuTimesCB->setText(QApplication::translate("ProfileReplayDialog", "CPU times", nullptr));
        pixelsDrawnCB->setText(QApplication::translate("ProfileReplayDialog", "Pixels drawn per call", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileReplayDialog: public Ui_ProfileReplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEREPLAYDIALOG_H
