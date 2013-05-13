/* 
 * File:   enginewidget.h
 * Author: tieme
 *
 * Created on 13 May 2013, 4:14 PM
 */

#ifndef ENGINEWIDGET_H
#define	ENGINEWIDGET_H

#include <QtGui>

class enginewidget : public QWidget {
    Q_OBJECT
public:
    enginewidget();
    void setmeasurements(double measurements[]);
protected:
    void paintEvent(QPaintEvent*);
protected slots:
     void updatewindow();   
private:
    QTimer *timer;
    
    double throttle;
public slots:
    void receivemeasurementsslot(double *measurementspointer);
};

#endif	/* ENGINEWIDGET_H */

