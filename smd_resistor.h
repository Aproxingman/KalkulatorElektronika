#ifndef SMD_RESISTOR_H
#define SMD_RESISTOR_H

#include <stdlib.h>
#include <string>
#include <iostream>
#include "math.h"
#include "qstring.h"
#include <iomanip>
#include <sstream>
using namespace std;

class SMD_Resistor
{
private:
    string code;

public:
    SMD_Resistor (string _code);
    SMD_Resistor();
    string ComputeResistance();

    string getCode();
    void setCode(string _code);


};

#endif // SMD_RESISTOR_H
