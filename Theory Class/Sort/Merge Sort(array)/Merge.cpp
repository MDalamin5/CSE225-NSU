#include<bits/stdc++.h>
using namespace std;
void marge(int l,int mid,int h);
int main()
{
    int arra[6]={1,3,5,7,8,9};
    int low= 0;
    int high=6;
    int mid= low+(high-low)/2;
    int left[mid];
    int right[high-mid];
    for(int i=0;i<mid;i++)
    {
        left[i]=arra[i];
    }
    for(int i=mid,j=0;i<6;i++)
    {
        right[j++]=arra[i];
    }

   /*
   for(int i=0;i<mid;i++)
    {
        cout<<left[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<high-mid;i++)
    {
       cout<<right[i]<<" ";
    }
   */
  int indx1=0,indx2=0;
  for(int i=0;i<6;i++)
  {
    if(indx1==mid)
    {
         arra[i]=right[indx2++];
    }
    else if(indx2==(6-mid))
    {
        arra[i]=left[indx1++];
    }
    else if(left[indx1]<right[indx2])
    {
        arra[i]=left[indx1++];
    }
    else
    {
        arra[i]=right[indx2++];
    }
  }

  for(int i=0;i<6;i++)
    {
       cout<<arra[i]<<" ";
    }
}