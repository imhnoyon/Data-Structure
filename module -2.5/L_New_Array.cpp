#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    v2.insert(v2.begin() + n, v1.begin(), v1.end());
    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}
