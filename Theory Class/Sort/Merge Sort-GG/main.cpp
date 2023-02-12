#include<bits/stdc++.h>
using namespace std;
void MergeSort(int arr[],int begin,int end);
void Merge(int arr[],int left,int mid,int right);
void printArray(int arr[],int sz);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    MergeSort(arr,0,n-1);
    printArray(arr,n);
}
void MergeSort(int arr[],int begin,int end)
{
    if(begin>=end)
    return;

    int mid=begin+(end-begin)/2;
    MergeSort(arr,begin,mid);
    MergeSort(arr,mid+1,end);
    Merge(arr,begin,mid,end);
    //cout<<"Hi sort call"<<endl;

}
void Merge(int arr[],int left,int mid,int right)
{
    //cout<<"hello i'm marge loop"<<endl;
    int ar1=mid-left+1;
    int ar2=right-mid;

    int subArr1[ar1];
    int subArr2[ar2];
    for(int i=0;i<ar1;i++)
    {
        subArr1[i]=arr[i];
    }
    for(int i=ar1,j=0;i<right+1;i++)
    {
        subArr2[j++]=arr[i];
    }
    //printArray(subArr1,ar1);
    //printArray(subArr2,ar2);

    int indx1=0,indx2=0;
    for(int i=0;i<right+1;i++)
    {
        //cout<<"I'm in sort loop"<<endl;
        if(indx1==ar1)
        {
             arr[i]=subArr2[indx2++];
        }
        else if(indx2==ar2+1)
        {
             arr[i]=subArr1[indx1++];
        }
        else if(subArr1[indx1]<subArr2[indx2])
        {
            arr[i]=subArr1[indx1++];
        }
        else
        {
            arr[i]=subArr2[indx2++];
        }
    }
    printArray(subArr1,ar1);
    printArray(subArr2,ar2);
}
void printArray(int arr[],int sz)
{
    cout<<endl;
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}