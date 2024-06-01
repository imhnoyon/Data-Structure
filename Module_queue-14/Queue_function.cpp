#include<bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> l;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     l.push(x);
  }
//  cout<< l.size();
  while (!l.empty())
  {
     cout<<l.front()<<" ";
     l.pop();
  }
  return 0;
}