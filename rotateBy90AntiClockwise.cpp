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
void rotateby90(vector<vector<int>> &matrix, int n)
{
    // code here
    transpose(matrix, n);

    int rowStart = 0, rowEnd = n - 1;

    while (rowStart < rowEnd)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[rowStart][j], matrix[rowEnd][j]);
        }
        rowStart++, rowEnd--;
    }
}
int main()
{

    return 0;
}