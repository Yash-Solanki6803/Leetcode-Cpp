#include <bits/stdc++.h>
using namespace std;

int findMaxPrefix(int arr[], int left, int right)
{
    // cout << "Left:" << left << " right:" << right << endl;
    int mx = INT_MIN;
    // cout << "mx:" << mx << endl;
    int sum = 0;
    for (int i = left; i <= right; i++)
    {
        sum += arr[i];
        // cout << "sum:" << sum << endl;
        mx = max(mx, sum);
        // cout << "Mx:" << mx << endl;
    }
    return mx;
}

vector<int> maxPrefixes(int arr[], int L[], int R[], int n, int Q)
{
    vector<int> res;
    for (int i = 0; i < Q; i++)
    {
        int mxPrefix = findMaxPrefix(arr, L[i], R[i]);
        res.push_back(mxPrefix);
    }
    return res;
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

    int Q;
    cin >> Q;

    int Left[Q];
    int Right[Q];

    for (int i = 0; i < Q; i++)
    {
        cin >> Left[i];
        cin >> Right[i];
    }
    vector<int> res;
    res = maxPrefixes(arr, Left, Right, n, Q);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}