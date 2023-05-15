#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;

dynArr :: dynArr()
{
    data=NULL;
    size=0;
}
dynArr :: dynArr(int size)
{
    data = new int[size];
    this->size=size;
}
dynArr :: ~dynArr()
{
    delete [] data;
}
void dynArr :: setValue(int value, int index)
{
    data[index]=value;
}
int dynArr :: getValue(int index)
{
    return data[index];
}

void dynArr :: allocate(int s)
{
    dynArr :: ~ dynArr();
    data = new int [s];
}