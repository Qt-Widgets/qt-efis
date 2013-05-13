/* 
 * File:   mainwindow.cpp
 * Author: tieme
 * 
 * Created on 12 May 2013, 12:46 PM
 */

#include "mainwindow.h"
#include "demowidget.h"

mainwindow::mainwindow() {
    setWindowTitle("EFIS");
    
    a = new attitudewidget();
    b = new headingwidget();
    c = new enginewidget();
    d = new altitudewidget();
    
    z = new demowidget();
    
    connect(z, SIGNAL(sendmeasurementssignal(double*)), a, SLOT(receivemeasurementsslot(double*)));
    connect(z, SIGNAL(sendmeasurementssignal(double*)), b, SLOT(receivemeasurementsslot(double*)));
    connect(z, SIGNAL(sendmeasurementssignal(double*)), c, SLOT(receivemeasurementsslot(double*)));
    connect(z, SIGNAL(sendmeasurementssignal(double*)), d, SLOT(receivemeasurementsslot(double*)));
    
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(a);
    layout->addWidget(b);
    layout->addWidget(c);
    layout->addWidget(d);
    layout->addWidget(z);
    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    setCentralWidget(widget);
}
