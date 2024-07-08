#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange)
{
    int ans = numBottles;
    int emptyBottles = numBottles;
    int exchangedBottles = 0;
    while (exchangedBottles + emptyBottles >= numExchange)
    {
        emptyBottles += exchangedBottles;
        exchangedBottles = emptyBottles / numExchange;
        ans += exchangedBottles;

        emptyBottles = emptyBottles % numExchange;
    }
    return ans;
}

int main()
{
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;

    cout << numWaterBottles(numBottles, numExchange);
    return 0;
}