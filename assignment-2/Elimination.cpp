#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else if (c == '1')
            {
                if (st.empty())
                {
                    st.push(c);
                }
                else
                {
                    if (st.top() == '0')
                    {
                        st.pop();
                    }
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
