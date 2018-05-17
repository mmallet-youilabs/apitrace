/********************************************************************************
** Form generated from reading UI file 'shaderssourcewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERSSOURCEWIDGET_H
#define UI_SHADERSSOURCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShadersSourceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *shadersLabel;
    QComboBox *shadersCB;

    void setupUi(QWidget *ShadersSourceWidget)
    {
        if (ShadersSourceWidget->objectName().isEmpty())
            ShadersSourceWidget->setObjectName(QStringLiteral("ShadersSourceWidget"));
        ShadersSourceWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ShadersSourceWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        shadersLabel = new QLabel(ShadersSourceWidget);
        shadersLabel->setObjectName(QStringLiteral("shadersLabel"));

        horizontalLayout->addWidget(shadersLabel);

        shadersCB = new QComboBox(ShadersSourceWidget);
        shadersCB->setObjectName(QStringLiteral("shadersCB"));

        horizontalLayout->addWidget(shadersCB);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShadersSourceWidget);

        QMetaObject::connectSlotsByName(ShadersSourceWidget);
    } // setupUi

    void retranslateUi(QWidget *ShadersSourceWidget)
    {
        ShadersSourceWidget->setWindowTitle(QApplication::translate("ShadersSourceWidget", "Form", nullptr));
        shadersLabel->setText(QApplication::translate("ShadersSourceWidget", "Select a shader:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShadersSourceWidget: public Ui_ShadersSourceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERSSOURCEWIDGET_H
