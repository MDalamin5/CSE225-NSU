#include "dynarr.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    dynArr ob(5);
    ob.setValue(0,1);
    ob.setValue(1,2);
    cout<<ob.getValue(1);
}