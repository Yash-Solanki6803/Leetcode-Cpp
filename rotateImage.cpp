#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void rotate(vector<vector<int>> &matrix)
{
    int size = matrix.size();
    transpose(matrix, size);

    int colStart = 0, colEnd = size - 1;

    while (colStart < colEnd)
    {
        for (int i = 0; i < size; i++)
        {
            swap(matrix[i][colStart], matrix[i][colEnd]);
        }
        colStart++, colEnd--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}