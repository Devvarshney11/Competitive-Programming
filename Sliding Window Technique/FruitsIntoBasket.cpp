#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


//Sliding Window (Shrinkable)
int totalFruit(vector<int> &fruits)
{
    int n = fruits.size();
    int j = 0;
    int maxAns = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[fruits[i]]++;
        if (mp.size() > 2)
        {
            while (j < i && mp.size() > 2)
            {
                mp[fruits[j]]--;
                if (mp[fruits[j]] == 0)
                    mp.erase(fruits[j]);
                j++;
            }
        }
        maxAns = max(maxAns, i - j + 1);
    }
    return maxAns;
}

int main()
{
    return 0;
}