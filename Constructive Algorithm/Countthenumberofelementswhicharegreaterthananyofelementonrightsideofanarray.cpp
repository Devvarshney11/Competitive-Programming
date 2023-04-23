// Given an array Arr[]. 
// The task is to count the number of elements Arr[i] in the given array such that one 
// or more smaller elements are present on the right side of the element Arr[i] in array.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int countElements(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    int min = arr[n-1];
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr{ 3, 2, 1, 2, 3, 4, 5 } ;
    cout<<countElements(arr);
    return 0;
}