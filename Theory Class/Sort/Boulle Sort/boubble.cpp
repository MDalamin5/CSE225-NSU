#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}