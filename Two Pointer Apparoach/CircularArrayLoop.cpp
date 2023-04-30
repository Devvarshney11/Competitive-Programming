#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int nextPosition(vector<int> &nums, int index, bool isSame)
{
    int n = nums.size();
    bool direction = nums[index] > 0 ? true : false;
    if (direction != isSame)
        return -1;
    int next = ((index + nums[index]) % n + n) % n;
    if (index == next)
        return -1;
    return next;
}
bool circularArrayLoop(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int slow, fast;
        slow = fast = i;
        bool direction = nums[i] > 0 ? true : false;
        while (true)
        {
            slow = nextPosition(nums, slow, direction);
            if (slow == -1)
                break;
            fast = nextPosition(nums, fast, direction);
            if (fast == -1)
                break;
            fast = nextPosition(nums, fast, direction);
            if (fast == -1)
                break;
            if (slow == fast)
                return true;
        }
    }
    return false;
}

int main()
{
    return 0;
}