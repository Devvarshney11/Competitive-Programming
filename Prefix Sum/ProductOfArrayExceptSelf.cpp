#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// In this apparoach we use prefix product and suffix product
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        for (int i = 1, j = n - 2; i < n && j >= 0; i++, j--)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }
        for (int i = 0; i < n; i++)
        {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};
int main()
{
    return 0;
}