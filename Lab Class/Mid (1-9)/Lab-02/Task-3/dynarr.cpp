#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;

dynArr :: dynArr()
{
    data=NULL;
    size=0;
}
dynArr :: dynArr(int row, int col)
{
    data = new int *[row];
    for(int i=0;i<row;i++)
    {
        data[i]= new int[col];
    }
}
dynArr :: ~dynArr()
{
    delete [] data;
}
void dynArr :: setValue(int value, int index1,int index2)
{
    data[index1][index2]=value;
}
int dynArr :: getValue(int index1,int index2)
{
    return data[index1][index2];
}

void dynArr :: allocate(int row, int col)
{
    dynArr :: ~ dynArr();
    data = new int *[row];
    for(int i=0;i<row;i++)
    {
        data[i]= new int[col];
    }
}