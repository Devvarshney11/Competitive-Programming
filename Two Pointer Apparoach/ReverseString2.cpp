#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string reverseStr(string s, int k)
{
    int n = s.size();
    for (int i = 0; i < n; i += 2 * k)
    {
        if (i + k > n)
        {
            reverse(s.begin() + i, s.end());
        }
        else if (k > n)
        {
            reverse(s.begin(), s.end());
        }
        else
        {
            reverse(s.begin() + i, s.begin() + i + k);
        }
    }
    return s;
}
int main()
{
    return 0;
}