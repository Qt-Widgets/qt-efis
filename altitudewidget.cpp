/* 
 * File:   altitudewidget.cpp
 * Author: tieme
 * 
 * Created on 13 May 2013, 7:41 PM
 */

#include "altitudewidget.h"

altitudewidget::altitudewidget() : QWidget() {
    setFixedSize(100, 200);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatewindow()));
    timer->start(10);
    
    altitude = 0.0;
}

void altitudewidget::paintEvent(QPaintEvent*){
    QPainter *painter = new QPainter(this);
    painter->setWindow(-50, -100, 100, 200);
    
    QPen backgroundpen(Qt::black, 1, Qt::SolidLine);
    painter->setPen(backgroundpen);
    QBrush backgroundbrush(Qt::black);
    painter->setBrush(backgroundbrush);
    painter->drawRect(-50, -100, 100, 200);

    QPen pointerpen(Qt::white, 1, Qt::SolidLine);
    painter->setPen(pointerpen);
    QBrush pointerbrush(Qt::white);
    painter->setBrush(pointerbrush);
    QPoint arrow[3] = {QPoint(-35, 0), QPoint(-45, 5), QPoint(-45, -5)};
    painter->drawPolygon(arrow, 3);
    
    painter->translate(0, -20*altitude);
    
    QString value;
    for(int i = 0; i<=100; i++) {
        painter->drawLine(-20, 0, -10, 0);
        painter->drawText(0, -10, 25, 20, Qt::AlignRight, value.setNum(i));
        //painter->drawText(0, 0, value.setNum(i));
        painter->translate(0, 20);
    }
}

void altitudewidget::updatewindow(){
    update();
}

void altitudewidget::receivemeasurementsslot(double *measurementspointer) {
    setmeasurements(measurementspointer);
}

void altitudewidget::setmeasurements(double measurements[]) {
    altitude = measurements[4];
}

