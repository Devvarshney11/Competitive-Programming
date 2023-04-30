#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    int ans = INT_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum > target)
                k--;
            else
                j++;
            if (abs(sum - target) < abs(ans - target))
                ans = sum;
        }
    }
    return ans;
}
int main()
{
    return 0;
}