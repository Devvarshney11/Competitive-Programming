#include <iostream>
#include <vector>

using namespace std;

// Done By Prefix 2D Sum Array Technique
class NumMatrix
{
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        prefix.resize(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                prefix[i][j] += arr[i][j];
                if (i - 1 >= 0)
                    prefix[i][j] += prefix[i - 1][j];
                if (j - 1 >= 0)
                    prefix[i][j] += prefix[i][j - 1];
                if (j - 1 >= 0 && i - 1 >= 0)
                    prefix[i][j] -= prefix[i - 1][j - 1];
            }
        }
    }
    // THE SUM BETWEEN THE RANGE [ROW1,COL1] TO [ROW2,COL2]
    //  --> PREFIX[ROW2][COL2] - PREFIX[ROW2][COL1-1] - PREFIX[ROW1-1][COL2] + PREFIX[ROW1-1][COL1-1]
    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int ans = prefix[row2][col2];
        if (col1 - 1 >= 0)
            ans -= prefix[row2][col1 - 1];
        if (row1 - 1 >= 0)
            ans -= prefix[row1 - 1][col2];
        if (row1 - 1 >= 0 && col1 - 1 >= 0)
            ans += prefix[row1 - 1][col1 - 1];
        return ans;
    }
};

int main()
{
    return 0;
}