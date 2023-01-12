#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool  contigousSumSubArray(vector<int> &nums,int &k)
{
    int n = nums.size();
    unordered_map<int,int> mp;
    int sum = 0;
    mp.insert({0,0});
    for(int i = 0;i<n;i++)
    {
        sum += nums[i];
        int index = sum%k;
        if(mp.find(index) == mp.end())
        {
            mp[index] = i+1;
        }
        else 
        {
            int temp = mp[index];
            if(i-temp+1>=2)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    return 0;
}