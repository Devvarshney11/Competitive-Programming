#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cow = 1;
    int prev = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (prev + mid <= stalls[i])
        {
            prev = stalls[i];
            cow++;
            if (cow == k)
                return true;
        }
    }
    return false;
}
int solve(int n, int k, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());
    int low = 0;
    int high = stalls[n - 1];
    int ans = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}