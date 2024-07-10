#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{

    if (numRows <= 1)
        return s;

    vector<string> v(numRows, "");

    int j = 0, dir = -1;

    for (int i = 0; i < s.length(); i++)
    {

        if (j == numRows - 1 || j == 0)
            dir *= (-1);

        v[j] += s[i];

        if (dir == 1)
            j++;

        else
            j--;
    }

    string res;

    for (auto &it : v)
        res += it;

    return res;
}

int main()
{
    string str;
    cin >> str;

    int nums;
    cin >> nums;

    cout << convert(str, nums) << endl;
    return 0;
}