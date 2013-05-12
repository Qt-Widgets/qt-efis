/* 
 * File:   headingwidget.h
 * Author: tieme
 *
 * Created on 12 May 2013, 11:02 AM
 */

#ifndef HEADINGWIDGET_H
#define	HEADINGWIDGET_H

#include <QtGui>

class headingwidget : public QWidget {
    Q_OBJECT
public:
    headingwidget();
    void setmeasurements(double measurements[]);
protected:
    void paintEvent(QPaintEvent*);
protected slots:
     void updatewindow();   
private:
    QTimer *timer;
    
    double yaw;
public slots:
    void receivemeasurementsslot(double *measurementspointer);
};

#endif	/* HEADINGWIDGET_H */

