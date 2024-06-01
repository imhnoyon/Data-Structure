#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int count=0;
        for (int i = 0; i < n-1 ; i++)
        {
            if(ar[i]>ar[i+1])
            {
                count=1;
                break;
            }
        }
        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}