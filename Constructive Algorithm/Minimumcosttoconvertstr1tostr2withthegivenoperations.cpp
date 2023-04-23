#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int countMinimuCost(string a1,string a2)
{
    int n = a1.length();
    int cost = 0;
    for(int i = 0;i<n;i++)
    {
        if(a1[i] != a2[i])
        {
            if(i<n && a1[i+1] != a2[i+1])
            {
                cost++;
                swap(a1[i],a1[i+1]);
            }
            else
                cost++;
        }
    }
    return cost;
}
int main()
{
    string a1 = "abb";
    string a2 = "baa";
    cout<<countMinimuCost(a1,a2);
    return 0;
}
