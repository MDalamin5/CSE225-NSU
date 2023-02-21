#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={16,18,12,14,10};
    
    for(int i=0;i<5-1;i++)
    {
        int min=a[i];
        int index=0;
        bool flag = false;
        for(int j=i;j<5;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                index=j;
                flag=true;
            }
        }
        if(flag)
        {
            swap(a[i],a[index]);
        }
    }
    for(int x:a)
    cout<<x<<" ";
}