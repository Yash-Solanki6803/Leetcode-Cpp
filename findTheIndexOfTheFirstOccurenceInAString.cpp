#include <bits/stdc++.h>
using namespace std;

void lpsFunc(vector<int> &lps, string str)
{
    int pre = 0, suf = 1;

    while (suf < str.size())
    {
        if (str[pre] == str[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int strStr(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFunc(lps, needle);

    int first = 0, second = 0;

    while (first < haystack.size() && second < needle.size())
    {
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
    }
    if (second == needle.size())
    {
        return first - second;
    }

    return -1;
}

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    cout << strStr(haystack, needle) << endl;
    return 0;
}