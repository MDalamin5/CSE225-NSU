#include <iostream>
#include "box.h"
using namespace std;

int main()
{
    Box object1(10, 20, 1);
    cout << "Volume: " << object1.getVolume() << endl;


    return 0;
}
