#include "stacktype.h"
#include <bits/stdc++.h>

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newData)
{
    if (IsFull())
    {
        throw FullStack();
    }
    else
    {
        NodeType *newNode = new NodeType;
        newNode->info = newData;
        newNode->next = topPtr;
        topPtr = newNode;
    }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        NodeType *tempPtr = topPtr;
        topPtr = tempPtr->next;
        delete tempPtr;
    }
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
        return topPtr->info;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
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
StackType<ItemType>::~StackType()
{
    NodeType *tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
