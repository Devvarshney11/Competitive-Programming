#include<iostream>
#include<vector>

using namespace std;

int peakElement(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        int mid = (low+high)>>1;
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