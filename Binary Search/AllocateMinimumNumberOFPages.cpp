#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;
bool isPossible(vector<int> &arr,int &k,int &mid)
{
    int n = arr.size();
    int sum = 0;
    int stu = 1;
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
        if(sum>mid)
        {
            sum = arr[i];
            stu++;
        }
    }
    return stu<=k;
}
int noOfPages(vector<int> &arr,int k)
{
    int low = 0;
    int high = 0;
    for(int &it : arr)
    {
        low = max(low,it);
        high += it;
    }
    int ans = 0;
    while(low<=high)
    {
        int mid = low + ((high-low)>>1);
        if(isPossible(arr,k,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
}
int main()
{
    vector<int> arr{12, 34, 67, 90};
    cout<<noOfPages(arr,2);
    return 0;
}