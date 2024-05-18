#include <bits/stdc++.h>
using namespace std;

long long minTime(int arr[], int n, int k)
{
    if (n < k)
        return -1;
    int start = 0;
    long long mid = -1, ans = -1, end = 0;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        cout << "start:" << start << " end:" << end << " mid:" << mid << endl;
        long long sum = 0;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            cout << "sum for i=" << i << " : " << sum + arr[i] << endl;
            sum += arr[i];
            if (sum > mid)
            {
                cout << "if statement exec" << endl;
                count++;
                sum = arr[i];
            }
        }

        if (count <= k)
        {
            cout << "ans found " << mid << endl;
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << minTime(arr, n, k) << endl;
    return 0;
}