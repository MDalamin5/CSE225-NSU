#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Your array size: ";
    cin>>n;
    int *a = new int[n];
    cout<<"Enter YOur elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    delete [] a;
}