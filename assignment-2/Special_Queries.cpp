#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (cmd == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }

    return 0;
}