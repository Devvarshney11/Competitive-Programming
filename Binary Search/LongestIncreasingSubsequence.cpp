#include <iostream>
#include <vector>

using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    vector<int> temp;
    for (auto &it : nums)
    {
        if (!temp.empty() && temp.back() >= it)
        {
            int index = lower_bound(temp.begin(), temp.end(), it) - temp.begin();
            temp[index] = it;
        }
        else
        {
            temp.push_back(it);
        }
    }
    return temp.size();
}

int main()
{
    return 0;
}