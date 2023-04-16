#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarySearch(vector<int> &arr,int target)
{
    int low = 0;
    int high = arr.size()-1;
    int ans = 0;
    while(low<=high)
    {
        int mid = low + ((high-low)>>1);
        if(arr[mid] == target)
        {
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid]>target)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return ans;
}
vector<int> countSmaller(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr,ans;
    for(auto &it: nums)
    {
        arr.push_back(it);
    }
    sort(arr.begin(),arr.end());
    for(auto &it : nums)
    {
        int index = binarySearch(arr,it);
        ans.push_back(index);
        arr.erase(arr.begin()+index);
    }
    return ans;
}
int main()
{
    return 0;
}