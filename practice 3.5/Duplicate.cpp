#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int count=0;
    int i = 0;
    int j = n ;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                break;
            }
        }
    }

    if (count==0)
    {
         cout << "NO" << endl;

    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}