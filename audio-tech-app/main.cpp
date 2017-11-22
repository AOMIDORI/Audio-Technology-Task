#include "mainwindow.h"
//#include "main.h"
#include <QApplication>
#include <QLabel>
#include <QString>
#include <QtWidgets>
#include <portaudio.h>
#include <iostream>
//#include <sndfile.h>
//#include <pa_mac_core.h>  

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(600,400);
    w.setWindowTitle("Audio Technology App");
    w.show();
    
    PaError err = Pa_Initialize();
    QString info = "Pa initialize result: ";
    info.append(Pa_GetErrorText(err));
    QLabel *label = new QLabel(info, &w);
    label -> resize(400,100);
    label -> show();
    printf(  "PortAudio initialize result: %s\n", Pa_GetErrorText( err ) );
    
    /*QPushButton *btn = new QPushButton(QApplication::translate("childwidget", "Open a soundfile"), &w);
    
    
    btn->move(100, 100);
    btn->resize(200,50);
    btn->show();*/
    
    
    
    Pa_Terminate();
    return a.exec();
}
