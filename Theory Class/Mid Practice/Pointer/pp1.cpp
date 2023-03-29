#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = arr;

    *(ptr + 2) = *(ptr + 1) + *(ptr + 3);
    ptr += 4;
    *ptr = *ptr - 10;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
