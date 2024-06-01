#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int> mylist(10,5);
//   mylist.clear();
  mylist.resize(5);
  mylist.resize(10,10);

  for(int val:mylist)
  {
    cout<<val<<endl;
  }
  return 0;
}