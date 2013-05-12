/* 
 * File:   mainwindow.h
 * Author: tieme
 *
 * Created on 12 May 2013, 12:46 PM
 */

#ifndef MAINWINDOW_H
#define	MAINWINDOW_H

#include <QtGui>

#include "attitudewidget.h"
#include "headingwidget.h"

class mainwindow : public QMainWindow {
    Q_OBJECT
public:
    mainwindow();
    attitudewidget *a;
    headingwidget *b;
private:

};

#endif	/* MAINWINDOW_H */
