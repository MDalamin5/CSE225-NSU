#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);
    queue<char> q1;
    queue<char> q2;
    queue<char> result;
    
    for (int i = 0; i < input1.length(); i++)
    {
        q1.push(input1[i]);
    }
    for (int i = 0; i < input2.length(); i++)
    {
        q2.push(input2[i]);
    }

    int min_size = min(q1.size(), q2.size());
    int max_size = max(q1.size(), q2.size());
    for (int i = 0; i < min_size; i++)
    {
        result.push(q1.front());
        q1.pop();
        result.push(q2.front());
        q2.pop();
    }

    int left_size = max_size - min_size;
    for (int i = 0; i < left_size; i++)
    {
        if (q1.size() > q2.size())
        {
            result.push(q1.front());
            q1.pop();
        }
        else if (q2.size() > q1.size())
        {
            result.push(q2.front());
            q2.pop();
        }
    }

    int res_size = result.size();
    for (int i = 0; i < res_size; i++)
    {
        cout << result.front() << " ";
        result.pop();
    }
}