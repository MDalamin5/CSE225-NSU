#include "unsortedtype.cpp"
#include "studentInfo.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    UnsortedType<int> obj;
    obj.InsertItem(4);
    obj.InsertItem(2);
    obj.DeleteItem(2);
    obj.PrintData();

    studentInfo st1(15234 ,"Jon" ,2.6);
    studentInfo st2(13732, "Tyrion" ,3.9);
    studentInfo st3(13569, "Sandor", 1.2);
    studentInfo st4(15467, "Ramsey", 3.1);
    studentInfo st5(16285, "Arya", 3.1);

    UnsortedType<studentInfo> obj2;
    obj2.InsertItem(st1);
    obj2.InsertItem(st2);
    obj2.InsertItem(st3);
    obj2.InsertItem(st4);
    obj2.InsertItem(st5);

    //studentInfo temp=13569;
    bool found;
    //obj2.RetrieveItem(temp, found);
    
    
}
