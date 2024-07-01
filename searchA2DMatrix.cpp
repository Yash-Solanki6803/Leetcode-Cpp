#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int start = 0, end = m * n - 1, mid = -1;
    int row, col;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        row = mid / n;
        col = mid % n;

        if (matrix[row][col] == target)
        {

            return true;
        }
        else if (matrix[row][col] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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
    cout << searchMatrix(matrix, target);

    return 0;
}