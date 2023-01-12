#include <iostream>
#include <vector>

using namespace std;

void prefixSum1D(vector<int> &arr, vector<int> &prefix)
{
    int n = arr.size();
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }
}
void prefixSum2D(vector<vector<int>> &arr, vector<vector<int>> &prefix)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefix[i][j] += arr[i][j];
            if (i - 1 >= 0)
                prefix[i][j] += prefix[i - 1][j];
            if (j - 1 >= 0)
                prefix[i][j] += prefix[i][j - 1];
            if (j - 1 >= 0 && i - 1 >= 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }
}
int main()
{
    vector<vector<int>> arr{
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}};
    vector<vector<int>> prefix(4,vector<int>(5));
    prefixSum2D(arr,prefix);
    for(int i = 0 ;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout<<prefix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}