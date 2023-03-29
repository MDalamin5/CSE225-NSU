#include <iostream>
using namespace std;
int main()
{
    int num[4] = {1, 2, 3, 4};
    int* p = num;
    *(p + 2) = (*p)++ + (*p)++ + *(p + 2);
    p += 2;
    *(p--) = *(p + 1) - *(p - 1);
    p = num + 1;
    *(p++) = *(p + 1) * 2 + *(p - 1);
    *(p--) = *(p - 1) * 3 - *(p + 1);

    for (int i = 0; i < 4; i++) {
        cout << num[i] << " ";
    }

    return 0;
}
