#include <bits/stdc++.h>
using namespace std;

 int main()
{
    list<int> mylist = {10, 20, 30, 40,30,30, 50};
    list<int>mylist2 ={100,200,300};

    // mylist.push_back(100);// tail a insert kore
    
    // mylist.push_front(500);// head a insert kore

    // mylist.pop_back(); //tail a delete kore

    // mylist.pop_front(); // head a delete kore

    // mylist.insert(next(mylist.begin(),3),mylist2.begin(),mylist2.end());// jekono position a insert kore value

    // mylist.erase(next(mylist.begin(),2)); // jekono position a delete kora value 

    // replace(mylist.begin(),mylist.end(),30,100);  // jekono value ke replace kore 

    auto it= find(mylist.begin(),mylist.end(),40);
      
      if(it == mylist.end())
      {
         cout<<"Not found";
      }
      else
      {
        cout<<"found";
      }

      
    

    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }
    return 0;
}