#include "unsortedtype.h"
#include <bits/stdc++.h>
using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    if (length == MAX_ITEMS)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType data)
{
    info[length] = data;
    length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType data)
{
    int location = 0;
    for (int i = 0; i < length; i++)
    {
        if (data == info[i])
        {
            info[i] = info[length - 1];
            length--;
            break;
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::PrintData()
{
    for (int i = 0; i < length; i++)
    {
        cout << info[i] << " ";
    }
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        if (item == info[location])
        {
            found = true;
            item = info[location];
        }
        else
        {
            location++;
            moreToSearch = (location < length);
        }
    }
}