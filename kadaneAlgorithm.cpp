#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sumTillNow = 0, maxTillNow = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sumTillNow += arr[i];
        maxTillNow = max(maxTillNow, sumTillNow);
        if (sumTillNow < 0)
        {
            sumTillNow = 0;
        }
    }
    return maxTillNow;
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
    cout << maxSubarraySum(arr, n) << endl;
    return 0;
}