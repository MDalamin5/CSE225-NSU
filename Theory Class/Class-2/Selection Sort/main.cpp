#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>sortA;
    for(int i=0;i<n;i++)
    {
        int minn=a[0];
        int index=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<minn)
            {
                minn=a[j];
                index=j;
            }
        }
        sortA.push_back(minn);
        a[index]=99999;

    }
    for(int i=0;i<n;i++)
    cout<<sortA[i]<<" ";
}