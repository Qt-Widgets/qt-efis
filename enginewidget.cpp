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
    
    
}

void enginewidget::updatewindow(){
    update();
}


