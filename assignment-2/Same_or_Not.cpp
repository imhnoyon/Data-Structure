#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;

    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag = true;
    if (st.size() == q.size())
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }

            st.pop();
            q.pop();
        }
        if (flag == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}