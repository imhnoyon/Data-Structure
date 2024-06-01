#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={10 ,20 ,30 ,40, 30, 50, 30};
  replace(v.begin(),v.end(),30,100);
  for(int x:v)
  {
    cout<<x<<" ";
  }

  return 0;
}