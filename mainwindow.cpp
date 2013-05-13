/* 
 * File:   mainwindow.cpp
 * Author: tieme
 * 
 * Created on 12 May 2013, 12:46 PM
 */

#include "mainwindow.h"

mainwindow::mainwindow() {
    setWindowTitle("EFIS");
    
    a = new attitudewidget();
    b = new headingwidget();
    c = new enginewidget();
    
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(a);
    layout->addWidget(b);
    layout->addWidget(c);
    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    setCentralWidget(widget);
}
