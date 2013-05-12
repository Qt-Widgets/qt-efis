/*
 * File:   main.cpp
 * Author: tieme
 *
 * Created on 12 May 2013, 10:48 AM
 */

#include <QtGui>

#include "mainwindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    mainwindow *a = new mainwindow();
    a->show();

    return app.exec();
}
