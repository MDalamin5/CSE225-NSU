
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **arr = new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= new int [n];
    }

    for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {

        cout<< "arr[" << i << "] [" << j<<"]= ";
        cin>>arr[i][j];

    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
       cout<<*(arr[i]+j)<<" ";
    }
    cout<<"\n";
}
bool res=true;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(*(arr[(i)]+j)!= *(arr[(j)]+i))
        {
            res=false;
        }
    }
}
if(res)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}

    
}
/*
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

bool isSymmetric(int matrix[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // check if aij = aji
            if (*(matrix[i] + j) != *(matrix[j] + i)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // get input
    cout << "Enter size of matrix (n): ";
    cin >> n;
    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> *(*(matrix + i) + j);
        }
    }

    // check if matrix is symmetric
    if (isSymmetric(matrix, n)) {
        cout << "Matrix is symmetric" << endl;
    } else {
        cout << "Matrix is not symmetric" << endl;
    }

    return 0;
}
*/