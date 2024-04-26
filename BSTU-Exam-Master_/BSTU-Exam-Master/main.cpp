#include "mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <QWidget>
#include <QApplication>
#include <QLocale>
#include "choise.h"
#include <QTranslator>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMaximumSize(800,800);
    QLocale::setDefault(QLocale("ru_RU"));
   // QApplication::(QLocale("ru_RU"));
    w.show();
    return a.exec();
}
