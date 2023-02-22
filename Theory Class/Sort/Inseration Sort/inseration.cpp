#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int coutntt=0;
    for(int i=1;i<n;i++)
    {
        int index=i;
        while(index>=1)
        {
            if(a[index]<a[index-1])
            {
                swap(a[index],a[index-1]);
                coutntt++;
                index--;
            }
            else
            break;
        }
       
    }
    cout<<coutntt<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}