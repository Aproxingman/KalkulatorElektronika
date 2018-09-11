#ifndef HEXOBSERVER_H
#define HEXOBSERVER_H

#include "observer.h"

class HexObserver: public Observer
{

public:
    HexObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger);
    void update(QString text);
};
#endif
