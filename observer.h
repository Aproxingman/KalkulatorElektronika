#ifndef OBSERVER_H
#define OBSERVER_H

#include "number_systems.h"
#include <QWidget>
#include <QApplication>
#include "facade.h"
#include <QTextBrowser>
class Observer
{
protected:
    QTextBrowser* display;
    Facade* facade;
    bool* hexTrigger;
    bool* decTrigger;
    bool* octTrigger;
    bool* binTrigger;

public:
    virtual void update(QString text) = 0;
};
#endif
