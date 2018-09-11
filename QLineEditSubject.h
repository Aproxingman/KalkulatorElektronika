
#include <QApplication>
#include <vector>
#include <QLineEdit>
#include "observer.h"
using namespace std;

class QLineEditSubject
{
private:
    vector<Observer*> list_obs;

public:
    void attach(Observer *_observer);
    void detach(Observer *_observer);
    void notify(QString text);
};
