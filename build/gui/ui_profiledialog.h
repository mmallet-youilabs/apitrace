/********************************************************************************
** Form generated from reading UI file 'profiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEDIALOG_H
#define UI_PROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "calldurationgraph.h"
#include "graphing/graphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ProfileDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    GraphWidget *m_timeline;
    QVBoxLayout *verticalLayout;
    QWidget *graphContainer;
    QVBoxLayout *verticalLayout_3;
    CallDurationGraph *m_gpuGraph;
    CallDurationGraph *m_cpuGraph;
    QTableView *m_table;

    void setupUi(QDialog *ProfileDialog)
    {
        if (ProfileDialog->objectName().isEmpty())
            ProfileDialog->setObjectName(QStringLiteral("ProfileDialog"));
        ProfileDialog->setWindowModality(Qt::NonModal);
        ProfileDialog->resize(1105, 804);
        ProfileDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(ProfileDialog);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(ProfileDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        m_timeline = new GraphWidget(splitter);
        m_timeline->setObjectName(QStringLiteral("m_timeline"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(m_timeline->sizePolicy().hasHeightForWidth());
        m_timeline->setSizePolicy(sizePolicy);
        m_timeline->setFocusPolicy(Qt::WheelFocus);
        verticalLayout = new QVBoxLayout(m_timeline);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter->addWidget(m_timeline);
        graphContainer = new QWidget(splitter);
        graphContainer->setObjectName(QStringLiteral("graphContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphContainer->sizePolicy().hasHeightForWidth());
        graphContainer->setSizePolicy(sizePolicy1);
        graphContainer->setMinimumSize(QSize(0, 200));
        verticalLayout_3 = new QVBoxLayout(graphContainer);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_gpuGraph = new CallDurationGraph(graphContainer);
        m_gpuGraph->setObjectName(QStringLiteral("m_gpuGraph"));
        sizePolicy1.setHeightForWidth(m_gpuGraph->sizePolicy().hasHeightForWidth());
        m_gpuGraph->setSizePolicy(sizePolicy1);
        m_gpuGraph->setMinimumSize(QSize(0, 0));
        m_gpuGraph->setFocusPolicy(Qt::WheelFocus);

        verticalLayout_3->addWidget(m_gpuGraph);

        m_cpuGraph = new CallDurationGraph(graphContainer);
        m_cpuGraph->setObjectName(QStringLiteral("m_cpuGraph"));
        sizePolicy1.setHeightForWidth(m_cpuGraph->sizePolicy().hasHeightForWidth());
        m_cpuGraph->setSizePolicy(sizePolicy1);
        m_cpuGraph->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(m_cpuGraph);

        splitter->addWidget(graphContainer);
        m_table = new QTableView(splitter);
        m_table->setObjectName(QStringLiteral("m_table"));
        sizePolicy1.setHeightForWidth(m_table->sizePolicy().hasHeightForWidth());
        m_table->setSizePolicy(sizePolicy1);
        m_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_table->setSelectionMode(QAbstractItemView::SingleSelection);
        m_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        m_table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_table->setSortingEnabled(true);
        m_table->setWordWrap(false);
        splitter->addWidget(m_table);
        m_table->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(ProfileDialog);
        QObject::connect(m_table, SIGNAL(doubleClicked(QModelIndex)), ProfileDialog, SLOT(tableDoubleClicked(QModelIndex)));

        QMetaObject::connectSlotsByName(ProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileDialog)
    {
        ProfileDialog->setWindowTitle(QApplication::translate("ProfileDialog", "Profile Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileDialog: public Ui_ProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEDIALOG_H
