#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int takeCharacters(string s, int k)
{
    vector<int> freq(3, 0);
    for (auto &ch : s)
    {
        freq[ch - 'a']++;
    }
    if (freq[0] < k || freq[1] < k || freq[2] < k)
        return -1;
    int ans = accumulate(freq.begin(), freq.end(), 0);
    int j = 0;
    for (auto &ch : s)
    {
        freq[ch - 'a']--;
        ans = max(ans,accumulate(freq.begin(),freq.end(),0)+1);
        if (freq[0] < k || freq[1] < k || freq[2] < k)
        {
            while (s[j] != ch && !(freq[0] < k || freq[1] < k || freq[2] < k))
            {
                freq[s[j++] - 'a']++;
            }
            freq[s[j++]]++;
        }
    }
    ans = max(ans,accumulate(freq.begin(),freq.end(),0));
    return ans;
}
int main()
{
    return 0;
}