#include <iostream>
    using namespace std;
    int main()
    {
        int num[4];
        int* p;
        p = num;
        *p = 10;
        *(++p) = 20;
        p = &num[2];
        *p = 30;
        *(++p) = (*p)++;
        //p = num;
        //*(p + 4) = 50;
        for (int i = 0; i < 4; i++)
            cout << num[i] << ", ";
        return 0;
}
