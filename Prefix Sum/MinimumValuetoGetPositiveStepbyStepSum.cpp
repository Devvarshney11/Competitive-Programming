#include <iostream>
#include <vector>

using namespace std;

int minStartValue(vector<int> &nums)
{
    int n = nums.size();
    int startValue = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum < 1)
        {
            int temp = 1 - sum;
            startValue += temp;
            sum += temp;
        }
    }
    return startValue == 0 ? 1 : startValue;
}

int main()
{
    return 0;
}