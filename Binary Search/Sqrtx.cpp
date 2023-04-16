#include <iostream>
#include <vector>

using namespace std;

int mySqrt(int x)
{
    int low = 0;
    int high = 46340;
    int ans;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    return 0;
}