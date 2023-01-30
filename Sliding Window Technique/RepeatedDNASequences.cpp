#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    //In This the size of the window remain fix 
    vector<string> findRepeatedDnaSequences(string s)
    {
        int l = s.length();
        if (l < 10)
            return {};
        string DNA;
        int i = 0;
        unordered_map<string, int> mp;
        for (i; i < 10; i++)
        {
            DNA.push_back(s[i]);
        }
        mp[DNA]++;
        vector<string> ans;
        for (i; i < l; i++)
        {
            DNA.erase(0, 1);
            DNA.push_back(s[i]);
            mp[DNA]++;
        }
        for (auto &it : mp)
        {
            if (it.second > 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};

int main()
{
    return 0;
}