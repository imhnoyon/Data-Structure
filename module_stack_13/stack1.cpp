#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>myStack;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      myStack.push(x);
   }
   while(!myStack.empty())
   {
     cout<<myStack.top()<<" ";
     myStack.pop();
   }
  return 0;
}