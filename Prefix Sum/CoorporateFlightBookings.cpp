#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
    {
        vector<int> seats(n + 2, 0);
        for (auto &it : bookings)
        {
            seats[it[0]] += it[2];
            seats[it[1] + 1] -= it[2];
        }
        for (int i = 1; i < n + 2; i++)
        {
            seats[i] += seats[i - 1];
        }
        vector<int> ans(n);
        for (int i = 1; i <= n; i++)
        {
            ans[i - 1] = seats[i];
        }
        return ans;
    }
};

int main()
{
    return 0;
}