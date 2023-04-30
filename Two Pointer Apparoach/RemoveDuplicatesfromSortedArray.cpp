#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
            j++;
        nums[j] = nums[i];
    }
    return j + 1;
}
int main()
{
    return 0;
}