#include <bits/stdc++.h>
using namespace std;

void twoSum(int nums[], int size, int target)
{
    int n = size;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    cout << -1; //
}

int main()
{
    int nums[] = {2, 7, 11, 15};

    twoSum(nums, 4, 13);
    return 0;
}