#include "calculator.h"
#include "ui_calculator.h"

int CalcValue = 0;

/* Math button triggers */

bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

bool OrTrigger = false;
bool AndTrigger = false;
bool XorTrigger = false;
bool ModTrigger = false;

/* Digital systems triggers */

bool HexadecimalTrigger = false;
bool DecimalTrigger = false;
bool OctalTrigger = false;
bool BinaryTrigger = false;

/* dB Radio buttons triggers */

bool Power = false;
bool Voltage = false;


Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);


   ui->Display->setFocus();
   ui->radioButton_DEC->setChecked(1);           // default value
   ui->radioButtonVoltage->setChecked(1);
   ui->InputSignal->setText(0);
   ui->OutputSignal->setText(0);
   ui->dB->setText(0);
   DecimalTrigger = true;

   /* default regular expression */

   QRegularExpression decMatcher("[0-9]+");
   QValidator *dec = new QRegularExpressionValidator(decMatcher);
   ui->Display->setValidator(dec);
   /* observer initialization */


  Observer *hex_observer = new HexObserver(ui->textBrowser_HEX, facade, &HexadecimalTrigger, &DecimalTrigger, &OctalTrigger, &BinaryTrigger);
  Observer *dec_observer = new DecObserver(ui->textBrowser_DEC, facade, &HexadecimalTrigger, &DecimalTrigger, &OctalTrigger, &BinaryTrigger);
  Observer *bin_observer = new BinObserver(ui->textBrowser_BIN, facade, &HexadecimalTrigger, &DecimalTrigger, &OctalTrigger, &BinaryTrigger);
  Observer *oct_observer = new OctObserver(ui->textBrowser_OCT, facade, &HexadecimalTrigger, &DecimalTrigger, &OctalTrigger, &BinaryTrigger);

  observ->attach(hex_observer);
  observ->attach(dec_observer);
  observ->attach(bin_observer);
  observ->attach(oct_observer);

   /* Number systems calculator */

   connect(ui->pushButton_ADD, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_SUB, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_DIV, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_MULT, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_AND, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_OR, SIGNAL(released()), this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_XOR, SIGNAL(released()),this, SLOT(MathButtonPressed()));
   connect(ui->pushButton_MOD, SIGNAL(released()),this,SLOT(MathButtonPressed()));

   connect(ui->pushButton_Equals, SIGNAL(released()), this, SLOT(EqualsButtonPressed()));

   connect(ui->pushButton_ClearCalc, SIGNAL(released()), this, SLOT(ClearButtonPressed()));

   connect(ui->radioButton_BIN, SIGNAL(clicked()), this, SLOT(RadioButtonPressed()));
   connect(ui->radioButton_DEC, SIGNAL(clicked()), this, SLOT(RadioButtonPressed()));
   connect(ui->radioButton_OCT, SIGNAL(clicked()), this, SLOT(RadioButtonPressed()));
   connect(ui->radioButton_HEX, SIGNAL(clicked()), this, SLOT(RadioButtonPressed()));

   /* Imaginary numbers calculator */

   connect(ui->pushButton_Convert1, SIGNAL(released()), this, SLOT(ConvertButtonPressed()));
   connect(ui->pushButton_Convert2, SIGNAL(released()), this, SLOT(ConvertButtonPressed()));
   connect(ui->pushButton_Calculate, SIGNAL(released()), this , SLOT(ComputeButtonPressed()));

   /* SMD calculator */

   connect(ui->CalculateButton, SIGNAL(released()), this, SLOT(SMDCalculateButtonPressed()));

   /* dB Calculator */

   connect(ui->pushButtonInput, SIGNAL(released()), this, SLOT(dBCalculateButtonPressed()));
   connect(ui->pushButtonOutput, SIGNAL(released()), this, SLOT(dBCalculateButtonPressed()));
   connect(ui->pushButtondB, SIGNAL(released()),this, SLOT(dBCalculateButtonPressed()));

   connect(ui->Display, SIGNAL(returnPressed()),this,SLOT(UpdateConversion()));

}

/* Number systems Calculator */

