#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0, end = n - 2, mid, ans;
    bool flag = false;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // cout << "mid:" << mid << endl;
        if (arr[mid] != mid + 1)
        {
            flag = true;
            ans = mid + 1;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (!flag)
    {
        if (arr[n - 2] == n - 1)
        {
            ans = n;
        }
        else
        {
            ans = -1;
        }
    }

    cout << ans << endl;

    return 0;
}