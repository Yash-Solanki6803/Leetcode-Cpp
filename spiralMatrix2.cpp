#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix2(int n)
{
    vector<vector<int>> answer(n, vector<int>(n));
    int counter = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom, left <= right)
    {
        // top row
        for (int j = left; j <= right; j++)
        {

            answer[top][j] = counter;
            counter++;
        }
        top++;

        // right col
        for (int i = top; i <= bottom; i++)
        {

            answer[i][right] = counter;
            counter++;
        }
        right--;

        // bottom row

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {

                answer[bottom][j] = counter;
                counter++;
            }
            bottom--;
        }
        // left col
        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {

                answer[i][left] = counter;
                counter++;
            }
            left++;
        }
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> answer;
    answer = spiralMatrix2(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}