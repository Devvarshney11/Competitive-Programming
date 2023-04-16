#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lowerBound(vector<pair<int, int>> &temp, int key)
{
    int n = temp.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (temp[mid].first == key)
            return temp[mid].second;
        else if (temp[mid].first > key)
        {
            ans = temp[mid].second;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
vector<int> findRightInterval(vector<vector<int>> &intervals)
{
    vector<pair<int, int>> temp;
    int n = intervals.size();
    for (int i = 0; i < n; i++)
    {
        temp.push_back({intervals[i][0], i});
    }
    sort(temp.begin(), temp.end());
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int index = lowerBound(temp, intervals[i][1]);
        ans[i] = index;
    }
    return ans;
}
int main()
{
    return 0;
}