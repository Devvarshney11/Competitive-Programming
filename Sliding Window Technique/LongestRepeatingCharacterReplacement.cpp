#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int characterReplacement(string s, int k)
{
    int l = s.length();
    vector<int> freq(26,0);
    int j = 0;
    int maxFreq = 0;
    for(int i = 0;i<l;i++)
    {
        maxFreq = max(maxFreq,++freq[s[i]-'A']);
        if(i-j+1-maxFreq>k)
            freq[s[j++]-'A']--;
    }
    return l-j;
}
int main()
{

}