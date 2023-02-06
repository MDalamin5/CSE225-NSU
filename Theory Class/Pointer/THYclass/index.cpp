#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p;
    *p=2;
    cout<<*p;
}