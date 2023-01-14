#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<long long> prefix;
        int mod = 1e9 + 7;
        for (int i = 0; i < 31; i++)
        {
            if ((n & (1 << i)) > 0)
            {
                int t = (1 << i);
                prefix.push_back(t);
            }
        }
        n = prefix.size();
        vector<int> ans;
        for (auto &it : queries)
        {
            int temp = 1;
            for (int i = it[0]; i <= it[1]; i++)
            {
                temp = (temp * prefix[i]) % mod;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main()
{
    return 0;
}