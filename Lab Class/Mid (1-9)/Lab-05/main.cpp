#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

int main()
{

    SortedType<int> obj;
    cout << obj.LengthIs() << endl;

    obj.InsertItem(5);
    obj.InsertItem(7);
    obj.InsertItem(4);
    obj.InsertItem(2);
    obj.InsertItem(1);

    int temp;

    for(int i = 0; i < obj.LengthIs(); i++)
    {
        obj.GetNextItem(temp);
        cout << temp;
    }
    cout << endl;

    obj.ResetList();


    bool found;

    temp = 6;
    obj.RetrieveItem(temp, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;


    temp = 5;
    obj.RetrieveItem(temp, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;


    if(obj.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    obj.DeleteItem(1);

    for(int i = 0; i < obj.LengthIs(); i++)
    {
        obj.GetNextItem(temp);
        cout << temp;
    }
    cout << endl;

    obj.ResetList();

    if(obj.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;



    cout << endl << endl;

    //timeStamp

    timeStamp t1(15, 34, 23), t2(13, 13, 02), t3(43, 45, 12), t4(25, 36, 17), t5(52, 02, 20);

    SortedType<timeStamp> obj2;
    obj2.InsertItem(t1);
    obj2.InsertItem(t2);
    obj2.InsertItem(t3);
    obj2.InsertItem(t4);
    obj2.InsertItem(t5);

    obj2.DeleteItem(t4);

    timeStamp temporary;

    for(int i = 0; i < obj2.LengthIs(); i++)
    {
        obj2.GetNextItem(temporary);
        temporary.print();
    }
    cout << endl;

    obj2.ResetList();


    return 0;
}
