#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int temp[1000];
    // copy(arr[0], arr[n - 1], temp[0]);

    int start = 0, end = n - 1;

    int i = 0;
    // sorting zeros

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
        }
    }

    // sorting twos

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 2)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}