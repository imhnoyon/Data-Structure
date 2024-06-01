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
    stack<int> st2;
    int k;
    while (!st.empty())
    {
        k = st.top();
        st.pop();
        st2.push(k);
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    return 0;
}