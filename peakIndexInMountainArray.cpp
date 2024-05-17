#include <bits/stdc++.h>
using namespace std;

// Simple Binary Search

// int peakIndexInMountainArray(vector<int> &arr)
// {
//     if (arr.size() == 1)
//     {
//         return arr[0];
//     }
//     int start = 0, end = arr.size() - 1, mid = -1;
//     while (start <= end)
//     {

//         mid = start + (end - start) / 2;
//         if ((mid > 0 && mid < arr.size() - 1) && (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]))
//             return mid; // peak point found
//         if ((mid > 0 && arr[mid] > arr[mid - 1]) || (mid < arr.size() - 1 && arr[mid + 1] > arr[mid]))
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
//     if (arr[0] > arr[1]) // for edge cases
//         return 0;
//     return arr.size() - 1;
// }

// Second Binary Search Approach

int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1, mid = start + (end - start) / 2;
    while (mid != 0 && mid != n - 1)
    {
        if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
            end = end - 1;
        else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    if (mid == 0)
    {
        cout << "if";
        return arr[0] > arr[1] ? 0 : 1;
    }
    else
    {
        return arr[mid] > arr[mid - 1] ? mid : mid - 1;
    }
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
    cout << peakIndexInMountainArray(arr) << endl;
    return 0;
}