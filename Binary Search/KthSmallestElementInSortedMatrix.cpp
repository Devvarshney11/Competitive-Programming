#include <iostream>
#include <vector>

using namespace std;

int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int low = matrix[0][0];
    int high = matrix[row - 1][col - 1];
    int ans;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        int temp = col - 1;
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            while (temp >= 0 && matrix[i][temp] > mid)
            {
                temp--;
            }
            count += temp + 1;
        }
        if (count >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    return 0;
}