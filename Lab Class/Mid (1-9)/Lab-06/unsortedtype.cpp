#include "unsortedtype.h"
#include <iostream>
using namespace std;
template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc &exception)
    {
        return true;
    }
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType *newNode = new NodeType;
    newNode->info=item;
    newNode->next=NULL;
    if(listData==NULL)
    {
        listData=newNode;
        length++;
        return;
    }
    newNode->next=listData;
    listData=newNode;
    length++;
    return;
    
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType *location;
    NodeType *tempLocation;
    location = listData;

    if(item==listData->info)
    {
        tempLocation=listData;
        listData=location->next;
        length--;
        delete tempLocation;
        return;
    }
    NodeType *cur_pos = listData->next;
    while(cur_pos->info!=item)
    {
        cur_pos=cur_pos->next;
        location=location->next;
    }
    location->next=cur_pos->next;
    delete cur_pos;
    length--;
    return;
    

}
template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found)
{
    found = false;
    NodeType *a=listData;
    while(a!=NULL)
    {
        if(a->info==item)
        {
            found=true;
            break;
        }
        a=a->next;
    }
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType * tempLocation;
    while(listData!=NULL)
    {
        tempLocation = listData;
        listData=listData->next;
        delete tempLocation;
    }
    length=0;
}
template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}
template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item)
{
    if(currentPos==NULL)
    {
        currentPos=listData;
    }
    else
    currentPos=currentPos->next;
    item=currentPos->info;
}
