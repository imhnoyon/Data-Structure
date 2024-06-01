#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     q.push(x);
  }
  stack<int> st;
  int k;
  while(!q.empty())
  {
    k=q.front();
    q.pop();
    st.push(k);
  }
  queue<int>q2;
  int s;
  while(!st.empty())
  {
     s=st.top();
     st.pop();
     q2.push(s);
  }

  while(! q2.empty())
  {
    cout<<q2.front()<<" ";
    q2.pop();
  }

  return 0;
}