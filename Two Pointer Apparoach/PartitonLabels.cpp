#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> partitionLabels(string s)
{
    vector<int> last(26, 0);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        last[s[i] - 'a'] = i;
    }
    int end = 0;
    int start = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        end = max(end, last[s[i] - 'a']);
        if (i == end)
        {
            ans.push_back(end - start + 1);
            start = i + 1;
        }
    }
    return ans;
}

int main()
{
    return 0;
}