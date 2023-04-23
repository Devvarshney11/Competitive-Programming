// Given an array arr[] and an integer K,
// the task is to find whether the array can be divided into two sub-arrays such that the absolute difference
// of the sum of the elements of both the sub-arrays is K.
#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> &arr, int k)
{
    int sum1 = accumulate(arr.begin(), arr.end(), 0);
    int sum2 = 0;
    for(int &it : arr)
    {
        sum2 += it;
        sum1 -= it;
        if(abs(sum1-sum2) == k)
            return true;
    }
    return false;
}
int main()
{
    vector<int> arr{2, 4, 1, 5};
    cout<<isPossible(arr,2);
    return 0;
}