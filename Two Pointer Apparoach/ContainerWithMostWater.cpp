#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int maxArea(vector<int> &height)
{
    int i = 0;
    int j = height.size() - 1;
    int minindex;
    int mini;
    int ans = 0;
    while (i < j)
    {
        if (height[i] < height[j])
        {
            minindex = i;
            mini = height[i];
        }
        else
        {
            minindex = j;
            mini = height[j];
        }
        ans = max(ans, mini * (j - i));
        (minindex == i) ? i++ : j--;
    }
    return ans;
}
int main()
{

    return 0;
}