/********************************************************************************
** Form generated from reading UI file 'iface.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IFACE_H
#define UI_IFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iface
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButtonExit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *iface)
    {
        if (iface->objectName().isEmpty())
            iface->setObjectName(QStringLiteral("iface"));
        iface->resize(850, 606);
        centralWidget = new QWidget(iface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 471, 541));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 0, 341, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 40, 341, 27));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 80, 341, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 120, 341, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(500, 160, 341, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 200, 341, 23));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(500, 240, 341, 23));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(500, 280, 341, 23));
        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(760, 520, 80, 23));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(500, 320, 341, 23));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(500, 360, 341, 23));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(500, 400, 341, 23));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(500, 440, 341, 23));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(500, 480, 341, 23));
        iface->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(iface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 20));
        iface->setMenuBar(menuBar);
        mainToolBar = new QToolBar(iface);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        iface->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(iface);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        iface->setStatusBar(statusBar);

        retranslateUi(iface);

        QMetaObject::connectSlotsByName(iface);
    } // setupUi

    void retranslateUi(QMainWindow *iface)
    {
        iface->setWindowTitle(QApplication::translate("iface", "iface", 0));
        pushButton->setText(QApplication::translate("iface", "Open Site", 0));
        pushButton_2->setText(QApplication::translate("iface", "Close Site", 0));
        pushButton_3->setText(QApplication::translate("iface", "Create SNMP group", 0));
        pushButton_4->setText(QApplication::translate("iface", "Assign IP v4", 0));
        pushButton_5->setText(QApplication::translate("iface", "Upgrade Firmware", 0));
        pushButton_6->setText(QApplication::translate("iface", "Create ACL", 0));
        pushButton_7->setText(QApplication::translate("iface", "Save Changes", 0));
        pushButton_8->setText(QApplication::translate("iface", "Reboot Remote Hardware", 0));
        pushButtonExit->setText(QApplication::translate("iface", "E&xit", 0));
        pushButton_9->setText(QApplication::translate("iface", "Aux BTN #1", 0));
        pushButton_10->setText(QApplication::translate("iface", "Aux BTN #2", 0));
        pushButton_11->setText(QApplication::translate("iface", "Aux BTN #3", 0));
        pushButton_12->setText(QApplication::translate("iface", "Aux BTN #4", 0));
        pushButton_13->setText(QApplication::translate("iface", "Aux BTN #5", 0));
    } // retranslateUi

};

namespace Ui {
    class iface: public Ui_iface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IFACE_H