#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={10,20,30,40,50};
  vector<int> v2={60,70,80,90,100};
  v.insert(v.begin()+5,v2.begin(),v2.end());
//   v.pop_back();
  for(int x:v)
  {
     cout<<x<<" ";
  }
  return 0;
}