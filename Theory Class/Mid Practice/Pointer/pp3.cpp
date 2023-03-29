#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr;

    *p = *(p+1) + 1;
    *(p+3) = *p + *(p+2);
    p += 2;
    *p = 10;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
