/********************************************************************************
** Form generated from reading UI file 'jumpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUMPWIDGET_H
#define UI_JUMPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JumpWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *jumpButton;

    void setupUi(QWidget *JumpWidget)
    {
        if (JumpWidget->objectName().isEmpty())
            JumpWidget->setObjectName(QStringLiteral("JumpWidget"));
        JumpWidget->resize(345, 35);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JumpWidget->sizePolicy().hasHeightForWidth());
        JumpWidget->setSizePolicy(sizePolicy);
        JumpWidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(JumpWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(JumpWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon);
        cancelButton->setFlat(true);

        horizontalLayout->addWidget(cancelButton);

        label = new QLabel(JumpWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(JumpWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setMaximum(999999999);

        horizontalLayout->addWidget(spinBox);

        jumpButton = new QPushButton(JumpWidget);
        jumpButton->setObjectName(QStringLiteral("jumpButton"));
        jumpButton->setFlat(true);

        horizontalLayout->addWidget(jumpButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(JumpWidget);

        QMetaObject::connectSlotsByName(JumpWidget);
    } // setupUi

    void retranslateUi(QWidget *JumpWidget)
    {
        JumpWidget->setWindowTitle(QApplication::translate("JumpWidget", "Form", nullptr));
        cancelButton->setText(QString());
        label->setText(QApplication::translate("JumpWidget", "Jump to call:", nullptr));
        jumpButton->setText(QApplication::translate("JumpWidget", "Jump", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JumpWidget: public Ui_JumpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUMPWIDGET_H
