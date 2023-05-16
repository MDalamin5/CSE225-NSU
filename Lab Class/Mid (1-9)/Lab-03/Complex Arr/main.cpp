#include "complex.cpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    Complex cp1(2.2,2.2);
    Complex cp2(3.2,3.3);

    Complex mul = cp1*cp2;
    if(cp1!=cp2)
    {
        cout<<"Not equal"<<endl;
    }
    else
    cout<<"Yes Equal"<<endl;
    
    mul.Print();

}