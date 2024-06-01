#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v; type 1
    // vector<int> v2(5,10); type 2
    // vector<int> v(v2); type 2
    vector<int> v = {10, 20, 30, 40};// type 3

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();
    return 0;
}