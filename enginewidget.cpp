/* 
 * File:   enginewidget.cpp
 * Author: tieme
 * 
 * Created on 13 May 2013, 4:14 PM
 */

#include "enginewidget.h"

enginewidget::enginewidget() : QWidget() {
    setFixedSize(200, 200);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatewindow()));
    timer->start(10);
    
    throttle = 0.0;
}

void enginewidget::paintEvent(QPaintEvent*){
    QPainter *painter = new QPainter(this);
    painter->setWindow(-100, -100, 200, 200);
    
    QPen backgroundpen(Qt::black, 1, Qt::SolidLine);
    painter->setPen(backgroundpen);
    QBrush backgroundbrush(Qt::black);
    painter->setBrush(backgroundbrush);
    painter->drawRect(-100, -100, 200, 200);
    
    QPen scalepen(Qt::green, 3, Qt::SolidLine);
    painter->setPen(scalepen);
    painter->drawArc(-75, -75, 150, 150, 45*16, 180*16);
    
    QPen pointerpen(Qt::white, 1, Qt::SolidLine);
    painter->setPen(pointerpen);
    QBrush pointerbrush(Qt::white);
    painter->setBrush(pointerbrush);
    painter->rotate(135);
    painter->rotate(0);
    QPoint arrow[3] = {QPoint(75, 0), QPoint(65, 5), QPoint(65, -5)};
    painter->drawPolygon(arrow, 3);
}

void enginewidget::updatewindow(){
    update();
}


