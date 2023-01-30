#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

//By Sliding Window (Shrinkable)
int maximumUniqueSubarray(vector<int> &nums)
{
    int n = nums.size();
    int j = 0;
    unordered_map<int, int> mp;
    int count = 0;
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        count += ++mp[nums[i]] - 1;
        while (j <= i && count > 0)
        {
            count -= --mp[nums[j]];
            sum -= nums[j];
            j++;
        }
        ans = max(ans, sum);
    }
    return ans;
}
//The Non Shrinkable Range is Not Applicable Because we didn't require range,We want the sum of that range

int main()
{
    return 0;
}