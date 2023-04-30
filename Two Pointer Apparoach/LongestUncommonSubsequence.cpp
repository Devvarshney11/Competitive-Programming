#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(string a, string b)
{
    int A = a.size();
    int B = b.size();
    while (A > 0 && B > 0)
    {
        int i = a.size() - A;
        int j = b.size() - B;
        if (a[i] == b[j])
        {
            A--;
        }
        B--;
    }
    return A == 0;
}
int findLUSlength(vector<string> &strs)
{
    int n = strs.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = strs[i].length();
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (j != i && check(strs[i], strs[j]))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = max(ans, l);
        }
    }
    return ans == 0 ? -1 : ans;
}

int main()
{
    return 0;
}