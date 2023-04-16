#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//By binary search
int missingNumber(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int low = 0;
    int high = nums.size();
    while(low<high)
    {
        int mid = low + ((high-low)>>1);
        if(nums[mid] == mid)
        {
            low = mid+1;
        }
        else
            high = mid;
    }
    return low;
}
int main()
{
    return 0;
}