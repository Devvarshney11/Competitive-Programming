#include<iostream>
#include<vector>

using namespace std;

//Sliding Window (Shrinkable)
int longestSubarray(vector<int>& nums)
{
    int n = nums.size();
    int j = 0;
    int count = 0;
    int maxCount = 0;
    for(int i = 0;i<n;i++)
    {   
        count += nums[i] == 0;
        while(count>1)
        {
            count -= nums[j] == 0;
            j++;
        }
        maxCount = max(maxCount,i-j);
    }
    return maxCount;
}
//Sliding Window (Non Shrinkable)
int longestSubarray(vector<int> &nums)
{
    int n = nums.size();
    int j = 0;
    int i = 0;
    int count = 0;
    while(i<n)
    {
        count += nums[i] == 0;
        if(count>1)
            count -= nums[j++] == 0;
        i++; 
    }
    return i-j-1;
}
int main()
{

}