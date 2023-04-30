#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
            if (count < 2)
                j++;
        }
        if (nums[i] != nums[i - 1])
        {
            count = 0;
            j++;
        }
        nums[j] = nums[i];
    }
    return j + 1;
}
int main()
{
    return 0;
}