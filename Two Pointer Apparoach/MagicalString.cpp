#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int magicalString(int n)
{
    if (n < 4)
        return 1;
    string magic = "122";
    int i = 2;
    while (magic.size() < n)
    {
        if (magic.back() == '1')
        {
            if (magic[i] == '1')
                magic += "2";
            else
                magic += "22";
        }
        else
        {
            if (magic[i] == '1')
                magic += "1";
            else
                magic += "11";
        }
        i++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = magic[i];
        if (ch == '1')
            count++;
    }
    return count;
}

int main()
{
    return 0;
}