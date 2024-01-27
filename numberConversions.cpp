#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int num)
{
    int ans = 0;
    int power = 1;
    while (num > 0)
    {
        int last_bit = (num & 1);
        ans += power * last_bit;
        power *= 10;
        num = num >> 1;
    }
    return ans;
}

int decimalToOctal(int num)
{
    int ans = 0;
    int power = 1;

    while (num > 0)
    {
        int last_bit = (num & 7);

        ans += power * last_bit;
        power *= 10;
        num = num >> 3;
    }

    return ans;
}

string decimalToHexadecimal(int num)
{
    string ans = "";
    int power = 1;

    while (num > 0)
    {
        int last_bit = (num & 15);
        if (last_bit <= 9)
        {
            ans += to_string(last_bit);
        }
        else
        {
            ans += 'A' + last_bit - 10;
        }
        num = num >> 4;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int binaryToDecimal(int num)
{
    int ans = 0;
    int power = 1;

    while (num > 0)
    {
        int last_bit = num % 10;
        ans += power * last_bit;
        power *= 2;
        num /= 10;
    }

    return ans;
}

int octalToDecimal(int num)
{
    int ans = 0;
    int power = 1;

    while (num > 0)
    {
        int last_bit = num % 10;
        ans += power * last_bit;
        power *= 8;
        num /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string num)
{
    int ans = 0;
    int power = 1;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if (num[i] >= 'A')
        {
            ans += power * (num[i] - 'A' + 10);
        }
        else
        {
            ans += power * (num[i] - '0');
        }
        power *= 16;
    }

    return ans;
}

int main()
{
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n) << endl;
    return 0;
}