#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class timeStamp
{
public:
    int hours;
    int minutes;
    int seconds;

    timeStamp(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void print() const
    {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }
};

int main()
{
    vector<timeStamp> timestamps = {
        timeStamp(23, 34, 15),
        timeStamp(2, 13, 13),
        timeStamp(12, 45, 43),
        timeStamp(17, 36, 25),
        timeStamp(20, 2, 52)};

    timestamps.erase(timestamps.begin() + 3);

    for (const auto &ts : timestamps)
    {
        ts.print();
    }

    return 0;
}
