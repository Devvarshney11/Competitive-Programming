#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

bool judgeSquareSum(int c)
{
    long long low = 0;
    long long high = sqrt(c);
    while (low <= high)
    {
        long long sum = low * low + high * high;
        if (sum == c)
            return true;
        else if (sum > c)
            high--;
        else
            low++;
    }
    return false;
}

int main()
{
    return 0;
}