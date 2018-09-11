#ifndef DECOBSERVER_H
#define DECOBSERVER_H

#include "observer.h"

class DecObserver: public Observer
{

public:
    DecObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger);
    void update(QString text);
};

#endif
