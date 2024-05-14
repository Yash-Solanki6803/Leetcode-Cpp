#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

    int start = 0, end = nums.size() - 1, mid;
    vector<int> res(2);
    res[0] = -1;
    res[1] = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            res[0] = mid;
            end = mid - 1;
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
    start = 0;
    end = nums.size() - 1;

    // finding last position
    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            res[1] = mid;
            start = mid + 1;
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
    return res;
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

    vector<int> res;
    res = searchRange(arr, key);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}