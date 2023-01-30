#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int minimumCardPickup(vector<int> &cards)
{
    int n = cards.size();
    int j = 0;
    int dup = 0;
    int ans = INT_MAX;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[cards[i]]++;
        dup += mp[cards[i]] - 1;
        if (dup == 1)
        {
            while (dup != 0)
            {
                mp[cards[j]]--;
                dup -= mp[cards[j]];
                j++;
            }
            ans = min(ans, i - j + 2);
        }
    }
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    return 0;
}