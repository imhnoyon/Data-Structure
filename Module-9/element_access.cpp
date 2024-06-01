#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30, 40, 50};
    //   cout<<mylist.back();
    // cout << mylist.front(); 

    cout<<*next(mylist.begin(),2);
    return 0;
}