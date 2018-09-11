#include "octObserver.h"

OctObserver::OctObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger)
{
    this->display = _display;
    this->facade = _facade;
    this->hexTrigger = _hexTrigger;
    this->decTrigger = _decTrigger;
    this->octTrigger = _octTrigger;
    this->binTrigger = _binTrigger;
}


void OctObserver::update(QString text)
{
    if(hexTrigger)
    {
        this->display->setText(facade->Conversion(text,16,8));
    }
    else if(decTrigger )
    {
        this->display->setText(facade->Conversion(text,10,8));
    }
    else if(octTrigger)
    {

        this->display->setText(text);
    }
    else if(binTrigger )
    {
        this->display->setText(facade->Conversion(text,2,8));
    }
}
