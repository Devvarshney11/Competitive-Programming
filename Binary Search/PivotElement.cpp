#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] > arr[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (low == n - 1 && arr[0] < arr[low])
        return arr[0];
    return arr[low];
}
int main()
{
}