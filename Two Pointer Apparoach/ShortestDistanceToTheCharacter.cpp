#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

// vector<int> shortestToChar(string s, char c)
// {
//     vector<int> ans(s.size(), s.size());
//     int dist1 = s.size();
//     int dist2 = s.size();
//     for (int i = 0; i < s.size(); i++)
//     {
//         int j = s.size() - 1 - i;
//         if (s[i] == c)
//             dist1 = 0;
//         if (s[j] == c)
//             dist2 = 0;
//         ans[i] = min(ans[i], dist1);
//         ans[j] = min(ans[j], dist2);
//         dist1++;
//         dist2++;
//     }
//     return ans;
// }

vector<int> shortestToChar(string &s, char c)
{
    vector<int> index;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
            index.push_back(i);
    }
    int j = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int dist1 = abs(i - index[j]);
        int dist2 = INT_MAX;
        if (j + 1 < index.size())
        {
            dist2 = abs(i - index[j + 1]);
        }
        if (dist1 < dist2)
        {
            ans.push_back(dist1);
        }
        else
        {
            j++;
            ans.push_back(dist2);
        }
    }
    return ans;
}
int main()
{
    return 0;
}