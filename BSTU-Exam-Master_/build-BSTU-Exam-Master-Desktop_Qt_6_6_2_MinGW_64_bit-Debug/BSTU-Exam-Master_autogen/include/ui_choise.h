/********************************************************************************
** Form generated from reading UI file 'choise.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOISE_H
#define UI_CHOISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choise
{
public:
    QWidget *centralwidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Choise)
    {
        if (Choise->objectName().isEmpty())
            Choise->setObjectName("Choise");
        Choise->resize(800, 600);
        centralwidget = new QWidget(Choise);
        centralwidget->setObjectName("centralwidget");
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(260, 220, 313, 42));
        QFont font;
        font.setPointSize(16);
        radioButton->setFont(font);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(260, 290, 299, 42));
        radioButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 592, 49));
        QFont font1;
        font1.setPointSize(22);
        label->setFont(font1);
        Choise->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Choise);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Choise->setMenuBar(menubar);
        statusbar = new QStatusBar(Choise);
        statusbar->setObjectName("statusbar");
        Choise->setStatusBar(statusbar);

        retranslateUi(Choise);

        QMetaObject::connectSlotsByName(Choise);
    } // setupUi

    void retranslateUi(QMainWindow *Choise)
    {
        Choise->setWindowTitle(QCoreApplication::translate("Choise", "MainWindow", nullptr));
        radioButton->setText(QCoreApplication::translate("Choise", "\320\237\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\272\320\260 \320\272 \321\215\320\272\320\267\320\260\320\274\320\265\320\275\321\203", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Choise", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\267\320\275\320\260\320\275\320\270\320\271", nullptr));
        label->setText(QCoreApplication::translate("Choise", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\260\321\200\320\270\320\260\320\275\321\202 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choise: public Ui_Choise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOISE_H
