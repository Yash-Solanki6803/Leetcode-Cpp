#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }

    return false;
}

string sortVowels(string s)
{
    int n = s.size();
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            // check capital
            //  'Z' < 'a'
            if (s[i] - 'a' < 0)
            {
                upper[s[i] - 'A']++;
            }
            else
            {
                lower[s[i] - 'a']++;
            }
            s[i] = '#';
        }
    }

    // creating a string of sorted vowels
    string sortedVowelsOnly = "";
    for (int i = 0; i < 26; i++)
    {
        char c = i + 'A';
        while (upper[i])
        {
            sortedVowelsOnly += c;
            upper[i]--;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        while (lower[i])
        {
            sortedVowelsOnly += c;
            lower[i]--;
        }
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            s[i] = sortedVowelsOnly[counter];
            counter++;
        }
    }

    return s;
}

int main()
{
    string str;
    cin >> str;

    cout << sortVowels(str) << endl;
    return 0;
}