#include "complex.h"
#define pi 3.14159265


Complex::Complex(double _Re, double _Im)
{
    Re = _Re;
    Im = _Im;

    Module = sqrt(Re*Re + Im*Im);

    Phase = asin(Im/Module)*180/pi;
}

Complex::~Complex(){}

Complex::Complex()
{
    Re = 0;
    Im = 0;

    Module = sqrt(Re*Re + Im*Im);
    Phase = asin(Im/Module)*180/pi;


}

/* Input: double Re, double Im
 *  funkcja liczy moduł liczby zespolonej przypisując wartość do obiektu
 *
 * Return: Void
 */
void Complex::ComputeModule()
{
    Module = sqrt(Re*Re + Im*Im);

}
/* Input: double Im, double Module
 *  funkcja liczy fazę liczby zespolonej przypisując wartość do obiektu
 *
 * Return: Void
 */
void Complex::ComputePhase()
{
    Phase = asin(Im/Module)*180/pi;

}

/* Input :
 *  funkcja zwraca wartość fazy danego obiektu klasy Complex
 * Return : double Phase
 *
 */

double Complex::getPhase()
{
    if(Re>=0 && Im>=0)
    {
        Phase = asin(Im/Module)*180/pi;
    }
    else if(Re<0)
    {
        Phase = 180 - asin(Im/Module)*180/pi;
    }
    else if(Re>=0 && Im<0)
    {
        Phase = 360 + asin(Im/Module)*180/pi;
    }

    return Phase;
}
/* Input :
 *  funkcja zwraca wartość modułu  danego obiektu klasy Complex
 * Return : double Module
 *
 */
double Complex::getModule()
{
    Module = sqrt(Re*Re + Im*Im);

    return Module;
}
/* Input :
 *  funkcja zwraca wartość Re  danego obiektu klasy Complex
 * Return : double Re
 *
 */
double Complex::getRe()
{
    return Re;
}
/* Input :
 *  funkcja zwraca wartość Im  danego obiektu klasy Complex
 * Return : double Im
 *
 */
double Complex::getIm()
{
    return Im;
}
/* Input : double _Re
 *  funkcja ustawia wartość Re danego obiektu
 * Return : void
 *
 */
void Complex::setRe(double _Re)
{
    this->Re = _Re;
}
/* Input :
 *  funkcja ustawia wartość Im danego obiektu
 * Return : void
 *
 */
void Complex::setIm(double _Im)
{
    this->Im = _Im;
}

/* Operatory
 * Implementacja operatorów przypisania, dodawania, mnożenia, dzielenia oraz sprzężenia
 */
Complex Complex::operator=(const Complex &c)
{
    Re = c.Re;
    Im = c.Im;
    return *this;
}

Complex Complex::operator+(const Complex &c)
{
    return Complex(Re+c.Re, Im+c.Im);
}

Complex Complex::operator-(const Complex &c)
{
    return Complex(Re-c.Re, Im-c.Im);
}

Complex Complex::operator!()
{
    return Complex(Re, -Im);
}

Complex Complex::operator*(const Complex &c)
{
    return Complex(Re*c.Re - Im*c.Im, Re*c.Im + Im*c.Re);
}

Complex Complex::operator /(const Complex &c)
{
    return Complex((Re*c.Re + Im*c.Im)/(c.Re*c.Re + c.Im*c.Im),  (Im*c.Re - Re*c.Im)/(c.Re*c.Re + c.Im*c.Im));

}
