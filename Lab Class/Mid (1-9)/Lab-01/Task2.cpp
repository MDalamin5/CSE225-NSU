#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter the value of row and coloum: ";
    cin>>row>>col;
    
    char **a = new char *[row];
    for(int i=0;i<row;i++)
    {
        a[i]= new char [col];
    }
    cout<<"Enter elements: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Your Element is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}