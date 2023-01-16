#include <iostream>
#include <vector>

using namespace std;

// Sliding Window (shrinkable)
int lengthOfLongestSubstring(string s)
{
    int n = s.length();
    int maxLength = 0;
    vector<int> count(256, 0);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        count[s[i]]++;
        while (count[s[i]] > 1)
        {
            count[s[j++]]--;
        }
        maxLength = max(maxLength, i - j + 1);
    }
    return maxLength;
}

// Sliding Window (shrinkable)
int lengthOfLongestSubstring(string s)
{
    int n = s.length();
    vector<int> count(256, 0);
    int j = 0;
    int doub = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        doub += ++count[s[i]] == 2;
        if(doub>0)
            doub -= --count[s[j++]] == 1;
    }
    return i-j;
}
int main()
{
    return 0;
}