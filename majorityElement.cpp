#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = 0, votes = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = nums[i];
                }
        if (nums[i] == candidate)
        {
            votes++;
        }
        else
        {
            votes--;
        }
    }

    int count;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    if (count >= n / 2)
        return candidate;
    else
        return -1;
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
    cout << majorityElement(arr) << endl;
    return 0;
}