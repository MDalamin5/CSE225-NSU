#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    char ch;
    cout<<"Enter your oprator: ";
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<(double)num1/num2;
        break;
        default:
        cout<<"Your input is invalid"<<endl;
    }
}