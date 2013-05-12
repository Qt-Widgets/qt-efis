/*
 * File:   main.cpp
 * Author: tieme
 *
 * Created on 12 May 2013, 10:48 AM
 */

#include <QtGui>

#include "attitudewidget.h"
#include "headingwidget.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    attitudewidget *a = new attitudewidget();
    a->show();
    headingwidget *b = new headingwidget();
    b->show();

    return app.exec();
}
