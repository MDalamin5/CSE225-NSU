#include<bits/stdc++.h>
#include "quetype.cpp"
using namespace std;
int main()
{
    //queue implementation form Scrch

     QueType<string>bin;
     int n;
     cout<<"How Many Binary Number YOu want: ";
     cin>>n;
        bin.Enqueue("1");
        cout<<"Binary Represntation of "<<0<<": "<<"0"<<endl;
        for(int i=1;i<=n;i++)
        {
            string temp;
            bin.Dequeue(temp);
             cout<<"Binary Represntation of "<<i<<": "<<temp<<endl;
             bin.Enqueue(temp+"0");
             bin.Enqueue(temp+"1");
        }

    //Queue implementation from STL 
    /*
    queue<string>bin;
    cout<<"Enter the value of N: ";
    int n;
    cin>>n;
    bin.push("1");
    cout<<"Binary Represntation of "<<0<<": "<<"0"<<endl;
    for(int i=1;i<=n;i++)
    {
        string temp = bin.front();
        cout<<"Binary Represntation of "<<i<<": "<<temp<<endl;
        bin.pop();
        bin.push(temp+"0");
        bin.push(temp+"1");
    }
    */
}