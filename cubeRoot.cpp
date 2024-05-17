#include <bits/stdc++.h>
using namespace std;

int cubeRoot(int n)
{

    if (n < 3)
    {
        return 1;
    }
    int start = 0, end = n / 3, ans;
    long long mid = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid * mid <= (n))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << cubeRoot(n) << endl;
    return 0;
}