#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int size);
void printArray(int arr[],int size);
int main()
{
    int *array = new int [5];
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    bubbleSort(array,5);
    printArray(array,5);
    delete [] array;
}
void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}