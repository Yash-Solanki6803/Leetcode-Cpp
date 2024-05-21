#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int start = 0, end = n - 1;

    while (start < end)
    {
        int sum = numbers[start] + numbers[end];
        if (sum == target)
        {
            return {start + 1, end + 1};
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return {-1, -1};
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
    vector<int> res;
    res = twoSum(arr, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}