#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n, greater<int>());

    
    int x;
    cin >> x;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == x)
        {
            cout << ar[i];
        }
    }

    return 0;
}