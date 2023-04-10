#include "sortedtype.cpp"
#include <bits/stdc++.h>
using namespace std;
class timeStamp
{
public:
    int seconds;
    int minutes;
    int hours;
    timeStamp(int seconds, int minutes, int hours)
    {
        this->seconds = seconds;
        this->minutes = minutes;
        this->hours = hours;
    }
};
int main()
{
    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);
    SortedType<timeStamp> ob;
    ob.InsertItem(t1);
    cout << t1.seconds << endl;
    cout << "code is working" << endl;
}