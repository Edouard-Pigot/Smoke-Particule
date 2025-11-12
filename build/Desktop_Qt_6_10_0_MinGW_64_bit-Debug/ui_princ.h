/********************************************************************************
** Form generated from reading UI file 'princ.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINC_H
#define UI_PRINC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glarea.h"

QT_BEGIN_NAMESPACE

class Ui_Princ
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *TI;
    QDoubleSpinBox *TTL;
    QPushButton *colorButton;
    GLArea *glarea;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Princ)
    {
        if (Princ->objectName().isEmpty())
            Princ->setObjectName("Princ");
        Princ->resize(800, 600);
        centralWidget = new QWidget(Princ);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        label = new QLabel(centralWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        TI = new QDoubleSpinBox(centralWidget);
        TI->setObjectName("TI");

        horizontalLayout_2->addWidget(TI);

        TTL = new QDoubleSpinBox(centralWidget);
        TTL->setObjectName("TTL");

        horizontalLayout_2->addWidget(TTL);

        colorButton = new QPushButton(centralWidget);
        colorButton->setObjectName("colorButton");

        horizontalLayout_2->addWidget(colorButton);


        verticalLayout->addLayout(horizontalLayout_2);

        glarea = new GLArea(centralWidget);
        glarea->setObjectName("glarea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glarea->sizePolicy().hasHeightForWidth());
        glarea->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(glarea);


        verticalLayout_2->addLayout(verticalLayout);

        Princ->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Princ);
        statusBar->setObjectName("statusBar");
        Princ->setStatusBar(statusBar);
        menuBar = new QMenuBar(Princ);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        Princ->setMenuBar(menuBar);

        retranslateUi(Princ);

        QMetaObject::connectSlotsByName(Princ);
    } // setupUi

    void retranslateUi(QMainWindow *Princ)
    {
        Princ->setWindowTitle(QCoreApplication::translate("Princ", "Smoke-Particule", nullptr));
        label_5->setText(QCoreApplication::translate("Princ", "Time interval", nullptr));
        label_4->setText(QCoreApplication::translate("Princ", "Time to live", nullptr));
        label->setText(QCoreApplication::translate("Princ", "Color", nullptr));
        colorButton->setText(QCoreApplication::translate("Princ", "Edit color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Princ: public Ui_Princ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINC_H
