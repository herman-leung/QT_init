#include "mainwindow.h"

#include <QApplication>
// 文档： https://blog.csdn.net/arv002/article/details/133785137
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
