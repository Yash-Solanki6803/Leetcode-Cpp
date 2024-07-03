#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int n, int P)
{
    // Step 1: Decrease all elements by 1 to use zero-based indexing
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i]--;
        }
    }

    // Step 2: Use elements' values as indices to store frequency counts
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % P < n)
        {
            arr[arr[i] % P] += P;
        }
    }

    // Step 3: Update the array to contain the actual frequency counts
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / P;
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

    int p;
    cin >> p;

    frequencyCount(arr, n, p);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}