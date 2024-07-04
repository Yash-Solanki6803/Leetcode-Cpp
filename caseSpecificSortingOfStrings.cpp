#include <bits/stdc++.h>
using namespace std;

string lowerSort(string str, int n)
{
    vector<int> lower(26, 0);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' and str[i] <= 'z')
        {
            lower[str[i] - 'a']++;
            str[i] = '#';
        }
    }

    string temp = "";

    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        while (lower[i])
        {
            temp += ch;
            lower[i]--;
        }
    }

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
        {
            str[i] = temp[counter];
            counter++;
        }
    }

    return str;
}

string upperSort(string str, int n)
{
    vector<int> upper(26, 0);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' and str[i] <= 'Z')
        {
            upper[str[i] - 'A']++;
            str[i] = '#';
        }
    }

    string temp = "";

    for (int i = 0; i < 26; i++)
    {
        char ch = 'A' + i;
        while (upper[i])
        {
            temp += ch;
            upper[i]--;
        }
    }

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
        {
            str[i] = temp[counter];
            counter++;
        }
    }

    return str;
}

string caseSort(string str, int n)
{
    // your code here
    str = lowerSort(str, n);
    str = upperSort(str, n);

    return str;
}

int main()
{
    string str;
    cin >> str;

    cout << caseSort(str, str.size()) << endl;

    return 0;
}