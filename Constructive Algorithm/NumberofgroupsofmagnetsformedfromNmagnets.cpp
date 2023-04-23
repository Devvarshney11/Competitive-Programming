#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int magnetGroups(vector<string> &magnets)
{
    int ans = 0;
    int n = magnets.size();
    for(int i = 1;i<n;i++)
    {
        if(magnets[i] != magnets[i-1])
            ans++;
    }
    ans++;
    return ans;
}
int main()
{
    vector<string> magnets{"10","10","10","10","10","01"};
    cout<<magnetGroups(magnets);
    return 0;
}