#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxFrequency(vector<int>& nums, long long k)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int j = 0;
    int maxFreq = 0;
    for(int i = 0;i<n;i++)
    {
        k += nums[i];
        while(k<(long long)nums[i]*(i-j+1))
        {
            k -= nums[j];
            j++;
        }
        maxFreq = max(maxFreq,(i-j+1));
    }
    return maxFreq;
}
int main()
{
    return 0;
}