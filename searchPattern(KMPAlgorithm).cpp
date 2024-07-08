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

vector<int> search(string pat, string txt)
{
    vector<int> ans;
    vector<int> lps(pat.size(), 0);
    lpsFunc(lps, pat);

    // first iterates txt , and second for pat
    int first = 0, second = 0;

    while (first < txt.size() && second < pat.size())
    {
        cout << "While" << endl;
        if (txt[first] == pat[second])
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

        if (second == pat.size())
        {
            ans.push_back(first - second + 1);
            second = lps[second - 1];
        }
    }

    cout << endl;
    return ans;
}

int main()
{
    string text, pat;
    cin >> text >> pat;

    vector<int> ans;
    ans = search(pat, text);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}