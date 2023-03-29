#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr;

    *p = *(p+4) * 2;
    *(p+1) = *(p+3) + 10;
    *(p+2) = 20;
    *(p+3) = *(p+1) - *(p+4);
    *(p+4) = 50;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
