#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<char> st;
  string s;
  cin >> s;
  for (char c : s)
  {
    st.push(c);
  }
  stack<char> st2;

  while (!st.empty())
  {
    st2.push(st.top());
    st.pop();
  }

  while (!st2.empty())
  {
    cout << st2.top() << " ";
    st2.pop();
  }

  // stack<char>st3;
  // for (char c:s)
  // {
  //   st3.push(c);
  // }
  // while (!st3.empty())
  // {
  //   cout << st3.top() << " ";
  //   st3.pop();
  // }
  // cout << endl;

  return 0;
}