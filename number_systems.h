#ifndef NUMBER_SYSTEMS_H
#define NUMBER_SYSTEMS_H

#include <iostream>
#include <cstring>
#include <QString>
#include <QStringList>
#include <conio.h>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <cmath>
#include <QDebug>
#include <algorithm>

#define binary       2
#define octal        8
#define decimal      10
#define hexadecimal  16           //DEFINY DO POSZCZEGOLNYCH TYPOW


using namespace std;

class NumberSystem
{
private:
    static NumberSystem* instance;
    NumberSystem(string _number, int StartSystem);
    NumberSystem();
       int StartSystem;
       string input_number;
       string output_number;


public:


        static NumberSystem* getSL(); //SINGLETON
        static NumberSystem* getSL(string _number, int StartingSystem);

        virtual ~NumberSystem();

        void setInputNumber(string _input_number);
        void setStartSystem(int _StartSystem);

        string getOutputNumber();

        string BinToDec();
        string BinToHex();
        string BinToOct();

        string DecToHex();
        string DecToBin();
        string DecToOct();

        string HexToDec();
        string HexToBin();
        string HexToOct();

        string OctToDec();
        string OctToBin();
        string OctToHex();

        string BinToBin();
        string DecToDec();
        string OctToOct();
        string HexToHex();

        int Protection(int system);
       void ToDecimalConversion(int sys);


};

#endif // NUMBER_SYSTEMS_H
