#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Solution
{
public:
    int shortestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size();
        deque<int> q;
        int minLength = INT_MAX;
        vector<long long> prefix(n, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i] += (long long)nums[i];
            if (i)
            {
                prefix[i] += prefix[i - 1];
            }
            if (prefix[i] >= k)
                minLength = min(minLength, i + 1);
            while (!q.empty() && prefix[q.back()] >= prefix[i])
            {
                q.pop_back();
            }
            while (!q.empty() && prefix[i] - prefix[q.front()] >= k)
            {
                minLength = min(minLength, i - q.front());
                q.pop_front();
            }
            q.push_back(i);
        }
        return minLength == INT_MAX ? -1 : minLength;
    }
};
int main()
{
    return 0;
}