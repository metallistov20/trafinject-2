
#include "iface.h"
#include "ui_iface.h"

#include <QApplication>


#define _SCH 0


iface::iface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::iface)
{
    ui->setupUi(this);

     connect(ui->pushButton, SIGNAL (released()), this, SLOT (handle_pushButton()));

     connect(ui->pushButton_2, SIGNAL (released()), this, SLOT (handle_pushButton_2()));

     connect(ui->pushButton_3, SIGNAL (released()), this, SLOT (handle_pushButton_3()));

     connect(ui->pushButton_4, SIGNAL (released()), this, SLOT (handle_pushButton_4()));

     connect(ui->pushButton_5, SIGNAL (released()), this, SLOT (handle_pushButton_5()));

     connect(ui->pushButton_6, SIGNAL (released()), this, SLOT (handle_pushButton_6()));

     connect(ui->pushButton_7, SIGNAL (released()), this, SLOT (handle_pushButton_7()));

     connect(ui->pushButton_8, SIGNAL (released()), this, SLOT (handle_pushButton_8()));

     connect(ui->pushButton_8, SIGNAL (released()), this, SLOT (handle_pushButtonExit()));

}

Controller c;



/*

    ./inject --open --target="$IP" --xml-data=cast.5428E.txt.xml>$TMP_NAME

    ./inject --close --target="$IP" --xml-data=cast.5428E.txt.xml

    ./inject --upgrade --target="$IP" --id="$tID" --filename=$FILENAME --xml-data=cast.5428E.txt.xml

    ./inject --create --id="$tID" --target="$IP" --community="$SNMP_GRP"  --xml-data=cast.5428E.txt.xml


    ./inject --reboot --id="$tID" --target="$IP" --xml-data=cast.5428E.txt.xml

    ./inject --ACL --id="$tID" --target="$IP" --acl-data="$ACL_GRP" --xml-data=cast.5428E.txt.xml

    ./inject --ipassign --id="$tID" --target="$IP" --ip-addr="$4" --ip-mask="$5" --xml-data=cast.5428E.txt.xml

    ./inject --save --id="$tID" --target="$IP" --xml-data=cast.5428E.txt.xml



*/



void iface::handle_pushButton()
{

    ui->statusBar->showMessage("Running cmd <iOpenSite>");

    c.init("../trafinject-1/inject --open --target=\"192.168.0.1\" --xml-data=../trafinject-1/cast.5428E.txt.xml");

    ui->textBrowser->append(QString(c.data));

    ui->statusBar->showMessage("Finished cmd <iOpenSite>");
}


void iface::handle_pushButton_2()
{

    ui->statusBar->showMessage("Running cmd <iCloseSite>");

    c.init("../trafinject-1/inject --close --target=\"192.168.0.1\" --xml-data=../trafinject-1/cast.5428E.txt.xml");

    ui->textBrowser->append(QString(c.data));

    ui->statusBar->showMessage("Finished cmd <iCloseSite>");

}

void iface::handle_pushButton_3()
{

 ui->statusBar->showMessage("Running cmd <iCreateSnmp>");

// VERBOSE_STATUS(iCreateSnmp);

}

void iface::handle_pushButton_4()
{

 ui->statusBar->showMessage("Running cmd <iAssignIp>");

// VERBOSE_STATUS(iAssignIp);

}

void iface::handle_pushButton_5()
{

 ui->statusBar->showMessage("Running cmd <iUpgradeFirmware>");

// VERBOSE_STATUS(iUpgradeFirmware);

}

void iface::handle_pushButton_6()
{

 ui->statusBar->showMessage("Running cmd <iAclGroup>");

// VERBOSE_STATUS(iAclGroup);

}

void iface::handle_pushButton_7()
{

 ui->statusBar->showMessage("Running cmd <iSaveSite>");

// VERBOSE_STATUS(iSaveSite);

}

void iface::handle_pushButton_8()
{

 //ui->pushButton_8->setText("Running cmd <iRebootSwitch>");
 //ui->statusBar->showMessage("Running cmd <iRebootSwitch>");


// VERBOSE_STATUS(iRebootSwitch);

}

void iface::handle_pushButtonExit()
{


 //exit(0);
 this->close();


}


iface::~iface()
{
    delete ui;
}
