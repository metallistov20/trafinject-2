#ifndef IFACE_H
#define IFACE_H

#include <QMainWindow>

#include <QProcess>
#include <QObject>
#include <iostream>


namespace Ui {
class iface;
}

class Controller : public QObject
{
    Q_OBJECT
private:
    QProcess * process;

public:
    Controller(QObject *parent = 0) : QObject(parent), process(new QProcess) {}
    QString data;


    void init(const QString &program) {

        connect(process,SIGNAL(readyRead()),this,SLOT(readStdOut()));
        connect(process,SIGNAL(started()),this,SLOT(onStarted()));
        connect(process,SIGNAL(finished(int)),this,SLOT(onFinished(int)));

        // collect STDOUT into clean buffer
        //.data.clear();

        process->start(program);

    }



private slots:
    void readStdOut()
    {
        //std::cout << "[COUT_]" << QString(process->readAllStandardOutput()).toUtf8().constData() << std::endl;
        //.data.append( QByteArray("[COUskyT_]").constData() );
        data.append( process->readAllStandardOutput()).toUtf8().constData();
    }

    void onStarted()
    {
        //std::cout << "Process started" << std::endl;
    }

    void onFinished(int)
    {
        //std::cout << "Process finished: "/* << signal */<< std::endl;
    }


};

class iface : public QMainWindow
{
    Q_OBJECT

public:
    explicit iface(QWidget *parent = 0);
    ~iface();

//private:
public:
    Ui::iface *ui;    

private:
    void _get_tID();
    void _do_default_data();
    void _get_real_data();

private slots:
    void handle_pushButton();
    void handle_pushButton_2();
    void handle_pushButton_3();
    void handle_pushButton_4();
    void handle_pushButton_5();
    void handle_pushButton_6();
    void handle_pushButton_7();
    void handle_pushButton_8();
    void handle_pushButton_9();
    void handle_pushButton_10();
    void handle_pushButton_11();
    void handle_pushButton_12();
    void handle_pushButton_13();

    void handle_pushButtonExit();    
    void handle_pushButtonClear();


};

#endif // IFACE_H
