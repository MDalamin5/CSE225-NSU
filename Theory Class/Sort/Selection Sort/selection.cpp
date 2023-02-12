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
        int minn=a[i];
        int index=0;
        bool flag= false;
        for(int j=i;j<n;j++)
        {
            if(a[j]<minn)
            {
                minn=a[j];
                index=j;
                flag=true;
            } 
        }
        
         if(flag==true)
          swap(a[i],a[index]);  
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}