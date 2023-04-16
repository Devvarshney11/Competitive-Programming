#include<iostream>
#include<vector>

using namespace std;

bool solve(vector<int> &length,int k,int mid)
{
    int p = 1;
    int sum = 0;
    for(auto &it : length)
    {
        sum += it;
        if(sum>mid)
        {
            sum = it;
            p++;
        }
    }
    return p<=k;
}
int minimumTime(vector<int> &length,int k)
{
    int low = 0;
    int high = 0;
    for(auto &it : length)
    {
        low = (low<it)?it:low;
        high += it;
    }
    int ans = -1;
    while(low<=high)
    {
        int mid = low + ((high-low)>>1);
        if(solve(length,k,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}