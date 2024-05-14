#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int pointer = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[pointer] = nums[i];
            pointer++;
        }
    }
    return pointer;
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

    cout << removeDuplicates(arr) << endl;
    return 0;
}