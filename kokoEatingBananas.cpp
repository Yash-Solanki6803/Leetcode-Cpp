#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int start = 1, end = piles[0], mid = -1, ans = -1;
    for (int i = 0; i < n; i++)
    {
        start = min(start, piles[i]);
        end = max(end, piles[i]);
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // cout << "mid:" << mid << "s:" << start << " e:" << end << endl;

        int reqHrs = 0;
        for (int i = 0; i < n; i++)
        {
            reqHrs += piles[i] / mid;
            if (piles[i] % mid != 0)
                reqHrs++;
            // cout << reqHrs << endl;
        }
        if (reqHrs <= h)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minEatingSpeed(arr, h) << endl;

    return 0;
}