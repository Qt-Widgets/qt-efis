/* 
 * File:   attitudewidget.h
 * Author: tieme
 *
 * Created on 12 May 2013, 10:52 AM
 */

#ifndef ATTITUDEWIDGET_H
#define	ATTITUDEWIDGET_H

#include <QtGui>

class attitudewidget : public QWidget {
    Q_OBJECT
public:
    attitudewidget();
    void setmeasurements(double measurements[]);
protected:
    void paintEvent(QPaintEvent*);
protected slots:
     void updatewindow();   
private:
    QTimer *timer;
    double pitch;
    double roll;
public slots:
    void receivemeasurementsslot(double *measurementspointer);
};

#endif	/* ATTITUDEWIDGET_H */

