#include <iostream>
#include <vector>

using namespace std;

//By Sliding Window(Non Shrinkable)
int equalSubstring(string s, string t, int maxCost)
{
    int n = s.length();
    int j = 0;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost += abs(s[i] - t[i]);
        if (cost > maxCost)
            cost -= abs(s[j] - t[j++]);
    }
    return n - j;
}
//By Sliding Window(Shrinkable)
int equalSubString(string s,string t,int maxCost)
{
    int n = s.length();
    int j = 0;
    int cost = 0;
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        cost += abs(s[i]-t[i]);
        while(cost>maxCost)
            cost -= abs(s[j]-t[j++]);
        ans = max(ans,i-j+1);
    }
    return ans;
}
int main()
{
}