#include <bits/stdc++.h>
using namespace std;

int lps(string s)
{
    // Your code goes here
    vector<int> lpsVec(s.size(), 0);
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if (s[pre] = s[suf])
        {
            lpsVec[suf] = pre + 1;
            suf++, pre++;
        }
        else
        {
            if (pre == 0)
            {
                lpsVec[suf] = 0;
                suf++;
            }
            else
            {
                pre = lpsVec[pre - 1];
            }
        }
    }

    return lpsVec[s.size() - 1];
}

int main()
{
    string str;
    cin >> str;
    cout << lps(str) << endl;
    return 0;
}