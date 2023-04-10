#include "sortedtype.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    SortedType<int> ob1;
    ob1.InsertItem(15);
    ob1.InsertItem(34);
    ob1.InsertItem(23);
    ob1.InsertItem(13);
    ob1.InsertItem(13);
    ob1.InsertItem(02);
    ob1.InsertItem(43);
    ob1.InsertItem(45);
    ob1.InsertItem(12);
    ob1.InsertItem(25);
    ob1.InsertItem(36);
    ob1.InsertItem(17);
    ob1.InsertItem(25);
    ob1.InsertItem(02);
    ob1.InsertItem(20);
    for(int i=0;i<ob1.LengthIs();i++)
    {
        int temp;
        ob1.GetNextItem(temp);
        cout<<temp<<" ";
        if(i%3==0 && i!=0)
        cout<<endl;
    }
   // cout<<"Code is Working";
}