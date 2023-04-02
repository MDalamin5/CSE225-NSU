#include <bits/stdc++.h>
using namespace std;

int insertionSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            swaps++; // increment swap count
        }
        arr[j + 1] = key;
    }
    return swaps;
}

int main() {
    int arr[] = {6, 5, 3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int swaps = insertionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of Swaps: " << swaps << endl;

    return 0;
}
