#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size() - 1, mid, prevIdx = 0;
    if (arr[0] > k)
        return k;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        cout << mid << endl;
        if ((arr[mid] - mid - 1) < k)
        {
            prevIdx = mid + k;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return (prevIdx + 1);
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

    cout << findKthPositive(arr, 2) << endl;
    return 0;
}