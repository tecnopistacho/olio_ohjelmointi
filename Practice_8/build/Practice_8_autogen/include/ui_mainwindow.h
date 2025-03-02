/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar_1;
    QProgressBar *progressBar_2;
    QPushButton *switchButton_1;
    QPushButton *switchButton_2;
    QPushButton *timeButton_120;
    QPushButton *timeButton_5min;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(524, 437);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar_1 = new QProgressBar(centralwidget);
        progressBar_1->setObjectName("progressBar_1");
        progressBar_1->setGeometry(QRect(30, 20, 118, 23));
        progressBar_1->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(380, 20, 118, 23));
        progressBar_2->setValue(24);
        switchButton_1 = new QPushButton(centralwidget);
        switchButton_1->setObjectName("switchButton_1");
        switchButton_1->setGeometry(QRect(40, 51, 100, 51));
        switchButton_2 = new QPushButton(centralwidget);
        switchButton_2->setObjectName("switchButton_2");
        switchButton_2->setGeometry(QRect(389, 51, 101, 51));
        timeButton_120 = new QPushButton(centralwidget);
        timeButton_120->setObjectName("timeButton_120");
        timeButton_120->setGeometry(QRect(90, 170, 100, 32));
        timeButton_5min = new QPushButton(centralwidget);
        timeButton_5min->setObjectName("timeButton_5min");
        timeButton_5min->setGeometry(QRect(270, 170, 100, 32));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(100, 250, 81, 51));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(280, 250, 81, 51));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 110, 161, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 524, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switchButton_1->setText(QCoreApplication::translate("MainWindow", "Player 1", nullptr));
        switchButton_2->setText(QCoreApplication::translate("MainWindow", "Player 2", nullptr));
        timeButton_120->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        timeButton_5min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Game ongoing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
