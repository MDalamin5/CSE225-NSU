#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int high);
void merGe(int arr[],int low,int mid,int high);
int main()
{
    int n;
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++)
    cin>>data[i];

    mergeSort(data,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    

}
void mergeSort(int arr[],int low,int high)
{
    if(high<=1)
    return;
//cout<<"Hello"<<" ";
    int mid= low+(high-mid)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merGe(arr,low,mid,high);
}
void merGe(int arr[],int low,int mid,int high)
{
    
    int left[mid];
    int right[high-mid];
    for(int i=0;i<mid;i++)
    {
        left[i]=arr[i];
    }
    for(int i=mid,j=0;i<high;i++)
    {
        right[j++]=arr[i];
    }

    int indx1=0,indx2=0;
  for(int i=0;i<high;i++)
  {
    if(indx1==mid)
    {
         arr[i]=right[indx2++];
    }
    else if(indx2==(high-mid))
    {
        arr[i]=left[indx1++];
    }
    else if(left[indx1]<right[indx2])
    {
        arr[i]=left[indx1++];
    }
    else
    {
        arr[i]=right[indx2++];
    }
  }
}