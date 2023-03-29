#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* p1 = &arr[0];
    int* p2 = &arr[5];

    *(p1+3) = (*p2) * 2;
    *(p2-2) = (*p1) + 5;
    p1 += 2;
    p2 -= 2;
    *(p1+1) = (*p2) * 3;

    for(int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
