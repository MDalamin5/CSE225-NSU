#include <iostream>
using namespace std;
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int* p = &num[1];
    *p++ = 5;
    *(p + 1) = 100;
    *p = *(p + 2) - *(p - 1);
    *(++p) = *(p - 1) + 1;
    *(--p) = (*p)++ - 1;
    *(p + 2) = (*p)++ + *(p + 1);

    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    return 0;
}
