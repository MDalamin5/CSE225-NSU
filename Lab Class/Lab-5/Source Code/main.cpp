

#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

template <class T>
void Print(SortedType<T> u){                     // Helper function to Print the list

    int length = u.LengthIs();
    T value;

    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}
template <class T>
void Retrieve(SortedType<T> u, T value){         // Helper function to Retrieve an item
    bool b;
    u.RetrieveItem(value,b);

    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}
void checkFull(bool b){                          // Helper function to check if the list is full
    if(b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main(){

    // First Task
    SortedType<int> st;                          // Creating an object of SortedType class

    cout << st.LengthIs() << endl;               // Print length of the list

    st.InsertItem(5);                            // Insert five items 5, 7, 4 ,2, 1
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    Print(st);                                   // Print the list

    Retrieve(st,6);                              // Retrieve 6 and print whether found or not
    Retrieve(st,5);                              // Retrieve 5 and print whether found or not

    checkFull(st.IsFull());                      // Print if the list is full or not

    st.DeleteItem(1);                            // Delete 1

    Print(st);                                   // Print the list

    checkFull(st.IsFull());                      // Print if the list is full or not


    // Second Task
    timeStamp t1(15, 34, 23);                    // Creating objects of timeStamp class with the given information
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    SortedType<timeStamp> timeStampList;         // Creating an object of SortedType class
    timeStampList.InsertItem(t1);                // Inserting the objects in the list
    timeStampList.InsertItem(t2);
    timeStampList.InsertItem(t3);
    timeStampList.InsertItem(t4);
    timeStampList.InsertItem(t5);

    timeStamp temp(25, 36, 17);                  // Creating a temporary object to search for the given time
    timeStampList.DeleteItem(temp);              // Deleting the item from the list

    // Printing the list
    for (int i = 0; i < timeStampList.LengthIs(); i++) {
        timeStampList.GetNextItem(temp);
        cout << temp << endl;
    }

    return 0;
}