void Calculator::MathButtonPressed(){
    /* Set false while any button is pressed */
     divTrigger = false;
     multTrigger = false;
     addTrigger = false;
     subTrigger = false;

     OrTrigger = false;
     AndTrigger = false;
     XorTrigger = false;
     ModTrigger = false;

     QString displayVal = ui->Display->text();

     if(HexadecimalTrigger){
        displayVal = facade->Conversion(displayVal,16,10);

     }else if(OctalTrigger){
         displayVal = facade->Conversion(displayVal,8,10);

     }else if(BinaryTrigger){
         displayVal = facade->Conversion(displayVal,2,10);

     }else if(DecimalTrigger){

     }

     CalcValue = displayVal.toInt();
     QPushButton *button = (QPushButton *)sender();
     QString butVal = button->text();

     if(QString :: compare(butVal,"/",Qt::CaseInsensitive) == 0){
         divTrigger = true;
        if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " / ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text()+ "/";

     } else if(QString:: compare(butVal, "*", Qt::CaseInsensitive)==0){
         multTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " * ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + " * ";
     } else if(QString:: compare(butVal, "+", Qt::CaseInsensitive)==0){
         addTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " + ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "+";

     } else if(QString:: compare(butVal, "-", Qt::CaseInsensitive)==0){
         subTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " - ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "-";
     } else if(QString:: compare(butVal, "Or", Qt::CaseInsensitive)==0){
         OrTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " Or ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "Or";
     } else if(QString:: compare(butVal, "And", Qt::CaseInsensitive)==0){
         AndTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " And ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "And";
     } else if(QString:: compare(butVal, "Xor", Qt::CaseInsensitive)==0){
         XorTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " Xor ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "Xor";
     } else if(QString:: compare(butVal, "Mod", Qt::CaseInsensitive)==0){
         ModTrigger = true;
         if(displayVal != "") ui->textBrowser->setText(ui->Display->text() + " Mod ");
         ui->Display->clear();
         ui->Display->setFocus();
         textbrowser = ui->Display->text() + "Mod";
     }else {
            ui->Display->setText("");
     }
}

void Calculator :: RadioButtonPressed()
{
    /* setting Decimal Systems triggers*/

    if(ui->radioButton_BIN->isChecked())
    {
        HexadecimalTrigger = false;
        DecimalTrigger = false;
        OctalTrigger = false;
        BinaryTrigger = true;
        QRegularExpression binMatcher("[0-1]+");
        QValidator *bin = new QRegularExpressionValidator(binMatcher);
        ui->Display->setValidator(bin);

    }else if (ui->radioButton_DEC->isChecked()){

        HexadecimalTrigger = false;
        DecimalTrigger = true;
        OctalTrigger = false;
        BinaryTrigger = false;
        QRegularExpression decMatcher("[0-9]+");
        QValidator *dec = new QRegularExpressionValidator(decMatcher);
         ui->Display->setValidator(dec);
    }else if(ui->radioButton_HEX->isChecked()){
        HexadecimalTrigger = true;
        DecimalTrigger = false;
        OctalTrigger = false;
        BinaryTrigger = false;
        QRegularExpression hexMatcher("[0-9A-F]+");
        QValidator *hex = new QRegularExpressionValidator(hexMatcher);
        ui->Display->setValidator(hex);

    }else if(ui->radioButton_OCT->isChecked()){
        HexadecimalTrigger = false;
        DecimalTrigger = false;
        OctalTrigger = true;
        BinaryTrigger = false;
        QRegularExpression octMatcher("[0-7]+");
        QValidator *oct = new QRegularExpressionValidator(octMatcher);
        ui->Display->setValidator(oct);
    }
}

void Calculator :: EqualsButtonPressed()
{
    int solution = 0;
    QString displayVal = ui->Display->text();
    ui->textBrowser->append(ui->Display->text());
            if(HexadecimalTrigger){
               displayVal = facade->Conversion(displayVal,16,10);
                //ui->Display->setText(displayVal);

            }else if(OctalTrigger){
                displayVal = facade->Conversion(displayVal,8,10);
                //ui->Display->setText(displayVal);

            }else if(BinaryTrigger){
                displayVal = facade->Conversion(displayVal,2,10);
               // ui->Display->setText(displayVal);

            }else if(DecimalTrigger){
                // Do nothing
               // ui->Display->setText(displayVal);
            }

    int intDisplayVal = displayVal.toInt();

        if(addTrigger || subTrigger || multTrigger || divTrigger ||
                OrTrigger || AndTrigger || XorTrigger || ModTrigger){
            if(addTrigger){
                solution = CalcValue + intDisplayVal;
            } else if(subTrigger){
                solution = CalcValue - intDisplayVal;
            } else if(multTrigger){
                solution = CalcValue * intDisplayVal;
            } else if(divTrigger){
                solution = CalcValue / intDisplayVal;
            } else if(OrTrigger){
                solution = CalcValue | intDisplayVal;
            } else if(AndTrigger){
                solution = CalcValue & intDisplayVal;
            } else if(XorTrigger){
                solution = CalcValue ^ intDisplayVal;
            } else if(ModTrigger){
                solution = CalcValue % intDisplayVal;
            }
        }
        displayVal = QString::number(solution);

        if(HexadecimalTrigger){
            displayVal = facade->Conversion(displayVal,10,16);
        }else if(OctalTrigger){
            displayVal = facade->Conversion(displayVal,10,8);
        }else if(BinaryTrigger){
            displayVal = facade->Conversion(displayVal,10,2);
        }else if(DecimalTrigger){
            // Do nothing
        }



        ui->Display->clear();
        ui->Display->setText(displayVal);
        ui->Display->setFocus();

}

