#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int start = 0, end = n - 1, mid = -1, ans = nums[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        cout << mid << ":" << ans << endl;
        if (nums[mid] <= ans && mid != 0)
        {
            ans = nums[mid];
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findMin(arr) << endl;
    return 0;
}