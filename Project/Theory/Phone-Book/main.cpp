#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int contact_id;
    string name;
    string phone_no;
    node *next;
};
class phoneBook
{
    public:
    node *head;
    node *tail;
    int size;
    phoneBook()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    //create a new node function
    node *createNewNode(int contact_id, string name, string phone_no)
    {
        node *newNode = new node;
        newNode->contact_id=contact_id;
        newNode->name=name;
        newNode->phone_no=phone_no;
        newNode->next=NULL;
        return newNode;
    }
    //add contact method start
    void addNewContact(int contact_id, string name, string phone_no)
    {
        node *a = createNewNode(contact_id, name, phone_no);
        if(head==NULL)
        {
            head= a;
            tail=a->next;
            size++;
        }
        else
        {
            a->next=head;
            head=a;
            tail=a->next;
            size++;
        }
    }
    //add contact method start end

    //Contact search Method start
    void findContac()
    {
        /*
        3 option will be avilable
        1. search by name;
        2. search bu contact id
        3. search by phone number
        */

    }
    void searchByName()
    {

    }
    void searchByContactID()
    {

    }
    void searchByPhoneNo()
    {

    }
    //contact search method end

    //all contact travers method start
    void displayAllContact()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->contact_id<<" "<<a->name<<" "<<a->phone_no<<endl;
            a=a->next;
        }
        cout<<endl;
    }
    //all contact travers method end

    // delet method start
    void eraseContact()
    {
        cout<<"which contact you want to delete"<<endl;
        cout<<"Enter contact name"<<endl;
        //delete contact by name, id, phone number
    }
    //delete method end

    //Contact Modeify Method start
    void modifyContact()
    {

    }
    //contack modeify Method end
};

int main()
{
    phoneBook pb;
    pb.addNewContact(12344, "Al Amin","01641049759");
    pb.addNewContact(12343, "Kay sar","01641049758");
    pb.addNewContact(12342, "AbuShin","01641049757");
    pb.addNewContact(12341, "Rubel h","01641049756");
    pb.displayAllContact();
}