#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int length = 0;

    vector<bool> isAlreadyPresent(256, 0);
    int first = 0, second = 0;

    while (second < s.size())
    {
        if (isAlreadyPresent[s[second]] == true)
        {
            while (isAlreadyPresent[s[second]] == true)
            {
                isAlreadyPresent[s[first]] = false;
                first++;
            }
        }
        isAlreadyPresent[s[second]] = true;
        length = max(length, second - first + 1);
        second++;
    }

    return length;
}

int main()
{
    string str;
    cin >> str;

    cout << lengthOfLongestSubstring(str);
    return 0;
}