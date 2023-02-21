#include<bits/stdc++.h>
using namespace std;
void inserationSort(int a[],int size);
int main()
{
    int a[5]={16,18,12,14,10};
    inserationSort(a,5);
    for(int x:a)
    cout<<x<<" ";
}
void inserationSort(int a[],int size)
{
    for(int i=1;i<size;i++)
    {
        int index=i;
        while(index>=1)
        {
            if(a[index]<a[index-1])
            {
                swap(a[index],a[index-1]);
                index--;
            }
            else
            {
                break;
            }
        }
    }
}