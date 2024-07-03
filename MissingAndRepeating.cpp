#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }

    // find repeating element and missing element
    int missing, repeated;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n > 1)
        {
            repeated = i + 1;
        }
        if (arr[i] / n == 0)
        {
            missing = i + 1;
        }
    }

    return {repeated, missing};
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

    vector<int> res;

    res = findTwoElement(arr, n);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}