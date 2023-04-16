// 🌟 Sliding Window "At Most to Equal" trick
// NOTE: this is an extension to my "C++ Maximum Sliding Window Cheatsheet Template!". Please make sure you are familiar with this template first.

// For problems solvable using this trick, also check out "C++ Maximum Sliding Window Cheatsheet Template!"

// For a find maximum sliding window problem that is looking for windows with exactly k something in it, we can convert it to a problem that is looking for at most k something in it.

// It's because "number of windows with exactly k something in it" = "number of windows with at most k something in it" - "number of windows with at most k - 1 something in it".

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int atMost(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int j = 0;
    int sub = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp.size() > k)
        {
            while (j <= i && mp.size() > k)
            {
                mp[nums[j]]--;
                if (mp[nums[j]] == 0)
                {
                    mp.erase(nums[j]);
                }
                j++;
            }
        }
        sub += i - j + 1;
    }
    return sub;
}
int subarraysWithKDistinct(vector<int> &nums, int k)
{
    return atMost(nums, k) - atMost(nums, k - 1);
}
int main()
{
}