#include<bits/stdc++.h>
using namespace std;
vector<int>Searching(vector<int>a, int target);
int main()
{
    int n,S_value;
    cin>>n>>S_value;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>result= Searching(a, S_value);
    for(int i=0;i<result.size();i++)
    cout<<result[i]<<" ";
}
vector<int>Searching(vector<int>a, int target)
{
    int high=a.size()-1;
    int low= 0;
    int first_index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            first_index=mid;
            high=mid-1;
        }
        if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    int last_index=-1;
    high=a.size()-1;
    low=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            last_index=mid;
            low=mid+1;
        }
        if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    vector<int>res;
    res.push_back(first_index);
    res.push_back(last_index);
    return res;

}