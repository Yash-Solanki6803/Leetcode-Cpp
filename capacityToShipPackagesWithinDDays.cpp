#include <bits/stdc++.h>
using namespace std;
int shipWithinDays(vector<int> &weights, int days)
{
    int n = weights.size();
    int start = 0, end = 0, mid = -1, ans = -1;
    for (int i = 0; i < n; i++)
    {
        start = max(start, weights[i]);
        end += weights[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int sum = 0, usedDays = 1;
        for (int i = 0; i < n; i++)
        {
            sum += weights[i];
            if (sum > mid)
            {
                usedDays++;
                sum = weights[i];
            }
        }
        if (usedDays <= days)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
    }
    return ans;
}
int main()
{
    int n, days;
    cin >> n >> days;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << shipWithinDays(arr, days) << endl;
    return 0;
}