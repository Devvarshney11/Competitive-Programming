#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int i = 0;
    int n = nums.size();
    while (i <= n - 3)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[j] > 0)
            {
                k--;
            }
            else if (nums[i] + nums[j] + nums[k] < 0)
            {
                j++;
            }
            else
            {
                vector<int> temp{nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                while (j < k && nums[j] == temp[1])
                    j++;
                while (j < k && nums[k] == temp[2])
                    k--;
            }
        }
        int temp = nums[i];
        while (i <= n - 3 && nums[i] == temp)
            i++;
    }
    return ans;
}
int main()
{
    return 0;
}