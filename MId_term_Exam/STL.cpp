#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> linked_list;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        linked_list.push_back(v);

        cout << "Linked List:: ";
        for (auto i : linked_list)
        {
            cout << i << " ";
        }
        cout << endl;

        linked_list.reverse();

        cout << "Reverse list:: ";
        for (auto i : linked_list)
        {

            cout << i << " ";
        }
        cout << endl;
        linked_list.reverse();
    }

    return 0;
}
