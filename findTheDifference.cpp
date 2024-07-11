#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t)
{
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 0)
        {
            return 'a' + i;
        }
    }
    return -1;
}

int main()
{
    string s, t;
    cin >> s >> t;

    cout << findTheDifference(s, t) << endl;
    return 0;
}