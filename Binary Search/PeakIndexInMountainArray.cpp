#include<iostream>
#include<vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0;
    int high = arr.size()-1;
    while(low<high)
    {
        int mid = low + ((high-low)>>1);
        if(arr[mid]<arr[mid+1])
            low = mid+1;
        else    
            high = mid;
    }        
    return low;
}

int main()
{
    return 0;
}