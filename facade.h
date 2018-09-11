#ifndef FACADE_H
#define FACADE_H


#include "number_systems.h"
#include "complex.h"
#include <cstdarg>
#include <QString>
#include "smd_resistor.h"
#include "dB_calculator.h"

class Facade
{
private:

    static Facade* instance;

    Facade();
    NumberSystem* NumSys;


    Complex* complex1 = NULL;
    Complex* complex2 = NULL;
    Complex* complex = NULL;

    SMD_Resistor* SMD =NULL;

    dB_Calculator* dBCalc = new dB_Calculator();



public:

    static Facade* getSLF();
    virtual ~Facade();
    QString Conversion(QString Input, int StartSystem, int TypeOfConversion);

    /* complex */
    void makeComplex1(double Real, double Imaginary);
    void makeComplex2(double Real, double Imaginary);
    void makeComplex();
    void ComplexOperation(char operation);
    Complex getComplex();
    double getPhase();
    double getPhaseComplex1();
    double getPhaseComplex2();
    double getModuleComplex();
    double getModuleComplex1();
    double getModuleComplex2();
    double getRe();
    double getIm();

    void setRe(double _Re);
    void setIm(double _Im);

    /* SMD */

    QString CalculateResistance();
    void setSMDcode(string label);

    /* dB Calculator */
    void setInput(double input);
    void setOutput(double output);
    void setdB(double dB);

    QString calculate_dB(bool SignalType);
    QString calculate_InputSignal(bool SignalType);
    QString calculate_OutputSignal(bool SignalType);


};

#endif // FACADE_H
