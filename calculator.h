#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "facade.h"
#include "QLineEditSubject.h"
#include "binObserver.h"
#include "hexObserver.h"
#include "octObserver.h"
#include "decObserver.h"


namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    QLineEditSubject* observ = new QLineEditSubject();
    ~Calculator();
    QString textbrowser ;


private:
    Ui::Calculator *ui;
    Facade* facade = Facade::getSLF();
private slots:
    /* Number systems Calculator slots */
    void MathButtonPressed();
    void EqualsButtonPressed();
    void RadioButtonPressed();
    void ClearButtonPressed();
    void UpdateConversion();

    /* Imaginary numbers Calculator slots */
    void ComputeButtonPressed();
    void ConvertButtonPressed();

    /* SMD calculator slots */
    void SMDCalculateButtonPressed();

    /* dB calculator slots */
    void dBCalculateButtonPressed();
    void dBCalculatorRadioButtonpressed();

};

#endif // CALCULATOR_H
