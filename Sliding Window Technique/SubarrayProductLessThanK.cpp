#include <iostream>
#include <vector>

using namespace std;

int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    int n = nums.size();
    int pro = 1;
    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        pro *= nums[i];
        while (pro >= k && i >= j)
        {
            pro /= nums[j++];
        }
        count += i - j + 1;
    }
    return count;
}
int main()
{
    return 0;
}