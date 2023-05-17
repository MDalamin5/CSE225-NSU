#include "timeStamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    hours = minutes = seconds = 0;
}

timeStamp::timeStamp(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

int timeStamp::getHours()
{
    return hours;
}

int timeStamp::getMinutes()
{
    return minutes;
}

int timeStamp::getSeconds()
{
    return seconds;
}

void timeStamp::print()
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

bool timeStamp::operator!=(timeStamp t)
{
    if(hours != t.getHours())
        return true;
    else
        return false;
}

bool timeStamp::operator>(timeStamp t)
{
    if(hours > t.getHours())
        return true;
    else
        return false;
}


bool timeStamp::operator<(timeStamp t)
{
    if(hours < t.getHours())
        return true;
    else
        return false;
}
