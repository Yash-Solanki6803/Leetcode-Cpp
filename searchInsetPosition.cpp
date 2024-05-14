#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1, mid, ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;

    int key;
    cin >> key;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << searchInsert(arr, key) << endl;
    return 0;
}