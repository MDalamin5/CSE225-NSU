#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main() {

    int row, col, input;
    dynArr d(5, 5);                              // Object initialization of "dynarr" class with arguments

    cin >> row >> col;                           // Taking and storing specified input array sizes
    d.allocate(row, col);                        // Allocating "row" and "col" sized array on "d" object

    for (int i = 0; i < row; i++) {              // Taking and storing "size" number of input values to "d" object
        for (int j = 0; j < col; j++) {
            cin >> input;
            d.setValue(i, j, input);
        }
    }
    for (int i = 0; i < row; i++) {              // Printing all the values stored on "d" object
        for (int j = 0; j < col; j++) {
            cout << d.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}