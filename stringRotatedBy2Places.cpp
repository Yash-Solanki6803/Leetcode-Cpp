#include <bits/stdc++.h>
using namespace std;

void rotateClockwise(string &str)
{
    int n = str.size();
    char last_char = str[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        str[i] = str[i - 1];
    }
    str[0] = last_char;
}

void rotateAnticlockwise(string &str)
{
    int n = str.size();
    char first_char = str[0];
    for (int i = 0; i < n - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[n - 1] = first_char;
}

bool isRotated(string str1, string str2)
{
    string clockwise = str1, anticlockwise = str1;
    rotateClockwise(clockwise);
    rotateClockwise(clockwise);
    rotateAnticlockwise(anticlockwise);
    rotateAnticlockwise(anticlockwise);
    if (clockwise == str2 || anticlockwise == str2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << isRotated(str1, str2) << endl;

    return 0;
}