#include <bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if (ch == ')' || ch == '}' || ch == ']')
    {
        return 1;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    string input;
    cin >> input;
    stack<char> st;
    string ans = "";
    for (int i = 0; i < input.size(); i++)
    {
        char now = input[i];
        if(now>='a' && now<='z')
        {
            ans +=now;
        }
        else
        {
            while(st.size() && prec(now)<=prec(st.top()) )
            {
                ans +=st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while(st.size())
    {
        ans +=st.top();
        st.pop();
    }
    cout<<ans<<endl;
}