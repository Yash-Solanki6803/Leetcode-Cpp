#include <bits/stdc++.h>
// #include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long S)
{
    long long current_sum = 0;
    // cout << current_sum << " " << S << endl;
    bool flag = false;
    int start = 0, last;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {

        current_sum += arr[i];
        // cout << "iteration " << i << " current sum " << current_sum << endl;
        if (current_sum >= S)
        {
            last = i;
            while (current_sum > S && start < last)
            {
                // cout << "While loop" << endl;
                current_sum -= arr[start];
                start++;
                // cout << "start " << start << " current sum " << current_sum << endl;
            }
            if (current_sum == S)
            {
                res.push_back(start + 1);
                res.push_back(i + 1);
                // return res;
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        res.push_back(-1);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> res;
    res = subarraySum(arr, n, 0);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
