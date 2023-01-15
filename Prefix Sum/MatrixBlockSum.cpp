#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    void prefixSum2D(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i - 1 >= 0)
                    nums[i][j] += nums[i - 1][j];
                if (j - 1 >= 0)
                    nums[i][j] += nums[i][j - 1];
                if (i - 1 >= 0 && j - 1 >= 0)
                    nums[i][j] -= nums[i - 1][j - 1];
            }
        }
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {
        prefixSum2D(mat);
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x1 = max(0, i - k);
                int y1 = max(0, j - k);
                int x2 = min(i + k, n - 1);
                int y2 = min(j + k, m - 1);

                ans[i][j] += mat[x2][y2];
                if (x1 - 1 >= 0 && y1 - 1 >= 0)
                    ans[i][j] += mat[x1 - 1][y1 - 1];
                if (x1 - 1 >= 0)
                    ans[i][j] -= mat[x1 - 1][y2];
                if (y1 - 1 >= 0)
                    ans[i][j] -= mat[x2][y1 - 1];
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}