#include <bits/stdc++.h>
using namespace std;

int maxDistance(vector<int> &position, int m)
{
    sort(position.begin(), position.end());
    int n = position.size();
    int start = 1, end = position[n - 1], mid = -1, ans = -1;
    if (n < m)
        return ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int distributedBalls = 1, prevBallPos = 0;
        for (int i = 1; i < n; i++)
        {
            if (distributedBalls == m)
                break;
            if (position[i] - position[prevBallPos] >= mid)
            {
                distributedBalls++;
                prevBallPos = i;
            }
        }
        if (distributedBalls < m)
        {
            // cout << "cows not allocated:" << k - distributedBalls << endl;
            end = mid - 1;
        }
        else if (distributedBalls == m)
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxDistance(arr, m) << endl;
    return 0;
}