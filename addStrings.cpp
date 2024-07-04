#include <bits/stdc++.h>
using namespace std;

string add(string num1, string num2)
{
    int index1 = num1.size() - 1, index2 = num2.size() - 1;
    int sum, carry = 0;
    string ans;
    // index2>=0
    while (index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = sum % 10 + '0';
        ans = c + ans;
        index2--, index1--;
    }

    // index1>=0
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = sum % 10 + '0';
        ans = c + ans;
        index1--;
    }

    if (carry > 0)
    {
        char c = carry + '0';
        ans = c + ans;
    }

    return ans;
}

string addStrings(string num1, string num2)
{
    if (num1.size() > num2.size())
        return add(num1, num2);
    else
        return add(num2, num1);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << addStrings(s1, s2);
    return 0;
}