#include<iostream>
#include<vector>

using namespace std;

int position(vector<int> &arr,int target)
{
    int n = arr.size();
    if(arr[n-1]<target)
        return n;
    else if(arr[0]>target)
        return 0;
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        int mid = low + ((high-low)>>1);
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            high = mid;
        else 
            low = mid+1;
    }
    return low;
}
int main()
{
    return 0;
}