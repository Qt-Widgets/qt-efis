/* 
 * File:   demowidget.cpp
 * Author: tieme
 * 
 * Created on 13 May 2013, 6:56 PM
 */

#include "demowidget.h"

demowidget::demowidget() : QWidget() {
    pitchlabel = new QLabel("Pitch:");
    pitchslider = new QSlider();
    pitchslider->setRange(-60, 60);
    rolllabel = new QLabel("Roll:");
    rollslider = new QSlider();
    rollslider->setRange(-60, 60);
    yawlabel = new QLabel("Yaw:");
    yawslider = new QSlider();
    yawslider->setRange(-180, 180);
    throttlelabel = new QLabel("Throttle:");
    throttleslider = new QSlider();
    throttleslider->setRange(0, 100);
    resetbutton = new QPushButton("RESET");
    
    QHBoxLayout *layout = new QHBoxLayout();
    //layout->addWidget(pitchlabel);
    layout->addWidget(pitchslider);
    //layout->addWidget(rolllabel);
    layout->addWidget(rollslider);
    //layout->addWidget(yawlabel);
    layout->addWidget(yawslider);
    //layout->addWidget(throttlelabel);
    layout->addWidget(throttleslider);
    //layout->addWidget(resetbutton);
    setLayout(layout);
    
    //connect(resetbutton, SIGNAL(clicked()), this, SLOT(resetmeasurements()));
    
    connect(pitchslider, SIGNAL(valueChanged(int)), this, SLOT(sendmeasurementsslot()));
    connect(rollslider, SIGNAL(valueChanged(int)), this, SLOT(sendmeasurementsslot()));
    connect(yawslider, SIGNAL(valueChanged(int)), this, SLOT(sendmeasurementsslot()));
    connect(throttleslider, SIGNAL(valueChanged(int)), this, SLOT(sendmeasurementsslot()));
}

void demowidget::resetmeasurements() {
    pitchslider->setValue(0);
    rollslider->setValue(0);
    yawslider->setValue(0);
    throttleslider->setValue(0);
}

void demowidget::sendmeasurementsslot() {
    double measurements[4];
    measurements[0] = pitchslider->value();
    measurements[1] = rollslider->value();
    measurements[2] = yawslider->value();
    measurements[3] = throttleslider->value();
    double *measurementspointer = measurements;
    emit sendmeasurementssignal(measurementspointer);
}

