#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <QWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //setting the ui pointer
     ui->setupUi(this);
    //for univercity logo
    QPixmap pixmap(":/logo/source/logo.png");
    int width = ui->logo->width();
    int height = ui->logo->height();
    ui->logo->setPixmap(pixmap.scaled(width,height,Qt::KeepAspectRatio));
    //end of code for logo

    //this->setStyleSheet("background-color:#7536ff");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Leave_main_window_clicked()
{
    choise = new Choise(this);
    choise->show();

}

