#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.capacity() << endl;
    v.push_back(40);
    cout << v.capacity() << endl;
    v.push_back(50);
    cout << v.capacity() << endl;
    // v.clear();
    cout<<v.size()<<endl;
    // cout<<v[1];
     v.resize(3);
     v.resize(6,200);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}