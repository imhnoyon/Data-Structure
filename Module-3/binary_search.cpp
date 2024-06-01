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
    int x;
    cin >> x;
    int l = 0, r = n - 1, mid;
    bool flag = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ar[mid] == x)
        {
            flag = true;
            break;
        }
        if (ar[mid] > x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}