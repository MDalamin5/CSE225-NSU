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
    void insertAtAnyIndex(int index, int data)
    {
        if(index>size-1 || index<0)
        {
            cout<<"invalid Index! index outOfBound"<<endl;
            return;
        }
        if(index==0)
        {
            insertAtHead(data);
            return;
        }
        node *a = head;
        int cur_ind=0;
        while(cur_ind!=index-1)
        {
            a=a->next;
            cur_ind++;
        }
        node *newNode = createNewNode(data);
        newNode->next=a->next;
        a->next=newNode;
        size++;
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
    l.insertAtHead(30);
    l.insertAtAnyIndex(1,55);
    l.insertAtAnyIndex(4,33);
    l.travers();
    cout<<"Size of Linked list: "<<l.getSize()<<endl;
}