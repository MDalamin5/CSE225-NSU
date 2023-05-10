#include <iostream>
#include "stacktype.cpp"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    StackType<int> st;

    if(st.IsEmpty())
    {
        cout<< "Stack  is Empty"<<endl;
    }
    else
    {
        cout<< "Stack  is not Empty"<<endl;
    }

    //push data
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if(st.IsEmpty())
    {
        cout<< "Stack  is Empty"<<endl;
    }
    else
    {
        cout<< "Stack  is not Empty"<<endl;
    }

     if(st.IsFull())
    {
        cout<< "Stack  is Full"<<endl;
    }
    else
    {
        cout<< "Stack  is not Full"<<endl;
    }

     StackType<int> Temp;
     for(int i=0;i<4;i++)
     {
         Temp.Push(st.Top());
         st.Pop();
     }

     for(int i=0;i<4;i++)
     {
         cout<<Temp.Top()<< " ";
         st.Push(Temp.Top());
         Temp.Pop();
     }
cout<<endl;


 st.Push(3);

 StackType<int> Temp2;
     for(int i=0;i<5;i++)
     {
         Temp2.Push(st.Top());
         st.Pop();
     }

     for(int i=0;i<5;i++)
     {
         cout<<Temp2.Top()<< " ";
         st.Push(Temp2.Top());
         Temp2.Pop();
     }
cout<<endl;

 if(st.IsFull())
    {
        cout<< "Stack  is Full"<<endl;
    }
    else
    {
        cout<< "Stack  is not Full"<<endl;
    }

    st.Pop();
    st.Pop();
    cout<< st.Top();


    return 0;
}
