#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    string result;
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
            result += "[.]";
        else
            result += address[i];
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    cout << defangIPaddr(str);
    return 0;
}