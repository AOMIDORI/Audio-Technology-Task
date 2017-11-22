#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Create a open file button
    open_file_btn = new QPushButton("Open a sound file", this);
    open_file_btn -> setGeometry(QRect(QPoint(50,100),QSize(200,50)));
    connect(open_file_btn, SIGNAL(clicked()), this, SLOT(openfile()));
    
    play_sine_btn = new QPushButton("Play a sine wave for 5s", this);
    play_sine_btn -> setGeometry(QRect(QPoint(50,200),QSize(200,50)));
    connect(play_sine_btn, SIGNAL(clicked()), this, SLOT(playsine()));

    
    
}

MainWindow::~MainWindow()
{
    delete ui;
}


