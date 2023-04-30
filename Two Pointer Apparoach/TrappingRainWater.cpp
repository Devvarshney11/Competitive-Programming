#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> left;
    vector<int> right;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        max = (height[i] > max) ? height[i] : max;
        left[i] = max;
    }
    max = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        max = (height[j] > max) ? height[j] : max;
        right[j] = max;
    }
    int water = 0;
    for(int i = 0;i<n;i++)
    {
        water += min(left[i],right[i])-height[i];
    }
    return water;
}
int main()
{
    return 0;
}