#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr,int key)
{
    int low = 0;
    int high = arr.size()-1;

    while(low<=high)
    {
        int mid = low + ((high-low)>>1);
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            high = mid-1;
        else 
            low = mid+1;
    }
    return -1;
}
int main()
{
    return 0;
}