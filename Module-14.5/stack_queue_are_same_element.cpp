#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    int cnt = 0;
    if (st.size() == q.size())
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                cnt = 1;
                break;
            }
            st.pop();
            q.pop();
        }
        if (cnt == 0)
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