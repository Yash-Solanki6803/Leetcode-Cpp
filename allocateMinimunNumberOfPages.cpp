#include <bits/stdc++.h>
using namespace std;

int findPages(int arr[], int n, int M)
{
    int start = 0;
    int end = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    int mid = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        cout << "start:" << start << " end:" << end << " mid:" << mid << endl;
        int count = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "sum for i=" << i << " : " << sum + arr[i] << endl;
            if (sum + arr[i] > mid)
            {
                cout << "if statement exec" << endl;
                count++;
                sum = arr[i];
            }
            else
            {
                sum += arr[i];
            }
        }
        if (count <= M)
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
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findPages(arr, n, m) << endl;
    return 0;
}