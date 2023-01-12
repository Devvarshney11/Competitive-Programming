#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// By Prefix Sum
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i] += nums[i - 1];
        }
        int left = 0;
        int ans = INT_MAX;
        for (int right = 0; right < n; right++)
        {
            if (nums[right] > target)
            {
                while (left <= right && nums[left] <= nums[right] - target)
                {
                    left++;
                }
                ans = min(ans, (right - left + 1));
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};
int main()
{

    return 0;
}