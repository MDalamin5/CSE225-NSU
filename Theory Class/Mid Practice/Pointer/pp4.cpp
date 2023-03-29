#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr + 2;

    *p = 100;
    *(p+1) = *(p-1) + *(p+2);
    *(p+3) = 500;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
