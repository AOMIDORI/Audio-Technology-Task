#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("background-color: white;");
    
    //Create a open file button
    open_file_btn = new QPushButton("Open a sound file", this);
    QIcon file_ico("./icons/folder.png");
    QIcon record_ico("./icons/mic.png");
    open_file_btn -> setIcon(file_ico);   open_file_btn -> setIconSize(QSize(40,40));
    open_file_btn -> setGeometry(QRect(QPoint(50,100),QSize(200,50)));
    open_file_btn -> setFlat(true);
    connect(open_file_btn, SIGNAL(clicked()), this, SLOT(openfile()));
    
    record_btn = new QPushButton("Record", this);
    record_btn -> setIcon(record_ico);    record_btn -> setIconSize(QSize(40,40));
    record_btn -> setFlat(true);
    record_btn -> setGeometry(QRect(QPoint(300,100),QSize(200,50)));
    connect(record_btn, SIGNAL(clicked()), this, SLOT(record()));
                     
    
    play_sine_btn = new QPushButton("Play a sine wave for 5s", this);
    play_sine_btn -> setGeometry(QRect(QPoint(50,200),QSize(200,50)));
    connect(play_sine_btn, SIGNAL(clicked()), this, SLOT(playsine()));

    
    
}

MainWindow::~MainWindow()
{
    delete ui;
}


