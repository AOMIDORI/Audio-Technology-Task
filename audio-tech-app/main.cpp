#include "mainwindow.h"
#include "main.h"
#include <QApplication>
#include <QtWidgets>
#include <QObject>
#include <portaudio.h>
#include <iostream>
#include <sndfile.h>
//#include <pa_mac_core.h>  

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(600,400);
    w.setWindowTitle("Audio Technology App");
    w.show();
    
    PaError error;
    
    error= Pa_Initialize();
    if(error != paNoError){ //Alert initialize error message
        QMessageBox::information(&w, QObject::tr("Initialize problem"), Pa_GetErrorText(error));
    }
    
    /*QString info = "Portaudio initialize result: "; info.append(Pa_GetErrorText(err));
    QLabel *label = new QLabel(info, &w);
    label -> resize(400,100); label -> show();*/
    
    

    
    
    
    Pa_Terminate();
    return a.exec();
}
