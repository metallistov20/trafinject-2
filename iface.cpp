
#include "iface.h"
#include "ui_iface.h"

#include <QApplication>

#include "stdlib.h"
#include "stdio.h"

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

(DONE)./inject --open --target="$IP" --xml-data=cast.5428E.txt.xml>$TMP_NAME

(DONE)./inject --close --target="$IP" --xml-data=cast.5428E.txt.xml

    ./inject --upgrade --target="$IP" --id="$tID" --filename=$FILENAME --xml-data=cast.5428E.txt.xml

    ./inject --create --id="$tID" --target="$IP" --community="$SNMP_GRP"  --xml-data=cast.5428E.txt.xml


    ./inject --reboot --id="$tID" --target="$IP" --xml-data=cast.5428E.txt.xml

    ./inject --ACL --id="$tID" --target="$IP" --acl-data="$ACL_GRP" --xml-data=cast.5428E.txt.xml

    ./inject --ipassign --id="$tID" --target="$IP" --ip-addr="$4" --ip-mask="$5" --xml-data=cast.5428E.txt.xml

    ./inject --save --id="$tID" --target="$IP" --xml-data=cast.5428E.txt.xml



*/


/*
nmap -n -sP 192.168.0.0/24 | awk '/Nmap scan report/{printf $5;printf " ";getline;getline;print $3;}'
/opt/Qt5_5_0/Tools/QtCreator/bin/qtcreator &
*/

QString q_tID;
QString q_tIP;
QString q_tSNMP;
QString q_tACL;
QString q_tXML;
QString q_tMASK;

QString q_tPRG_PARM;

void iface::_get_tID()
{
/*
    while read line; do

     if [[ $line =~ $tID_STR ]]; then

         tID_complete_ENTRY=($(echo $line));

                tID_dirty_ENTRY=${tID_complete_ENTRY[3]}

         tID_exact_ENTRY=${tID_dirty_ENTRY#"'"}

         tID=${tID_exact_ENTRY%%??}

         echo "$tID" && break
     fi

    done < ./$TMP_NAME

    rm -f ./$TMP_NAME
*/

    // search by string-templete given
    QStringList list2 = c.data.split("var g_tid = ", QString::SkipEmptyParts);

    // only uin case array's second element is non empty
    if (list2.size() > 0)
    {
        // Skip all by '012345678ABCDEF'
        list2[1].resize(18);

        // remove \' on begin and end
        (list2[1]).remove(  QChar('\''), Qt::CaseInsensitive  );

        // clear, since can be not empty
        q_tID.clear();

        // put 012345678ABCDEF inside
        q_tID.append(list2[1] );

        // draw it in GUI, so we can see it
        ui->statusBar->showMessage(  q_tID  );
    }
////////////////////////////////// garbage code for testiong only. remove when done
    q_tIP.clear();
    q_tIP.append("192.168.0.148");

    q_tSNMP.clear();
    q_tSNMP.append("SNMP_GRP6");

    q_tACL.clear();
    q_tACL.append("ACL_GRP");

    q_tXML.clear();
    q_tXML.append("../trafinject-1/cast.5428E.txt.xml");

    q_tMASK.clear();
    q_tMASK.append("255.255.255.0");
}

void iface::handle_pushButton()
{
    ui->statusBar->showMessage("Running cmd <iOpenSite>");

#if (1)
        c.init("../trafinject-1/inject --open --target=\"192.168.0.148\" --xml-data=../trafinject-1/cast.5428E.txt.xml");

        ui->textBrowser->append(QString(c.data));

        ui->statusBar->showMessage("Finished cmd <iOpenSite>");

        // fulfill the <q_tID>
        _get_tID();

        // deply fulfilled
        c.init(q_tPRG_PARM);
#else
    q_tPRG_PARM.clear();
    q_tPRG_PARM.append("../trafinject-1/inject --open --target=\"");
    q_tPRG_PARM.append(q_tIP);
    q_tPRG_PARM.append("\" --xml-data=");
    q_tPRG_PARM.append(q_tXML);

    // will be erased by more useful <dbg> data
    ui->statusBar->showMessage("Finished cmd <iOpenSite>");

    c.init(q_tPRG_PARM);
#endif /* (0) */

}


void iface::handle_pushButton_2()
{

    ui->statusBar->showMessage("Running cmd <iCloseSite>");

    //c.init("../trafinject-1/inject --close --target=\"192.168.0.148\" --xml-data=../trafinject-1/cast.5428E.txt.xml");
    c.init(q_tPRG_PARM);

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
//    ./inject --ipassign --id="$tID" --target="$IP" --ip-addr="$4" --ip-mask="$5" --xml-data=cast.5428E.txt.xml
// ui->statusBar->showMessage("Running cmd <iAssignIp>");

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
