#include <bits/stdc++.h>
using namespace std;
bool isProduct(int arr[], int n, long long x)
{
    // Handle the special case where x is 0
    if (x == 0)
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 0)
                return true;
        }
        return false;
    }

    std::unordered_set<long long> seen;
    for (int i = 0; i < n; ++i)
    {
        // Check if arr[i] is a valid factor of x
        if (x % arr[i] == 0)
        {
            long long target = x / arr[i];
            if (seen.find(target) != seen.end())
            {
                return true;
            }
            seen.insert(arr[i]);
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long x;
    cin >> x;

    cout << isProduct(arr, n, x) << endl;
    return 0;
}