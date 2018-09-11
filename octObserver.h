#ifndef OCTOBSERVER_H
#define OCTOBSERVER_H

#include "observer.h"

class OctObserver: public Observer
{

public:
    OctObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger);
    void update(QString text);
};

#endif
