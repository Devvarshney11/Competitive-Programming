// Given an array arr[] of positive integers and an integer x, the task is to minimize the sum of elements of the array after performing the given operation at most once.
// In a single operation, any element from the array can be divided by x (if it is divisible by x) and at the same time, any other element from the array must be multiplied by x.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

int minSum(vector<int> &arr, int x)
{
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    for (auto &it : arr)
    {
        if (it % x == 0 && it > max)
        {
            max = it;
        }
        if (it < min)
        {
            min = it;
        }
        sum += it;
    }
    if (max > min * x)
    {
        sum -= (min + max);
        sum += min * x;
        sum += max / x;
    }
    return sum;
}
int main()
{
    vector<int> arr{5, 5, 5, 5, 6};
    cout << minSum(arr, 3);
    return 0;
}