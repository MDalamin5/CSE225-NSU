#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
class LinkedList
{
    public:
    node *head;
    int size;

    LinkedList()
    {
        head=NULL;
        size=0;
    }
    node *createNewNode(int data)
    {
        node *newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node *a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
            size++;
        }
        else
        {
            a->next=head;
            head= a;
            size++;
        }
        
    }
    void travers()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(25);
    l.travers();
    cout<<l.getSize()<<endl;
}