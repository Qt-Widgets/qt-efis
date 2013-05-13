/* 
 * File:   headingwidget.cpp
 * Author: tieme
 * 
 * Created on 12 May 2013, 11:02 AM
 */

#include "headingwidget.h"

headingwidget::headingwidget() : QWidget() {
    setFixedSize(200, 200);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatewindow()));
    timer->start(10);
    
    yaw = 0.0;
}

void headingwidget::paintEvent(QPaintEvent*){
    QPainter *painter = new QPainter(this);
    painter->setWindow(-100, -100, 200, 200);
    
    QPen backgroundpen(Qt::black, 1, Qt::SolidLine);
    painter->setPen(backgroundpen);
    QBrush backgroundbrush(Qt::black);
    painter->setBrush(backgroundbrush);
    painter->drawRect(-100, -100, 200, 200);
    
    QPen headingpen(Qt::white, 1, Qt::SolidLine);
    painter->setPen(headingpen);
    QBrush headingbrush(Qt::white);
    painter->setBrush(headingbrush);
    painter->drawLine(0, -50, 0, 50);
    QPoint arrow[3] = {QPoint(0, -50), QPoint(-5, -40), QPoint(5, -40)};
    painter->drawPolygon(arrow, 3);
    painter->rotate(yaw);
    QString value;
    for (int i=0; i<36; i+=3) {
        painter->drawLine(0, -60, 0, -65);
        if (i==0) painter->drawText(-10, -90, 20, 20, Qt::AlignCenter, "N");
        else if (i==9) painter->drawText(-10, -90, 20, 20, Qt::AlignCenter, "E");
        else if (i==18) painter->drawText(-10, -90, 20, 20, Qt::AlignCenter, "S");
        else if (i==27) painter->drawText(-10, -90, 20, 20, Qt::AlignCenter, "W");
        else painter->drawText(-10, -90, 20, 20, Qt::AlignCenter, value.setNum(i));
        //else painter->drawText(0, -70, value.setNum(i));
        painter->rotate(10);
        painter->drawLine(0, -63, 0, -65);
        painter->rotate(10);
        painter->drawLine(0, -63, 0, -65);
        painter->rotate(10);
    }    
}

void headingwidget::updatewindow(){
    update();
}

void headingwidget::receivemeasurementsslot(double *measurementspointer) {
    setmeasurements(measurementspointer);
}

void headingwidget::setmeasurements(double measurements[]) {
    yaw = measurements[2];
}

