#include "number_systems.h"

NumberSystem* NumberSystem::instance = 0; // SINGLETON

/*GET SINGLETON*/

NumberSystem* NumberSystem::getSL()
{
    if (instance == 0)
    {
        instance = new NumberSystem();
    }

    return instance;
}
/*GET SINGLETON */
NumberSystem* NumberSystem::getSL(string _number, int StartSystem){
    if (instance == 0)
    {
        instance = new NumberSystem(_number,StartSystem);
    }

    return instance;
}

NumberSystem::NumberSystem(string _input_number, int _StartSystem)
{
    input_number = _input_number;
    StartSystem = _StartSystem;
}


NumberSystem::NumberSystem()
{
    StartSystem = binary;
    input_number = "";
    output_number = "";
}

NumberSystem::~NumberSystem()
{
}

void NumberSystem::setInputNumber(string _input_number)
{
    input_number = _input_number;
}

void NumberSystem::setStartSystem(int _StartSystem)
{
    StartSystem = _StartSystem;

}

string NumberSystem::getOutputNumber()
{
    return output_number;
}


/* NAZWA: DecToBin()
 * INPUT: konwersja Decimal to Binary
 * OUTPUT: output_string - wyjściowy ciąg znaków
 */
string NumberSystem::DecToBin()
{
        string output_string;

        int binary_num = stoi(input_number);
        while (binary_num > 0)
        {
            int rem = binary_num % 2;                         //deklaracja zmiennej przechowujacej reszte z dzielenia przez 2 czesci calkowitej
            output_string.push_back(rem +'0');                   //wrzucenie na koniec listy jedynki albo zera
            binary_num /= 2;                                  //podzielenie przez 2
        }
        reverse(output_string.begin(),output_string.end());     // odwrócenie listy

        return output_string;
}
/* NAZWA: DecToHex()
 * INPUT: konwersja Decimal to hexadecimal
 * OUTPUT: output_string - wyjściowy ciąg znaków
 */
string NumberSystem::DecToHex()
{
    int rem;
    int dec = stoi(input_number);
    string output_string;
    while (dec > 0)   // Do this whilst the quotient is greater than 0.
    {
      rem = dec % 16; // Get the remainder.
      if (rem > 9)
      {
        // Map the character given that the remainder is greater than 9.
        switch (rem)
        {
          case 10: output_string = "A" + output_string; break;
          case 11: output_string = "B" + output_string; break;
          case 12: output_string = "C" + output_string; break;
          case 13: output_string = "D" + output_string; break;
          case 14: output_string = "E" + output_string; break;
          case 15: output_string = "F" + output_string; break;
        }
      }
      else
      {
        output_string = char(rem + 48) + output_string; // Converts integer (0-9) to ASCII code.
        // x + 48 is the ASCII code for x digit (if 0 <= x <= 9)
      }
      dec /= 16;
     }
     if (output_string == "") // if the number was 0, the string will remain empty
       return "0";
     else
       return output_string;
}
/* NAZWA: DecToOct()
 * INPUT: konwersja Decimal to Octal
 * OUTPUT: output_string - wyjściowy ciąg znaków
 */
string NumberSystem::DecToOct()
{
       int rem;
       int dec = stoi (input_number);
       string output_string;
       while(dec>0)
       {
           rem = dec % 8;                                  // Get the remainder.
           output_string = char(rem + 48) + output_string; // Converts integer (0-9) to ASCII code.
           // x + 48 is the ASCII code for x digit (if 0 <= x <= 9)
           dec /= 8;
       }
       if (output_string == "") // if the number was 0, the string will remain empty
         return "0";
       else
         return output_string;

}

string NumberSystem::HexToDec()
{
        std::transform(input_number.begin(), input_number.end(),input_number.begin(), ::toupper);
        ToDecimalConversion(hexadecimal);
        return output_number;
}

string NumberSystem::HexToBin()
{
        string tempA = this->HexToDec();
        this->setInputNumber(tempA);
        output_number = this->DecToBin();
        return output_number;
}

string NumberSystem::HexToOct()
{
        string tempA = this->HexToDec();
        this->setInputNumber(tempA);
        output_number = this->DecToOct();
        return output_number;
}

string NumberSystem::BinToHex()
{
        string tempA = this->BinToDec();
        this->setInputNumber(tempA);
        output_number = this->DecToHex();
        return output_number;
}

string NumberSystem::BinToDec()
{
    ToDecimalConversion(binary);
    return output_number;
}

string NumberSystem::BinToOct()
{

        string tempA = this->BinToDec();
        this->setInputNumber(tempA);
        output_number = this->DecToOct();
        return output_number;

}

string NumberSystem::OctToDec()
{
        ToDecimalConversion(octal);
        return output_number;
}

string NumberSystem::OctToBin()
{
        string tempA = this->OctToDec();
        this->setInputNumber(tempA);
        output_number = this->DecToBin();

        return output_number;
}

string NumberSystem::OctToHex()
{
    string tempA = this->OctToDec();

    this->setInputNumber(tempA);
    output_number = this->DecToHex();
    return output_number;
}



string NumberSystem::BinToBin()
{

    return input_number;
}

string NumberSystem::DecToDec()
{

    return input_number;
}

string NumberSystem::OctToOct()
{

    return input_number;
}

string NumberSystem::HexToHex()
{
    return input_number;
}
/* NAZWA: ToDecimalConversion()
 * INPUT: sys , system liczbowy
 * OUTPUT: ustawienie tymczasowej wartosci stringstream
 */
void NumberSystem::ToDecimalConversion(int sys)
{

       int DecInt, DecimalSolution = 0  ;         //deklaracja zmiennych
       int Multiplier = 1;

       for (int i = input_number.length()-1; i>=0; --i)
       {
           if(input_number[i] > 47 && input_number[i] < 58)
           {
               DecimalSolution += (input_number[i] - '0') * Multiplier;              //jesli znak stringu jest '1' to wtedy mnozy raz "Dwojki"; jesli nie to nie mnozy nic
               Multiplier *= sys;                                                             //mnozenie potegi razy 2
           }
           else if(input_number[i] > 64 && input_number[i] < 71)
           {
               DecInt = (int)input_number[i];
               DecInt = DecInt - 55;
               DecimalSolution += DecInt * Multiplier;
               Multiplier *= sys;
           }
           else if(input_number[i] > 96 && input_number[i] < 103)
           {
               DecInt = (int)input_number[i];
               DecInt = DecInt - 87;
               DecimalSolution += DecInt * Multiplier;
               Multiplier *= sys;
           }


       }

                     //KONWERSJA DO STRINGA

    stringstream tempDecInt;
    tempDecInt<<setprecision(30)<<DecimalSolution;
    output_number = tempDecInt.str();

}
