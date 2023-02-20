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
    

}
void Merge(int arr[],int left,int mid,int right)
{
   int subArrayOne= mid-left+1;
   int subArrayTwo= right-mid;
   int *Larray= new int [subArrayOne];
   int *Rarry= new int [subArrayTwo];

   for(int i=0;i<subArrayOne;i++)
   {
    Larray[i]=arr[left+i];
   }
   for(int j=0;j<subArrayTwo;j++)
   {
    Rarry[j]=arr[mid+1+j];
   }

int indexOfSubArrayOne=0,indexOfSubArrayTwo=0;
int indexOfMergedArray=left;
while(indexOfSubArrayOne<subArrayOne && indexOfSubArrayTwo<subArrayTwo)
{
    if(Larray[indexOfSubArrayOne]<=Rarry[indexOfSubArrayTwo])
    {
        arr[indexOfMergedArray]=Larray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
    }
    else
    {
        arr[indexOfMergedArray]=Rarry[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
    }
    indexOfMergedArray++;
}
while(indexOfSubArrayOne<subArrayOne)
{
    arr[indexOfMergedArray]=Larray[indexOfSubArrayOne];
    indexOfMergedArray++;
    indexOfSubArrayOne++;
}
while(indexOfSubArrayTwo<subArrayTwo)
{
    arr[indexOfMergedArray]=Rarry[indexOfSubArrayTwo];
    indexOfMergedArray++;
    indexOfSubArrayTwo++;
}
delete [] Larray;
delete [] Rarry;

}
void printArray(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}