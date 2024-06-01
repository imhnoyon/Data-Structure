#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        cin.ignore();
        map<string, int> mp;

        string a, word;
        getline(cin, a);

        stringstream ss(a);
        int max = 0;
        string maxs;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                maxs = word;
            }
        }

        cout << maxs << " " << max << endl;
    }

    return 0;
}
