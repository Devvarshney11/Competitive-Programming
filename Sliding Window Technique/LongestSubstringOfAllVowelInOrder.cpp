#include <iostream>
#include <vector>

using namespace std;

int longestBeautifulSubstring(string word)
{
    int l = word.length();
    int currAns = 1;
    int charFreq = 1;
    int ans = 0;
    for (int i = 1; i < l; i++)
    {
        if (word[i - 1] == word[i])
        {
            currAns++;
        }
        else if (word[i - 1] < word[i])
        {
            currAns++;
            charFreq++;
        }
        else
        {
            currAns = 1;
            charFreq = 1;
        }
        if (charFreq == 5)
        {
            ans = max(ans, currAns);
        }
    }
    return ans;
}

int main()
{

    return 0;
}