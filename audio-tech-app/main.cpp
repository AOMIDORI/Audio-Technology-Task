#include "mainwindow.h"
#include <QApplication>
#include <portaudio.h>
#include <pa_mac_core.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    PaError err = Pa_Initialize();
    printf(  "PortAudio error: %s\n", Pa_GetErrorText( err ) );
    err = Pa_Terminate();
    if( err != paNoError )
        printf(  "PortAudio error: %s\n", Pa_GetErrorText( err ) );
    return 0;

    return a.exec();
}
