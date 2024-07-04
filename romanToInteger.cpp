#include <bits/stdc++.h>
using namespace std;

int Num(char s)
{
    switch (s)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;

    default:
        return 0;
        break;
    }
}

int romanToInt(string s)
{
    int n = s.size(), ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (Num(s[i]) < Num(s[i + 1]))
        {
            ans -= Num(s[i]);
        }
        else
        {
            ans += Num(s[i]);
        }
    }

    ans += Num(s[n - 1]);

    return ans;
}

int main()
{
    string str;
    cin >> str;

    cout << romanToInt(str);
    return 0;
}