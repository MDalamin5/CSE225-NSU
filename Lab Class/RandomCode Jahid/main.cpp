#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"
using namespace std;

//function that prints a Queue of integers
void printQueue(QueType<int>& obj)
{
    QueType<int> temp;
    int t;

    for(int i = 0; i < 10; i++)
    {
        obj.Dequeue(t);
        cout << t << "\t";
        temp.Enqueue(t);
    }
    cout << endl << endl;
    for(int i = 0; i < 10; i++)
    {
        temp.Dequeue(t);
        obj.Enqueue(t);
    }
}

int main()
{
    QueType<int> a;
    a.Enqueue(10);
    a.Enqueue(20);
    a.Enqueue(30);
    a.Enqueue(40);
    a.Enqueue(50);
    a.Enqueue(60);
    a.Enqueue(70);
    a.Enqueue(80);
    a.Enqueue(90);
    a.Enqueue(100);

    printQueue(a);

    int n = 5; //value of n could be anything from 0 to 10

    //write your code below
StackType<int>stk;
    for(int i=0;i<n;i++)
    {

        int temp;
        a.Dequeue(temp);
        stk.Push(temp);
    }
    for(int i=0;i<n;i++)
    {
        cout<<stk.Top()<< " \t";
        stk.Pop();
    }
    for(int i=0;i<10-n;i++)
    {
        int temp;
        a.Dequeue(temp);
        cout<<temp<< " \t";
    }





    return 0;
}
