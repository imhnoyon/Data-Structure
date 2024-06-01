#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int> mp;
  
     string name;
     int x;
     cin>>name>>x;
     mp.insert({name,x});

     for(auto it=mp.begin();it !=mp.end();it++)
     {
        cout<<it->first<<" "<<it->second;
     }
  

  return 0;
}