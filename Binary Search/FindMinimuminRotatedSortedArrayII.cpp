#include<iostream>
#include<vector>

using namespace std;

int pivotElement(vector<int> &nums)
{
    int low = 0;
    int high = nums.size()-1;

    while(low<high)
    {
        int mid = low + ((high-low)>>1);
        if(nums[mid] == nums[high])
        {
            high--;
        }
        else if(nums[mid]>nums[high])
        {
            low = mid+1;
        }
        else
            high = mid;
    }
    return nums[low];
}
int main()
{
    return 0;
}