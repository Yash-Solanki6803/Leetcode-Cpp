#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n)
{
    // code here
    int start = 0, end = n - 1, mid = -1;
    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            end = end - 1;
        }
        else
        {
            start = start + 1;
        }
    }
    return n - mid;
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

    cout << countZeroes(arr, n) << endl;
    return 0;
}