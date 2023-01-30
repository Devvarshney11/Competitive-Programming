#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long maximumSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, long long> mp;
    long long dup = 0;
    long long ans = 0;
    long long sum = 0;
    int i = 0;
    for (i; i < k; i++)
    {
        sum += nums[i];
        mp[nums[i]]++;
        dup += mp[nums[i]] - 1;
    }
    if (dup == 0)
    {
        ans = max(ans, sum);
    }
    for (i; i < n; i++)
    {
        sum -= nums[i - k];
        mp[nums[i - k]]--;
        dup -= mp[nums[i - k]];
        sum += nums[i];
        mp[nums[i]]++;
        dup += mp[nums[i]] - 1;
        if (dup == 0)
        {
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main()
{
    return 0;
}