#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int countt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                countt++;
                swap(a[j+1],a[j]);
                
            }
        }
    }
    cout<<countt<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}