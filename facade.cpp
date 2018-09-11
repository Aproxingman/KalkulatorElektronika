#include "facade.h"

using namespace std;

Facade* Facade::instance = 0;


Facade* Facade::getSLF()
{
    if (instance == 0)
    {
        instance = new Facade();
    }

    return instance;
}


Facade::Facade()
{
    NumSys = NumberSystem::getSL();
}


Facade::~Facade()
{
    delete complex1;
    delete complex2;
}

/* INPUT : Qstring input  - LICZBA WEJŚCIOWA TYPU QSTRING
 *         int StartSystem - Identyfikator wejściowego systemu liczbowego
 *                           2 - binary 8 - octal 10 - decimal 16 - hexadecimal
 *         int TypeOfConversion  - Identyfikator wyjściowego systemu liczbowego
 *                           2 - binary 8 - octal 10 - decimal 16 - hexadecimal
 * OUTPUT: QString - Wynik konwersji typu QString
 */

QString Facade::Conversion(QString input, int StartSystem, int TypeOfConversion)
{
    NumSys->setInputNumber(input.toStdString());
    NumSys->setStartSystem(StartSystem);


        switch(StartSystem)
        {
        case binary:
            switch(TypeOfConversion)
            {

            case binary:

                return QString::fromStdString(NumSys->BinToBin());
                break;

            case octal:

                return QString::fromStdString(NumSys->BinToOct());
                break;

            case decimal:

                return  QString::fromStdString(NumSys->BinToDec());
                break;

            case hexadecimal:

                return QString::fromStdString(NumSys->BinToHex());
                break;

            }
            break;
        case octal:
            switch(TypeOfConversion)
            {
            case binary:

                return QString::fromStdString(NumSys->OctToBin());

            case decimal:

                return QString::fromStdString(NumSys->OctToDec());
                break;

            case octal:

                return QString::fromStdString(NumSys->OctToOct());
                break;

            case hexadecimal:

                return QString::fromStdString(NumSys->OctToHex());
                break;
            }
            break;
        case decimal:
            switch(TypeOfConversion)
            {
            case binary:

                return QString::fromStdString(NumSys->DecToBin());
                break;

            case octal:

                return QString::fromStdString(NumSys->DecToOct());
                break;

            case decimal:

                return QString::fromStdString(NumSys->DecToDec());
                break;

            case hexadecimal:

                return QString::fromStdString(NumSys->DecToHex());
                break;

            }
            break;
        case hexadecimal:
            switch(TypeOfConversion)
            {
            case binary:

                return QString::fromStdString(NumSys->HexToBin());
                break;

            case octal:

                return QString::fromStdString(NumSys->HexToOct());
                break;

            case decimal:

                return QString::fromStdString(NumSys->HexToDec());
                break;

            case hexadecimal:

                return QString::fromStdString(NumSys->HexToHex());
                break;

            }
            break;
            return " ";

        }
       }


/* Complex */


void Facade::makeComplex1(double Real, double Imaginary)
{
    complex1=new Complex(Real,Imaginary);

}

void Facade::makeComplex2(double Real, double Imaginary)
{
    complex2=new Complex(Real,Imaginary);
}

void Facade::makeComplex()
{
    complex=new Complex();
}

void Facade::ComplexOperation(char operation)   //Operacje na liczbach zespolonych
{
    makeComplex();

    switch(operation)
    {
    case '+':
        *complex = *complex1 + *complex2;
        break;
    case '-':
        *complex=*complex1-*complex2;
        break;
    case '=':
        *complex=*complex2;
        break;
    case '!':
        *complex=!(*complex);
        break;
    case '*':
        *complex=(*complex1)*(*complex2);
        break;
    case '/':
        if (complex2->getRe() != 0 && complex2->getIm()!= 0)
            *complex = (*complex1)/(*complex2);
        else
            *complex = *complex1;
    }
}

double Facade::getRe()
{
    return complex->getRe();
}

double Facade::getIm()
{
    return complex->getIm();
}


double Facade::getPhase()
{
    return complex->getPhase();
}

double Facade::getPhaseComplex1()
{
    return complex1->getPhase();
}

double Facade::getPhaseComplex2()
{
    return complex2->getPhase();
}


double Facade::getModuleComplex()
{
    return complex->getModule();
}

double Facade::getModuleComplex1()
{
    return complex1->getModule();
}

double Facade::getModuleComplex2()
{
    return complex2->getModule();
}

/*SMD */

void Facade :: setSMDcode(string label)
{

    SMD =  new SMD_Resistor(label);
}

QString Facade :: CalculateResistance()
{
   return QString::fromStdString(SMD->ComputeResistance());
}


/* dB Calculator */

void Facade :: setInput(double input)
{
    dBCalc->setInput_signal(input);
}

void Facade :: setOutput(double output)
{
    dBCalc->setOutput_signal(output);
}

void Facade :: setdB(double dB)
{
    dBCalc->setdB(dB);
}

QString Facade :: calculate_InputSignal(bool SignalType)
{
    if (SignalType)
        return QString::number(dBCalc->getOutput()*dBCalc->dB_to_Amplitude());
    else
        return QString::number(dBCalc->getOutput()*dBCalc->dBm_to_Amplitude());
}

QString Facade :: calculate_OutputSignal(bool SignalType)
{
    if (SignalType)
        return QString::number(dBCalc->getInput()*dBCalc->dB_to_Amplitude());
    else
        return QString::number(dBCalc->getInput()*dBCalc->dBm_to_Amplitude());
}
QString Facade :: calculate_dB(bool SignalType)
{
    if (SignalType)
        return QString::number(dBCalc->Amplitude_to_dB());
    else
        return QString::number(dBCalc->Amplitude_to_dBm());
}
