#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    int row = n - 1, col = 0;
    while (row >= 0 && col <= m - 1)
    {

        if (matrix[row][col] == x)
        {
            return true;
        }
        else if (matrix[row][col] > x)
        {
            row--;
        }
        else
        {
            col++;
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;
    cout << search(matrix, n, m, target);
    return 0;
}