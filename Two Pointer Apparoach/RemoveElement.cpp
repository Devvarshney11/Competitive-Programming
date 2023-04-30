#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        if (nums[i] == val)
        {
            swap(nums[i], nums[n - 1]);
            n--;
        }
        else
        {
            i++;
        }
    }
    return n;
}
int main()
{
    return 0;
}