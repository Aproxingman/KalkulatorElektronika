#ifndef DB_CALCULATOR_H
#define DB_CALCULATOR_H

#include "math.h"

class dB_Calculator
{
private:

    double input_signal, output_signal, dB;

public:
    dB_Calculator(double _input_signal = 0.0 , double _output_signal = 0.0 , double _dB = 0.0);

    double Amplitude_to_dB();
    double dB_to_Amplitude();
    double getAmplitudeDifference();
    double dBm_to_Amplitude();
    double Amplitude_to_dBm();

    void setInput_signal(double input);
    void setOutput_signal(double output);
    void setdB(double dB);

    double getInput();
    double getOutput();
    double getdB();

};

#endif // DB_CALCULATOR_H
