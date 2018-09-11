#include "smd_resistor.h"

SMD_Resistor::SMD_Resistor()
{
    code = "0";
}

SMD_Resistor::SMD_Resistor(string _code)
{
    code = _code;
}

string SMD_Resistor :: getCode()
{
    return this->code;
}

void SMD_Resistor :: setCode(string _code)
{
    this ->code = _code;
}

/* NAZWA: ComputeResistance()
 * INPUT: atrybut Code obiektu klasy SMD_Resistor
 * OUTPUT: string resitance_value - wartość rezystancji
 */
string SMD_Resistor::ComputeResistance()
{
    int exponent;
    double base;
    double resistance;
    string resistance_value;
    stringstream stream;


    if (code.length() == 3){
        if(code.at(1)=='R'){
            resistance = ((double)code.at(0)-48)+(((double)code.at(2) - 48)*0.1);
            //resistance_value = to_string(resistance);
            stream << fixed << setprecision(1) << resistance;
            resistance_value = stream.str();
        }
        else{
         exponent = (int)code.at(2) -48;
         base = ((int)code.at(0)-48)*10 + (int)code.at(1) -48 ;
         resistance = base * pow(10,exponent);
            if(resistance >=10 && resistance <= 999){
                stream << fixed << setprecision(0) << resistance;
                resistance_value = stream.str();

             }else if(resistance >=1000 && resistance <= 999000){
                resistance /= 1000;
                stream << fixed << setprecision(1) << resistance;
                resistance_value = stream.str() + 'k';

             }else if(resistance>=1000000 && resistance<= 999000000){
                resistance /= 1000000;
                stream << fixed << setprecision(1) << resistance;
                resistance_value = stream.str() + 'M';
             }
        }

    } else if (code.length() == 4){
        if(code.at(2)=='R'){
            resistance =((double)code.at(0)-48)*10 +((double)code.at(1)-48) +(((double)code.at(3)-48)*0.1);
            stream << fixed << setprecision(1) << resistance;
            resistance_value = stream.str();
        }else{
            exponent = (int)code.at(3) - 48;
            base =((int)code.at(0)-48)*100 + ((int)code.at(1)-48)*10 + (int)code.at(2) -48;
            resistance = base * pow(10,exponent);

            if(resistance >=100 && resistance <= 999){
                stream << fixed << setprecision(0) << resistance;
                resistance_value = stream.str();

             }else if(resistance >=1000 && resistance <= 999999){
                resistance /= 1000;
                stream << fixed << setprecision(1) << resistance;
                resistance_value = stream.str() + 'k';
             }else if(resistance>=1000000 && resistance<= 999999999){
                resistance /= 1000000;
                stream << fixed << setprecision(1) << resistance;
                resistance_value = stream.str() + 'M';
             }
        }

    }

  return resistance_value;
}
