#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix3(int rows, int cols, int rStart, int cStart)
{
    // These vector define direction . eg. dx,dy(1,0) -> right
    const vector<int> dx{1, 0, -1, 0};
    const vector<int> dy{0, 1, 0, -1};
    vector<vector<int>> ans{{rStart, cStart}};

    for (int i = 0; ans.size() < rows * cols; ++i)
    {
        // i determines how many steps we need to take as well as the direction .
        for (int step = 1; step <= i / 2 + 1; ++step)
        {
            // Based on direction , change the coords
            rStart += dy[i % 4];
            cStart += dx[i % 4];

            // check if the coords are valid and then push to vector.
            if (0 <= rStart && rStart < rows && 0 <= cStart && cStart < cols)
                ans.push_back({rStart, cStart});
        }
    }

    return ans;
}
int main()
{
    int n, m, rstart, cstart;
    cin >> n >> m >> rstart >> cstart;

    vector<vector<int>> response;
    response = spiralMatrix3(n, m, rstart, cstart);
    for (int i = 0; i < n * m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << response[i][j];
        }
        cout << endl;
    }
    return 0;
}