#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k)
{
    vector<int> friends(n);
    iota(friends.begin(), friends.end(), 1);
    int current_position = 0;

    while (n > 1)
    {
        current_position = (current_position + (k - 1)) % n;
        friends.erase(friends.begin() + current_position);
        n--;
    }

    return friends[0];
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << findTheWinner(n, k) << endl;
    return 0;
}