#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    double average = 0;
    int i = 0;
    int n = nums.size();
    for (i; i < k; i++)
    {
        average += nums[i];
    }
    double ans = average / k;
    for (i; i < n; i++)
    {
        average -= nums[i - k];
        average += nums[i];
        ans = max(ans, average / k);
    }
    return ans;
}
int main()
{
    return 0;
}