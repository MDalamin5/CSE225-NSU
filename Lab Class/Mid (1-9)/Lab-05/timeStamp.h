

class timeStamp
{
public:
    timeStamp();
    timeStamp(int, int, int);
    void print();
    int getHours();
    int getMinutes();
    int getSeconds();
    bool operator!=(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);


private:
    int seconds, minutes, hours;

};
