#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int> mp;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      string name;
      int x;
      cin>>name>>x;
      mp.insert({name,x});
   }
//    mp["Noyon"]=100;
//    mp["Mahedi"]=200;
//    mp["Hasan"]=300;

   // dekhte chaile iterator use korte hbe
   for(auto it=mp.begin();it !=mp.end();it++)
   {
     cout<<it->first<<"-"<<it->second<<endl;
   }
  return 0;
}