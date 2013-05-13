/* 
 * File:   altitudewidget.h
 * Author: tieme
 *
 * Created on 13 May 2013, 7:41 PM
 */

#ifndef ALTITUDEWIDGET_H
#define	ALTITUDEWIDGET_H

#include <QtGui>

class altitudewidget : public QWidget {
    Q_OBJECT
public:
    altitudewidget();
    void setmeasurements(double measurements[]);
protected:
    void paintEvent(QPaintEvent*);
protected slots:
     void updatewindow();   
private:
    QTimer *timer;
    
    double altitude;
public slots:
    void receivemeasurementsslot(double *measurementspointer);
};

#endif	/* ALTITUDEWIDGET_H */

