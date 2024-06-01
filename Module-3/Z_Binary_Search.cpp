#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    while (q--)
    {
        int value;
        cin >> value;
         bool flag = false;
        int left = 0, right = n - 1, mid;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (ar[mid] == value)
            {
                flag = true;
                break;
            }
            if (ar[mid] < value)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}