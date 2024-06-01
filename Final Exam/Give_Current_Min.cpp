#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }


    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            int ans = pq.top();
            cout << ans << endl;
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                int ans = pq.top();
                cout << ans << endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if (cmd == 2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                
                int ans = pq.top();
                cout << ans << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else 
        {
            cout<<"Empty"<<endl;
        }
    }

    return 0;
}