#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int maxLengthArray(vector<int> &nums)
{
    unordered_map<int,int> mp;
    int n = nums.size();
    int sum = 0;
    int maxLen = 0;
    for(int i = 0;i<n;i++)
    {
        sum += nums[i]==0?-1:1;
        if(sum == 0)
        {
            maxLen = i+1;
        }
        if(mp.find(sum) != mp.end())
        {
            mp[sum] = i;
        }
        else 
        {
            maxLen = max(maxLen,(i-mp[sum]));
        }
    }
    return maxLen;
}
int main()
{
   

}