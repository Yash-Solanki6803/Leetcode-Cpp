#include <bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[], int n)
{
    int right = 0, left = n - 1;
    while (right < left)
    {
        if (arr[right] == 1)
        {
            if (arr[left] == 1)
            {
                left--;
            }
            else
            {
                swap(arr[right], arr[left]);
            }
        }
        else
        {
            right++;
        }
    }
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

    segregate0and1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}