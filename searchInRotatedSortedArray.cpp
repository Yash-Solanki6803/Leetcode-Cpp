#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = 0, end = n - 1, mid = -1;
    while (start <= end)
    {
        int n = nums.size();
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            // if mid points the target
            if (nums[mid] == target)
                return mid;

            // if left part is sorted:
            if (nums[start] <= nums[mid])
            {
                if (nums[start] <= target && target <= nums[mid])
                {
                    // element exists:
                    end = mid - 1;
                }
                else
                {
                    // element does not exist:
                    start = mid + 1;
                }
            }
            else
            { // if right part is sorted:
                if (nums[mid] <= target && target <= nums[end])
                {
                    // element exists:
                    start = mid + 1;
                }
                else
                {
                    // element does not exist:
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << search(arr, target) << endl;
    return 0;
}