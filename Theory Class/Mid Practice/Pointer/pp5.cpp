#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int* p = &arr[3];

    *p = 100;
    *(p-1) = *(p+1) - 10;
    p -= 2;
    *p = 50;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
