#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int idx = n-1;
    while(idx>=0)
    {
        if(idx>0 && nums[idx]>nums[idx-1])
        {
            break;
        }
        idx--;
    }
    if(idx == -1)
    {
        reverse(nums.begin(),nums.end());
    }
    int temp = idx;
    for(int i = idx+1;i<n;i++)
    {
        if(nums[i]>nums[idx-1] && nums[i]<=nums[temp])
            temp = i;
    }   
    swap(nums[idx-1],nums[temp]);
    reverse(nums.begin()+idx,nums.end());
}
int main()
{
    return 0;
}