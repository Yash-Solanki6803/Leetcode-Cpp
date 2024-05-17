#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid = -1, firstOcc = -1, lastOcc = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            firstOcc = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0;
    end = n - 1;

    // finding last position
    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            lastOcc = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (firstOcc == -1)
        return 0;
    return lastOcc - firstOcc + 1;
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
    cout << count(arr, n, 2) << endl;
    return 0;
}