#include<bits/stdc++.h>
using namespace std;
void isPrime(int n);
int main()
{
    int lower,higer;
    cin>>lower>>higer;
    for(int i=lower;i<=higer;i++)
    {
        isPrime(i);
    }
    return 0;
}
void isPrime(int n)
{
    
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<n<<" ";
    }
}