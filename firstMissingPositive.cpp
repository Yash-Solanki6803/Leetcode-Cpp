#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();

    // Step 1: Replace non-positive numbers and numbers larger than n with n+1
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= 0 || nums[i] > n)
        {
            nums[i] = n + 1;
        }
    }

    // Step 2: Use the index as a hash to mark presence of numbers
    for (int i = 0; i < n; i++)
    {
        int num = abs(nums[i]);
        if (num <= n)
        {
            nums[num - 1] = -abs(nums[num - 1]);
        }
    }

    // Step 3: Find the first positive number
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            return i + 1;
        }
    }

    return n + 1;
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

    cout << firstMissingPositive(arr) << endl;
    return 0;
}