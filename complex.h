#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
    double Re, Im, Phase, Module;
public:
    Complex(double _Re, double _Im);
    Complex(double _Re);
    Complex();

    virtual ~Complex();

    void ComputeModule();
    void ComputePhase();

    double getPhase();
    double getModule();
    double getRe();
    double getIm();

    void setRe(double _Re);
    void setIm(double _Im);


        Complex operator=(const Complex &c);
        Complex operator+(const Complex &c);
        Complex operator-(const Complex &c);
        Complex operator!();                      //Sprzezenie (im = -im)
        Complex operator*(const Complex &c);    //mnozenie
        Complex operator/(const Complex &c);    //dzielenie


        //double operator*(const Zespolone &c);
        friend std::ostream& operator<<(std::ostream &out, const Complex &c)
        {
            out << "Re: "<<c.Re<<std::endl<<"Im: "<<c.Im<<std::endl<<"Fi: "<<c.Phase<<std::endl<<"Z: "<<c.Module<<std::endl<<std::endl;
            return out;
        }


};
#endif
