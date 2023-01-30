#include <iostream>
#include <vector>

using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        count += nums[i] == 0;
        if (count > k)
            count -= nums[j++] == 0;
    }
    return n - j;
}
int main()
{
    return 0;
}