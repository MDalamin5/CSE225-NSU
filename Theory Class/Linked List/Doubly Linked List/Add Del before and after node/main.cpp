#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int key;
    Node* next;
    Node* prev;
    Node(int key){
        this->key = key;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void pushFront(Node* newNode){
    if(head==NULL){ // you are adding the first node
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    newNode->prev = NULL;
    head->prev = newNode;
    head = newNode;
    return;
}

void popBack(){

    if(head==NULL){
        cout << "Empty List. cannot Pop!" << endl;
        return;
    }


    if(head==tail){ // only one node in the list
        Node* temp = tail;
        head = tail = NULL;
        delete temp;
        return;
    }
    Node* temp = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    delete temp;
}

void print(){
    Node* cur = head;
    while(cur!=NULL){
        cout << cur -> key << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main(){

    pushFront(new Node(10)); // 10
    pushFront(new Node(20)); // 20 -> 10
    pushFront(new Node(30)); // 30 -> 20 -> 10

    print();

    popBack(); // 30 -> 20

    print();

    popBack(); // 30

    print();

    popBack(); // NULL

    print();

    popBack();


    return 0;
}