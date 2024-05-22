#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int i = 0, left_max = height[0], sum = 0;
    int j = height.size() - 1, right_max = height[j];
    while (i < j)
    {
        if (left_max <= right_max)
        {
            sum += (left_max - height[i]);
            i++;
            left_max = std::max(left_max, height[i]);
        }
        else
        {
            sum += (right_max - height[j]);
            j--;
            right_max = std::max(right_max, height[j]);
        }
    }
    return sum;
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
    cout << trap(arr) << endl;
    return 0;
}