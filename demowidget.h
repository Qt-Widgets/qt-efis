/* 
 * File:   demowidget.h
 * Author: tieme
 *
 * Created on 13 May 2013, 6:56 PM
 */

#ifndef DEMOWIDGET_H
#define	DEMOWIDGET_H

#include <QtGui>

class demowidget : public QWidget {
    Q_OBJECT
public:
    demowidget();
private:
    QLabel *pitchlabel;
    QSlider *pitchslider;
    QLabel *rolllabel;
    QSlider *rollslider;
    QLabel *yawlabel;
    QSlider *yawslider;
    QLabel *throttlelabel;
    QSlider *throttleslider;
    QPushButton *resetbutton;
public slots:
    void resetmeasurements();
    void sendmeasurementsslot();
signals:
    void sendmeasurementssignal(double *measurementspointer);
};

#endif	/* DEMOWIDGET_H */

