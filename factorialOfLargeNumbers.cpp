#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int N)
{
    vector<int> ans(1, 1);
    while (N > 0)
    {
        int product = 0, carry = 0, size = ans.size();

        for (int i = 0; i < size; i++)
        {
            product = ans[i] * N;
            ans[i] = (product + carry) % 10;
            carry = (product + carry) / 10;
        }

        // appending the carry to the back
        while (carry > 0)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }

        N--;
    }

    // reversing the vector (array)

    int start = 0, end = ans.size() - 1;
    while (start < end)
    {
        swap(ans[start], ans[end]);
        start++, end--;
    }

    return ans;
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr;
    arr = factorial(N);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}