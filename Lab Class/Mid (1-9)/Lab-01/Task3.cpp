#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;

    int **a = new int *[row];
    vector<int>v(row);
    cout<<"Enter the value of column for each row: "<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the value of "<<i<<" Cloumn: ";
        cin>>v[i];
        a[i]= new int [v[i]];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<v[i];j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Printig Elements: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<v[i];j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}