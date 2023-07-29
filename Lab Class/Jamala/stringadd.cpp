#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input1, input2;
    getline(cin,input1);
    getline(cin, input2);
     queue<char> q1;
    queue<char>q2;
    queue<char>result;
    cout<<input1.size()<<endl;
    cout<<input2.length()<<endl;
    for(int i =0; i<input1.length();i++)
    {
        q1.push(input1[i]);
        //cout<<input1[i]<<" ";
    }
    for(int i =0; i<input2.length();i++)
    {
        q2.push(input2[i]);
        //cout<<input2[i]<<" ";
    }
    cout<<endl<<endl;
 
//  int q1_size = q1.size();
//  for(int i=0;i<q1_size;i++)
//    {
//     cout<<q1.front()<<" ";
//     q1.pop();
//    }

//    int q2_size = q2.size();
//    for(int i=0;i<q2_size;i++)
//    {
//     cout<<q2.front()<<" ";
//     q2.pop();
//    }

   for(int i=0;i<5;i++)
   {
    result.push(q1.front());
      q1.pop();
      result.push(q2.front());
      q2.pop();
   }
   //cout<<"HElo";
   for(int i=0;i<10;i++)
   {
    cout<<result.front()<<" ";
    result.pop();
   }


   
}