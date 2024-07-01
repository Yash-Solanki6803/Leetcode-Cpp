#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix, int n)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
