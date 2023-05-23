#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

int findUnsortedSubarray(vector<int> &nums)
{
    int n = nums.size();
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            mini = min(mini, nums[i]);
        }
    }
    for (int j = n - 2; j >= 0; j--)
    {
        if (nums[j] > nums[j + 1])
        {
            maxi = max(maxi, nums[j]);
        }
    }
    if (mini == INT_MAX && maxi == INT_MIN)
        return 0;
    int start = 0;
    int end = n - 1;
    for (; start < n; start++)
    {
        if (nums[start] > mini)
            break;
    }
    for (; end >= 0; end--)
    {
        if (nums[end] < maxi)
            break;
    }
    return end - start + 1;
}
int main()
{
    return 0;
}