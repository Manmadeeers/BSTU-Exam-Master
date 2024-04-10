#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

