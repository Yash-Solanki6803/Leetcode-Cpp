#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    int mx = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mx)
        {
            ans = max(ans, arr[i]);
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

    cout << print2largest(arr, n) << endl;
    return 0;
}