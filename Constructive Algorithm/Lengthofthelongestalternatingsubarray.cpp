#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int lengthOfLongestAlternatingSubstring(vector<int> &arr)
{
    int longest = 1;
    int cnt = 1;
    int n = arr.size();
    for(int i = 1;i<n;i++)
    {
        if(arr[i] * arr[i-1] <0)
        {
            cnt++;
            longest = max(longest,cnt);
        }
        else
            cnt = 1;
    }
    return longest;
}
int main()
{
    vector<int> arr{-5, -1, -1, 2, -2, -3};
    cout<<lengthOfLongestAlternatingSubstring(arr);
    return 0;
}