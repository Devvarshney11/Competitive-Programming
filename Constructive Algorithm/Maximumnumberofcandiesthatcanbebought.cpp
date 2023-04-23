// Given an array arr[] of size n where arr[i] is the number of candies of type i. You have an unlimited amount of money. The task is to buy as many candies as possible satisfying the following conditions: 
// If you buy x(i) candies of type i (clearly, 0 ≤ x(i) ≤ arr[i]), then for all j (1 ≤ j ≤ i) at least one of the following must hold: 
 

// x(j) < x(i) (you bought less candies of type j than of type i)
// x(j) = 0 (you bought 0 candies of type j)

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int maxCandies(vector<int> &arr)
{
    int n = arr.size();
    int min = arr[n-1];
    int candies = arr[n-1];

    for(int i = n-2;i>=0;i--)
    {
        if(min>arr[i])
        {
            candies += arr[i];
            min = arr[i];
        }
        else
        {
            if(min-1>0 && min-1<arr[i])
            {
                candies += min-1;
                min -= 1;
            }
                
        }
    }
    return candies;
}
int main()
{
    vector<int> arr{1,1,1,1};
    cout<<maxCandies(arr);
    return 0;
}