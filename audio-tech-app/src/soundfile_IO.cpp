//
//  soundfile_IO.cpp
//  audio-tech-app
//
//  Input and Output of a soundfile via Qt
//
//  Openfile():    return a SNDFILE *
//
#include "main.h"
#include "mainwindow.h"
#include <QtWidgets>
#include <iostream>
#include <portaudio.h>
#include <sndfile.h>


void *MainWindow::openfile(){
    CallbackData *data;

    QString qfilename = QFileDialog::getOpenFileName(this,
                                                    tr("Open file"),
                                                    QDir::currentPath(),
                                                    "Sound files (*.wav)");
    const char *filename = qfilename.toStdString().c_str();
    if(filename && filename[0]){
        /*data->file = sf_open(filename, SFM_READ, &data->info);
        if (sf_error(data->file)!=SF_ERR_NO_ERROR){
            QMessageBox::information(this, tr("Error"), tr("sf_open failed"));
        }*/
        QMessageBox::information(this, tr("TO DO"), tr("haven't done yet"));
    }
}
