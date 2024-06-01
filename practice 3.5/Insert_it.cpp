#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n;
  vector<int> v1(n);
  
  for(int i=0;i<n;i++)
  {
    cin>>v1[i];
  }
  cin>>x;
  vector<int> v2(x);
  for(int i=0;i<x;i++)
  {
    cin>> v2[i];
  }
  int value;
  cin>>value;
  v1.insert(v1.begin()+value,v2.begin(),v2.end());
  for(int i=0;i<n+x;i++)
  {
    cout<<v1[i]<<" ";
  }
  return 0;
}