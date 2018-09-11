#ifndef BINOBSERVER_H
#define BINOBSERVER_H
#include "observer.h"
#include "facade.h"
class BinObserver: public Observer
{

public:
    BinObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger);
    void update(QString text);
};

#endif
