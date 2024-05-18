#include <bits/stdc++.h>
using namespace std;

int splitArray(int arr[], int N, int K)
{
    int start = 0, end = 0, mid = -1, ans = -1;
    for (int i = 0; i < N; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int generatedSubArr = 1, sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
            if (sum > mid)
            {
                generatedSubArr++;
                sum = arr[i];
            }
        }
        if (generatedSubArr <= K)
        {
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    cout << splitArray(arr, n, k) << endl;
    ;
    return 0;
}