void Calculator :: ClearButtonPressed()
{
    ui->Display->setText("");
    ui->textBrowser->setText("");
    ui->textBrowser_BIN->setText("");
    ui->textBrowser_DEC->setText("");
    ui->textBrowser_HEX->setText("");
    ui->textBrowser_OCT->setText("");
    ui->Display->setFocus();
}

/* Imaginary Numbers Calculator */


void Calculator :: ConvertButtonPressed()
{
    double Re2 = ui->ReLineEdit2->text().toDouble();
    double Im2 = ui->ReLineEdit2->text().toDouble();

    facade->makeComplex2(Re2, Im2);

    QString F2 = QString("%1").arg(facade->getPhaseComplex2());

    QString Z2 = QString("%1").arg(facade->getModuleComplex2());

    ui->PhaseTextBrowser2->setText(F2);
    ui->ModuleTextBrowser2->setText(Z2);

    double Re1 = ui->ReLineEdit1->text().toDouble();
    double Im1 = ui->ImLineEdit2->text().toDouble();
    facade->makeComplex1(Re1, Im1);
    QString F1 = QString("%1").arg(facade->getPhaseComplex1());
    QString Z1 = QString("%1").arg(facade->getModuleComplex1());

    ui->PhaseTextBrowser1->setText(F1);
    ui->ModuleTextBrowser1->setText(Z1);
}

void Calculator :: ComputeButtonPressed()
{
    if(ui->ReLineEdit1->text() == "" || ui->ImLineEdit1->text() == ""
            || ui->ReLineEdit2->text() == "" || ui->ImLineEdit2->text() == "")
    {
        facade->makeComplex1(0,0);
        facade->makeComplex2(0,0);
        ui->ReLineEdit1->setText("0");
        ui->ImLineEdit1->setText("0");
        ui->ReLineEdit2->setText("0");
        ui->ImLineEdit2->setText("0");

        ui->PhaseTextBrowser1->setText("0");
        ui->ModuleTextBrowser1->setText("0");
        ui->PhaseTextBrowser2->setText("0");
        ui->ModuleTextBrowser2->setText("0");
        ui->ReTextBrowser3->setText("0");
        ui->ImTextBrowser3->setText("0");
        ui->PhaseTextBrowser3->setText("0");
        ui->ModuleTextBrowser3->setText("0");
    }
    else
    {
        switch(ui->comboBox_Options->currentIndex())
        {
        case 0:
            facade->ComplexOperation('+');
            break;
        case 1:
            facade->ComplexOperation('-');
            break;
        case 2:
            facade->ComplexOperation('!');
            break;
        case 3:
            facade->ComplexOperation('*');
            break;
        case 4:
            facade->ComplexOperation('/');
            break;
        }
        QString Re = QString("%1").arg(facade->getRe());
        QString Im = QString("%1").arg(facade->getIm());
        QString Z = QString("%1").arg(facade->getModuleComplex());
        QString Fi = QString("%1").arg(facade->getPhase());


        ui->ReTextBrowser3->setText(Re);
        ui->ImTextBrowser3->setText(Im);
        ui->PhaseTextBrowser3->setText(Fi);
        ui->ModuleTextBrowser3->setText(Z);

    }
}

void Calculator :: SMDCalculateButtonPressed()
{
    facade->setSMDcode(ui->SMDCode->text().toStdString());

    ui->ResistanceValue->setText(facade->CalculateResistance());

}

void Calculator :: dBCalculateButtonPressed()
{
    facade->setInput(ui->InputSignal->text().toDouble());
    facade->setOutput(ui->OutputSignal->text().toDouble());
    facade->setdB(ui->dB->text().toDouble());

    QPushButton *button = (QPushButton *)sender();
    QString buttonName = button->text();

    if(QString :: compare(buttonName,"Calculate Value 1",Qt::CaseSensitive) == 0){

        ui->InputSignal->setText(facade->calculate_InputSignal(Voltage));

    } else if(QString:: compare(buttonName, "Calculate Value 2", Qt::CaseInsensitive)==0){

        ui->OutputSignal->setText(facade->calculate_OutputSignal(Voltage));

    } else if(QString:: compare(buttonName, "Calculate dB", Qt::CaseInsensitive)==0){

        ui->dB->setText(facade->calculate_dB(Voltage));

    }

}

void Calculator :: UpdateConversion()
{
   observ->notify(ui->Display->text());
}

void Calculator :: dBCalculatorRadioButtonpressed()
{
    if (ui->radioButtonPower->isChecked())
    {
        Voltage = false;
        Power = true;

    }else if (ui->radioButtonVoltage->isChecked())
    {
        Voltage = true;
        Power = false;
    }
}

Calculator::~Calculator()
{
    delete ui;
}
