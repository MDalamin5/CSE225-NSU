#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr + 1;

    *p = *(p-1) * 2;
    *(p+1) = *p + *(p+2);
    p += 2;
    *(p+1) = *(p-1) * 2;
    p -= 1;
    *(p-1) = *(p+1) - *(p-2);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
