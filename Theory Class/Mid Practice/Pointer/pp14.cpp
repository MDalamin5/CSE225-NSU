#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p1 = &arr[0];
    int* p2 = &arr[4];

    *p1 = (*p1) * 2;
    *p2 = (*p2) * 3;
    p1 += 1;
    p2 -= 1;
    *p1 = (*p2) + 10;

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
