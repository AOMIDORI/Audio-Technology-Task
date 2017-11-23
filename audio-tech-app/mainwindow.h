#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <sndfile.h>
#include <portaudio.h>
#include <main.h>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void *openfile();
    void *playsine();
    void *record();
    
private:
    Ui::MainWindow *ui;
    QPushButton *open_file_btn;
    QPushButton *play_sine_btn;
    QPushButton *record_btn;

};

#endif // MAINWINDOW_H
