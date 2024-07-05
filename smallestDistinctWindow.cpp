#include <bits/stdc++.h>
using namespace std;

int findSubString(string str)
{
    int length = str.size();
    vector<int> count(256, 0);
    int uniqueCharacters = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (count[str[i]] == 0)
        {
            uniqueCharacters++;
        }
        count[str[i]]++;
    }

    for (int i = 0; i < 256; i++)
        count[i] = 0;

    int first = 0, second = 0;
    while (second < str.size())
    {
        while (uniqueCharacters > 0 && second < str.size())
        {
            if (count[str[second]] == 0)
            {
                uniqueCharacters--;
            }
            count[str[second]]++;
            second++;
        }
        length = min(length, second - first);

        while (uniqueCharacters == 0)
        {
            length = min(length, second - first);
            if (count[str[first]] == 1)
            {
                uniqueCharacters++;
            }
            count[str[first]]--;
            first++;
        }
    }
    return length;
}
int main()
{
    string str;
    cin >> str;

    cout << findSubString(str);
    return 0;
}