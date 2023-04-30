#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

int findRadius(vector<int> &houses,vector<int> &heaters)
{
    sort(houses.begin(),houses.end());
    sort(heaters.begin(),heaters.end());
    int n = houses.size();
    int m = heaters.size();
    int i = 0;
    int j = 0;
    int res = 0;
    while(i<n && j<m)
    {
        int dist1 = abs(houses[i]-heaters[j]);
        int dist2 = INT_MAX;
        if(j+1<m)
        {
            dist2 = abs(houses[i]-heaters[j+1]);
        }
        if(dist1<dist2)
        {
            res = max(res,dist1);
            i++;
        }
        else   
            j++;
    }
    return res;
}
int main()
{
    return 0;
}