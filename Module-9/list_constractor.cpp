#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   list<int>mylist(5,10);
    list<int> v(10,100);
    // list<int> mylist2 = {10, 20, 30, 40, 50};
    list<int> mylist(v.begin(),v.end());

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // shortcut iterator

     for(int value:mylist)
     {
        cout<<value<<" ";
     }

    return 0;
}