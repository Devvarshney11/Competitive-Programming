#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool canTransform(string start, string end)
{
    int i = 0;
    int j = 0;
    int n = start.length();
    string s1 = start;
    string s2 = end;
    s1.erase(remove(s1.begin(), s1.end(), 'X'), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), 'X'), s2.end());
    if (s1 != s2)
        return false;
    while (i < n && j < n)
    {
        if (start[i] == 'X')
            i++;
        else if (end[j] == 'X')
            j++;
        else
        {
            if ((start[i] == 'L' && i < j) || (start[i] == 'R' && i > j))
            {
                return false;
            }
            i++;
            j++;
        }
    }
    return true;
}
int main()
{
    return 0;
}