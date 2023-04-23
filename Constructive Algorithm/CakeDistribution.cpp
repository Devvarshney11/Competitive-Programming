// Given two integers N and M, where N is the number of friends sitting in a clockwise manner in a circle and M is the number of cakes. 
// The task is to calculate the left number of cakes after distributing i cakes to i’th friend. 
// The distribution of cakes will stop if the count of cakes is less than the required amount.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int remainingCake(int n,int m)
{
    int oneRound = (n*(n+1))>>1;
    int left = m%oneRound;
    int i = 1;
    while(i<=left)
    {
        left -= i;
        i++;
    }
    return left;
}

int main()
{
    cout<<remainingCake(3,8);
    return 0;
}