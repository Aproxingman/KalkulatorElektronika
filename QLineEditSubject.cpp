#include "QLineEditSubject.h"
#include <algorithm>

using namespace std;

void QLineEditSubject::attach(Observer *_observer)
{
    list_obs.push_back(_observer);
}

void QLineEditSubject::detach(Observer *_observer)
{
    list_obs.erase(std::remove(list_obs.begin(), list_obs.end(), _observer), list_obs.end());
}

void QLineEditSubject::notify(QString text)
{
    for(vector<Observer*>::const_iterator iter = list_obs.begin(); iter != list_obs.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->update(text);
        }
    }
}
