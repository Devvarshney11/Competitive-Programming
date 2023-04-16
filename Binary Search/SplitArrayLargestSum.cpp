#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> &nums,int k,int mid)
{
    int sub = 1;
    int sum = 0;
    for(auto &it : nums)
    {
        sum += it;
        if(sum>mid)
        {
            sub++;
            sum = it;
        }
    }
    return sub<=k;
}
int splitArray(vector<int> &nums,int k)
{
    int low = 0;
    int high = 0;
    for(auto &it : nums)
    {
        low = max(low,it);
        high += it;
    }
    int ans = 0;
    while(low<=high)
    {
        int mid = low  + ((high-low)>>1);
        if(isPossible(nums,k,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else   
            low = mid+1;
    }
    return ans;
}
int main()
{
    return 0;
} 