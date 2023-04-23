#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int minimumRemoves(string num)
{
    int n = num.size();
    int count = 0;
    for(int i = 1;i<n;i++)
    {   
        if(num[i] == num[i-1])
            count++;
    }
    return count;
}
int main()
{
    return 0;
}