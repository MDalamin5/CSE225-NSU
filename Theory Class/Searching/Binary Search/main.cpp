#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int high= n-1;
    int low=0;
    
    bool resut= false;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==target)
        {
            //cout<<"Yea Found";
            resut = true;
            break;
        }
        if(arr[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    if(resut)
    {
        cout<<"yea Found";
    }
    else
    cout<<"Sorry Not Found";
    
}