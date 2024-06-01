#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<int> st;
        string s;
        int cnt = 0;
        cin >> s;
        for (int c : s)
        {

            if (st.empty())
            {
                st.push(c);
            }
            else if (!st.empty())
            {
                if (st.top() != c)
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}