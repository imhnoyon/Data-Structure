#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int cnt = 0;
        string max;
        while (ss >> word)
        {

            mp[word]++;
            if (mp[word] > cnt)
            {
                max =word;
                cnt = mp[word];
            }
        }

        cout << max << " " << cnt << endl;
    }

    return 0;
}