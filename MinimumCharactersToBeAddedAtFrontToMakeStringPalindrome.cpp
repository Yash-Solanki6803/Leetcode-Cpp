#include <bits/stdc++.h>
using namespace std;

int minChar(string str)
{
    string rev = str;

    reverse(rev.begin(), rev.end());
    int size = str.size(); // original size

    str += '$'; // separator
    str += rev; // Reverse

    // Calculate LPS
    int n = str.size();
    vector<int> lps(n, 0);

    int pre = 0, suf = 1;

    while (suf < n)
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
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }

    return size - lps[n - 1];
}

int main()
{
    string str;
    cin >> str;

    cout << minChar(str) << endl;
    return 0;
}