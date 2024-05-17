#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int start = 1, end = x / 2, mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid <= x / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << mySqrt(n) << endl;

    return 0;
}