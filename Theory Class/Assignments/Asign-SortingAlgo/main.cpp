#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[]);
void insertionSort(int arr[]);
void selectionSort(int arr[]);
void MergeSort(int arr[],int begin,int end);
void Merge(int arr[],int left,int mid,int right);
void printArray(int arr[]);

#define size 200000
int main()
{
    clock_t start_t,end_t;
    srand(time(0));
    int array[size];
    for(int i=0;i<size;i++)
    {
        array[i]=rand()%1000;
    }
    
    start_t=clock();
    //bubbleSort(array);
    end_t=clock();
    cout<<"Time required for Bubble Sort: "<<(double)(end_t-start_t)/CLOCKS_PER_SEC<<" s\n";
    
    start_t=clock();
    //insertionSort(array);
    end_t=clock();
    cout<<"Time required for Insertion Sort: "<<(double)(end_t-start_t)/CLOCKS_PER_SEC<<" s\n";

    start_t=clock();
    //selectionSort(array);
    end_t=clock();
    cout<<"Time required for Selection Sort: "<<(double)(end_t-start_t)/CLOCKS_PER_SEC<<" s\n";

    start_t=clock();
    MergeSort(array,0,size-1);
    end_t=clock();
    cout<<"Time required for Merge Sort: "<<(double)(end_t-start_t)/CLOCKS_PER_SEC<<" s\n";

   // printArray(array);
}
//User Define Function.
void bubbleSort(int arr[])
{
    for(int i=0;i<size;i++)
    {
        bool sorted=true;
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
        }
        if(sorted)
        break;
    }
}
void insertionSort(int arr[])
{
    for(int i=1;i<size;i++)
    {
        int indx=i;
        while(indx>=1)
        {
            if(arr[indx]<arr[indx-1])
            {
                swap(arr[indx],arr[indx-1]);
                indx--;
            }
            else 
            break;
        }
    }
}
void selectionSort(int arr[])
{   
    for(int i=0;i<size;i++)
    {
        int minn=arr[i];
        int min_index=0;
        bool flag= false;
        for(int j=i;j<size;j++)
        {
            if(arr[j]<minn)
            {
                minn=arr[j];
                min_index=j;
                flag=true;
            }
        }
        if(flag)
        {
            swap(arr[i],arr[min_index]);
        }
    }
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
void printArray(int arr[])
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}