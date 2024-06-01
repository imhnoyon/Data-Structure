#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 50, 10, 60, 10, 70};
    //   mylist.remove(10); // sob dublicate value delete kore

    mylist.sort(); // sort kore value

    // mylist.sort(greater<int>());// boro theke chuto sort kore 


    // mylist.unique();  // dublicate value delete kore sort thakle


    // mylist.reverse();
    

    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}