/* 
 * File:   mainwindow.cpp
 * Author: tieme
 * 
 * Created on 12 May 2013, 12:46 PM
 */

#include "mainwindow.h"

mainwindow::mainwindow() {
    a = new attitudewidget();
    b = new headingwidget();
    
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(a);
    layout->addWidget(b);
    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    setCentralWidget(widget);
}
