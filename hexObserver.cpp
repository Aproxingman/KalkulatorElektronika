#include "HexObserver.h"
/*
 * KONSTRUKTOR
 * QTextBrowser* display - atrybut klasy HexObserver, typu QTextBrowser - wskaźnik do okienka gdzie będzie aktualizowana zamiana
 * Facade* _facade - wskaźnik na obiekt klasy facade znajdujący się w klasie calculator
 * bool* _hexTrigger - wskaźniki na wartość triggera w zależności od zaznaczone radioButtona
 */
HexObserver::HexObserver(QTextBrowser* _display, Facade* _facade, bool* _hexTrigger, bool* _decTrigger, bool* _octTrigger, bool* _binTrigger)
{
    this->display = _display;
    this->facade = _facade;
    this->hexTrigger = _hexTrigger;
    this->decTrigger = _decTrigger;
    this->octTrigger = _octTrigger;
    this->binTrigger = _binTrigger;
}


void HexObserver::update(QString text)
{
    if(hexTrigger)
    {
        this->display->setText(text);
    }
    else if(decTrigger )
    {
        this->display->setText(facade->Conversion(text,10,16));
    }
    else if(octTrigger)
    {
        this->display->setText(facade->Conversion(text,8,16));
    }
    else if(binTrigger )
    {
        this->display->setText(facade->Conversion(text,2,16));
    }
}
