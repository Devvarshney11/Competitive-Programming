#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int countBinarySubstrings(string s)
{
    int curr = 1;
    int prev = 0;
    int i = 1;
    int n = s.length();
    int count = 0;
    while (i < n)
    {
        if (s[i] != s[i - 1])
        {
            count += min(prev, curr);
            prev = curr;
            curr = 1;
        }
        else
            curr++;
        i++;
    }
    count += min(prev, curr);
    return count;
}
int main()
{
    return 0;
}