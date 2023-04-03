#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5
class Queue
{
 public:
    int arr[MAX_SIZE];
    int l,r,size;
    Queue()
    {
        l=0;
        r=-1;
        size=0;
    }
    void enQueue(int data)
    {
        if(size==MAX_SIZE)
        {
            cout<<"Queue is Full sir!"<<endl;
            return;
        }
        r++;
        if(r==MAX_SIZE)
        {
            r=0;
        }
        arr[r]=data;
        size++;
    }
    void deQueue()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        l++;
        if(l==MAX_SIZE)
        {
            l=0;
        }
        size--;
    }
    int top()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[l];
    }
    int getSize()
    {
        return size;
    }
};
#define MAX_SIZE 500
class Stack
{
    public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size=0;
    }
    //void push add elements in stack
    void push(int data)
    {
        stack_size+= 1;
        if(stack_size>MAX_SIZE)
        {
            cout<<"Stack is Full!";
            return;
        }
        a[stack_size-1]=data;
    }

    //delete top most elements
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stsck is Empty!";
            return;
        }
        a[stack_size-1]=0;
        stack_size--;
    }
    //return top elements 
    int top()
    {
        if(stack_size==0)
        {
            cout<<"Stsck is Empty!"<<endl;
            return -1;
        }
        return a[stack_size-1];

    }
};
int main()
{
    
}