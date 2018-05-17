/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *xSpinBox;
    QLabel *label_3;
    QSpinBox *ySpinBox;
    QLabel *pixelLabel;
    QLabel *rectLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lowerLabel;
    QDoubleSpinBox *lowerSpinBox;
    QLabel *upperLabel;
    QDoubleSpinBox *upperSpinBox;
    QCheckBox *flipCheckBox;
    QCheckBox *opaqueCheckBox;
    QCheckBox *alphaCheckBox;
    QCheckBox *resolveMSAACheckBox;
    QLabel *label;
    QSpinBox *zoomSpinBox;

    void setupUi(QDialog *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QStringLiteral("ImageViewer"));
        ImageViewer->resize(825, 629);
        verticalLayout = new QVBoxLayout(ImageViewer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(ImageViewer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 811, 561));
        scrollAreaWidgetContents->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ImageViewer);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        xSpinBox = new QSpinBox(ImageViewer);
        xSpinBox->setObjectName(QStringLiteral("xSpinBox"));
        xSpinBox->setFrame(false);
        xSpinBox->setReadOnly(true);
        xSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        xSpinBox->setKeyboardTracking(false);
        xSpinBox->setMaximum(16000);

        horizontalLayout_2->addWidget(xSpinBox);

        label_3 = new QLabel(ImageViewer);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ySpinBox = new QSpinBox(ImageViewer);
        ySpinBox->setObjectName(QStringLiteral("ySpinBox"));
        ySpinBox->setFrame(false);
        ySpinBox->setReadOnly(true);
        ySpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ySpinBox->setKeyboardTracking(false);
        ySpinBox->setMaximum(16000);

        horizontalLayout_2->addWidget(ySpinBox);

        pixelLabel = new QLabel(ImageViewer);
        pixelLabel->setObjectName(QStringLiteral("pixelLabel"));

        horizontalLayout_2->addWidget(pixelLabel);

        rectLabel = new QLabel(ImageViewer);
        rectLabel->setObjectName(QStringLiteral("rectLabel"));

        horizontalLayout_2->addWidget(rectLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lowerLabel = new QLabel(ImageViewer);
        lowerLabel->setObjectName(QStringLiteral("lowerLabel"));

        horizontalLayout->addWidget(lowerLabel);

        lowerSpinBox = new QDoubleSpinBox(ImageViewer);
        lowerSpinBox->setObjectName(QStringLiteral("lowerSpinBox"));
        lowerSpinBox->setDecimals(3);
        lowerSpinBox->setMinimum(-999.999);
        lowerSpinBox->setMaximum(999.999);
        lowerSpinBox->setSingleStep(0.05);

        horizontalLayout->addWidget(lowerSpinBox);

        upperLabel = new QLabel(ImageViewer);
        upperLabel->setObjectName(QStringLiteral("upperLabel"));

        horizontalLayout->addWidget(upperLabel);

        upperSpinBox = new QDoubleSpinBox(ImageViewer);
        upperSpinBox->setObjectName(QStringLiteral("upperSpinBox"));
        upperSpinBox->setDecimals(3);
        upperSpinBox->setMinimum(-999.999);
        upperSpinBox->setMaximum(999.999);
        upperSpinBox->setSingleStep(0.05);
        upperSpinBox->setValue(1);

        horizontalLayout->addWidget(upperSpinBox);

        flipCheckBox = new QCheckBox(ImageViewer);
        flipCheckBox->setObjectName(QStringLiteral("flipCheckBox"));

        horizontalLayout->addWidget(flipCheckBox);

        opaqueCheckBox = new QCheckBox(ImageViewer);
        opaqueCheckBox->setObjectName(QStringLiteral("opaqueCheckBox"));

        horizontalLayout->addWidget(opaqueCheckBox);

        alphaCheckBox = new QCheckBox(ImageViewer);
        alphaCheckBox->setObjectName(QStringLiteral("alphaCheckBox"));

        horizontalLayout->addWidget(alphaCheckBox);

        resolveMSAACheckBox = new QCheckBox(ImageViewer);
        resolveMSAACheckBox->setObjectName(QStringLiteral("resolveMSAACheckBox"));

        horizontalLayout->addWidget(resolveMSAACheckBox);

        label = new QLabel(ImageViewer);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        zoomSpinBox = new QSpinBox(ImageViewer);
        zoomSpinBox->setObjectName(QStringLiteral("zoomSpinBox"));
        zoomSpinBox->setMinimum(1);
        zoomSpinBox->setMaximum(15);
        zoomSpinBox->setSingleStep(1);
        zoomSpinBox->setValue(1);

        horizontalLayout->addWidget(zoomSpinBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(xSpinBox);
        label_3->setBuddy(xSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QDialog *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ApiTrace Surface Viewer", nullptr));
        label_2->setText(QApplication::translate("ImageViewer", "X:", nullptr));
        label_3->setText(QApplication::translate("ImageViewer", "Y:", nullptr));
        pixelLabel->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        rectLabel->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        lowerLabel->setText(QApplication::translate("ImageViewer", "Lower", nullptr));
        upperLabel->setText(QApplication::translate("ImageViewer", "Upper", nullptr));
        flipCheckBox->setText(QApplication::translate("ImageViewer", "Flip", nullptr));
        opaqueCheckBox->setText(QApplication::translate("ImageViewer", "Opaque", nullptr));
        alphaCheckBox->setText(QApplication::translate("ImageViewer", "Alpha", nullptr));
        resolveMSAACheckBox->setText(QApplication::translate("ImageViewer", "resolveMSAA", nullptr));
        label->setText(QApplication::translate("ImageViewer", "Zoom:", nullptr));
        zoomSpinBox->setSpecialValueText(QString());
        zoomSpinBox->setSuffix(QApplication::translate("ImageViewer", "x", nullptr));
        zoomSpinBox->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
