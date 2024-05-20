#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());
    int start = 1, end = stalls[n - 1], mid = -1, ans = -1;
    if (n < k)
        return ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // cout << "s:" << start << " e:" << end << " mid:" << mid << endl;
        int cowsAllocated = 1, prevAllocatedCow = 0;
        for (int i = 1; i < n; i++)
        {
            if (cowsAllocated == k)
                break;
            if (stalls[i] - stalls[prevAllocatedCow] >= mid)
            {
                cowsAllocated++;
                prevAllocatedCow = i;
            }
        }
        if (cowsAllocated < k)
        {
            // cout << "cows not allocated:" << k - cowsAllocated << endl;
            end = mid - 1;
        }
        else if (cowsAllocated == k)
        {
            ans = mid;
            // cout << "ans found:" << ans << endl;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n, k, arr) << endl;
    return 0;
}