#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class SummaryRanges
{
public:
    map<int, int> intervals;
    SummaryRanges()
    {
    }

    void addNum(int value)
    {
        int left = value, right = value;
        auto max_value = intervals.upper_bound(value);
        if (max_value != intervals.begin())
        {
            auto small_value = max_value;
            small_value--;
            if (small_value->second >= value)
                return;
            if (small_value->second == value - 1)
                left = small_value->first;
        }
        if (max_value != intervals.end() && max_value->first == value + 1)
        {
            right = max_value->second;
            intervals.erase(max_value);
        }
        intervals[left] = right;
    }

    vector<vector<int>> getIntervals()
    {
        vector<vector<int>> ans;
        for (auto &it : intervals)
        {
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};

int main()
{
    return 0;
}