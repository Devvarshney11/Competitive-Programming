#include <iostream>
#include <vector>

using namespace std;

void prefixSum2D(vector<vector<int>> &prefix)
{
    int n = prefix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            prefix[i][j] += prefix[i][j - 1];
        }
    }
}
vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
{
    vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
    for (auto &it : queries)
    {
        for (int i = it[0]; i <= it[2]; i++)
        {
            if (it[3] + 1 < n)
                prefix[i][it[3] + 1]--;
            prefix[i][it[1]]++;
        }
    }
    prefixSum2D(prefix);
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = prefix[i][j];
        }
    }
    return ans;
}

int main()
{
    return 0;
}