#include <bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    // Your code here
    int start = 0, end = N - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == K)
        {

            return 1;
        }
        else if (arr[mid] > K)
        {

            end = mid - 1;
        }
        else
        {

            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int key;
    cin >> key;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << searchInSorted(arr, n, key);
    return 0;
}