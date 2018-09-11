#include "dB_calculator.h"

dB_Calculator::dB_Calculator(double _input_signal , double _output_signal  , double _dB)
{
     input_signal = _input_signal;
     output_signal = _output_signal;
     dB = _dB;

}
double dB_Calculator :: Amplitude_to_dB()
{
    return 10.0 * log10(getAmplitudeDifference());
}
double dB_Calculator :: dB_to_Amplitude()
{
    return pow(10.0, dB/20.0);
}
double dB_Calculator ::  getAmplitudeDifference()
{
    return output_signal - input_signal;
}
double dB_Calculator :: dBm_to_Amplitude()
{
    return pow(10.0, dB/10.0);
}
double dB_Calculator :: Amplitude_to_dBm()
{
    return 10.0 * log10(getAmplitudeDifference());

}

void dB_Calculator :: setInput_signal(double input)
{
    this->input_signal= input;
}

void dB_Calculator :: setOutput_signal(double output)
{
    this->output_signal = output;
}

void dB_Calculator :: setdB(double dB)
{
    this->dB = dB;
}

double dB_Calculator :: getInput()
{
    return input_signal;
}

double dB_Calculator :: getOutput()
{
    return output_signal;
}

double dB_Calculator :: getdB()
{
    return dB;
}
