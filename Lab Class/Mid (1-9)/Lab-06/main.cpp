#include "unsortedtype.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
   UnsortedType<int> ob;
   ob.InsertItem(3);
   ob.InsertItem(4);
   ob.InsertItem(5);
   ob.DeleteItem(4);
   int temp;
   ob.GetNextItem(temp);
   cout<<temp<<endl;
   int temp1;
   ob.GetNextItem(temp1);
   cout<<temp1<<endl;
   bool found;
   int data=10;
   ob.RetrieveItem(data,found);
   cout<<found;
}

//Main file 2:

/*
#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main() {

    UnsortedType<int> list1, list2, merged;      // Create three lists

    int n, v;                                    // Taking inputs for list1
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        list1.InsertItem(v);
    }

    cin >> n;                                    // Taking inputs for list2
    for (int i = 0; i < n; i++) {
        cin >> v;
        list2.InsertItem(v);
    }

    int value1, value2;
    int index1 = list1.LengthIs();
    int index2 = list2.LengthIs();
    list1.GetNextItem(value1);
    list2.GetNextItem(value2);

    while (index1 > 0 && index2 > 0) {           // Merging the lists
        if (value1 > value2) {
            merged.InsertItem(value1);
            index1--;
            if (index1 > 0)
                list1.GetNextItem(value1);
        } else if (value2 > value1) {
            merged.InsertItem(value2);
            index2--;
            if (index2 > 0)
                list2.GetNextItem(value2);
        } else {
            merged.InsertItem(value1);
            merged.InsertItem(value2);
            index1--;
            index2--;
            if (index1 > 0)
                list1.GetNextItem(value1);
            if (index2 > 0)
                list2.GetNextItem(value2);
        }
    }

    while (index1 > 0) {                         // Adding the remaining elements of list1
        merged.InsertItem(value1);
        index1--;
        if (index1 > 0)
            list1.GetNextItem(value1);
    }

    while (index2 > 0) {                         // Adding the remaining elements of list2
        merged.InsertItem(value2);
        index2--;
        if (index2 > 0)
            list2.GetNextItem(value2);
    }

    int value_merged;
    int index_merged = merged.LengthIs() - 1;

    while (index_merged >= 0) {                  // Printing the merged list
        merged.GetNextItem(value_merged);
        cout << value_merged << ' ';
        index_merged--;
    }
    cout << endl;

    return 0;
}

*/