/* 
 * File:   attitudewidget.cpp
 * Author: tieme
 * 
 * Created on 12 May 2013, 10:52 AM
 */

#include "attitudewidget.h"

attitudewidget::attitudewidget() : QWidget() {
    setFixedSize(500, 500);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatewindow()));
    timer->start(10);
    
    pitch = 0.0;
    roll = 0.0;
}

void attitudewidget::paintEvent(QPaintEvent*){
    QPainter *painter = new QPainter(this);
    painter->setWindow(-250, -250, 500, 500);
    
    painter->save();
    
    painter->rotate(roll);
    painter->translate(0, pitch);
    //painter->rotate(roll);
    QPen earthpen(Qt::darkRed, 1, Qt::SolidLine);
    QBrush earthbrush(Qt::darkRed);
    //painter->setPen(earthpen);
    painter->setBrush(earthbrush);
    painter->drawRect(-500, 0, 1000, 500);
    QPen skypen(Qt::blue, 1, Qt::SolidLine);
    QBrush skybrush(Qt::blue);
    //painter->setPen(skypen);
    painter->setBrush(skybrush);
    painter->drawRect(-500, 0, 1000, -500);
    QPen horizonpen(Qt::white, 3, Qt::SolidLine);
    painter->setPen(horizonpen);
    painter->drawLine(-500, 0, 500, 0);
    
    painter->restore();
    painter->save();

    painter->rotate(roll);
    painter->translate(0, pitch);
    QPen pitchdefaultpen(Qt::white, 1, Qt::SolidLine);
    painter->setPen(pitchdefaultpen);
    for (int i = 10; i<70; i+=10) {
        painter->drawLine(-10, -i, 10, -i);
        painter->drawLine(-10, i, 10, i);
    }
    
    painter->restore();
    painter->save();
    
    painter->translate(0, -75);
    painter->rotate(roll);
    
    QPen rolldefaultpen(Qt::white, 1, Qt::SolidLine);
    painter->setPen(rolldefaultpen);
    QBrush rolldefaultbrush(Qt::white);
    painter->setBrush(rolldefaultbrush);
    QPoint defaulttriangle[3] = {QPoint(0, -100), QPoint(-5, -110), QPoint(5, -110)};
    painter->drawPolygon(defaulttriangle, 3);
    
    painter->rotate(30);
    
    painter->drawArc(-100, -100, 200, 200, 60*16, 120*16);
    for (int i=0; i<130; i+=10) {
        painter->drawLine(-110, 0, -100, 0);
        painter->rotate(10);
    }
    
    painter->restore();
    
    QPen fixedpen(Qt::red, 5, Qt::SolidLine);
    painter->setPen(fixedpen);
    painter->drawPoint(0, 0);
    painter->drawLine(-200, 0, -50, 0);
    painter->drawLine(200, 0, 50, 0);
    painter->drawLine(-50, 0, -50, 20);
    painter->drawLine(50, 0, 50, 20);

    painter->translate(0,-75);
    QPen rollpointerpen(Qt::red, 1, Qt::SolidLine);
    painter->setPen(rollpointerpen);
    QBrush rollpointerbrush(Qt::red);
    painter->setBrush(rollpointerbrush);
    QPoint triangle[3] = {QPoint(0, -100), QPoint(-5, -90), QPoint(5, -90)};
    painter->drawPolygon(triangle, 3);

    
    

}

void attitudewidget::updatewindow(){
    update();
}

void attitudewidget::receivemeasurementsslot(double *measurementspointer) {
    setmeasurements(measurementspointer);
}

void attitudewidget::setmeasurements(double measurements[]) {
    pitch = measurements[0];
    roll = measurements[1];
}

