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
    
    
}

MainWindow::~MainWindow()
{
    delete ui;
}


