#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder1(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> answer;
    if (matrix.empty() || matrix[0].empty())
    {
        return answer;
    }

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right)
    {
        // top row
        for (int j = left; j <= right; j++)
        {

            answer.push_back(matrix[top][j]);
        }
        top++;
        // right col

        for (int i = top; i <= bottom; i++)
        {

            answer.push_back(matrix[i][right]);
        }
        right--;

        // bottom row

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {

                answer.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        // left col
        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {

                answer.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return answer;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> response;

    response = spiralOrder1(matrix);
    for (int i = 0; i < n * m; i++)
    {
        cout << response[i] << " ";
    }
    return 0;
}