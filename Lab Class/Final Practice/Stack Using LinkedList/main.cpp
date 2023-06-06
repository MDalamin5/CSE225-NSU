#include<bits/stdc++.h>
#include "stacktype.cpp"
using namespace std;
int main()
{
    StackType<char>st;
    string str;
    cout<<"Enter Your Input: ";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        char now = str[i];
        if(now=='(' || now=='{' || now=='[')
        {
            st.Push(now);
        }
        else
        {
            if(st.IsEmpty())
            {
                cout<<"Invelid Breacked Sequnce"<<endl;
                return 0;
            }
            else if(now==')' && st.Top()=='(')
            {
                st.Pop();
            }
            else if(now=='}' && st.Top()=='{')
            {
                st.Pop();
            }
            else if(now==']' && st.Top()=='[')
            {
                st.Pop();
            }
            else
            {
                cout<<"Invelid data"<<endl;
                return 0;
            }
        }
    }
    if(st.IsEmpty())
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Invalid baia"<<endl;
    }
}