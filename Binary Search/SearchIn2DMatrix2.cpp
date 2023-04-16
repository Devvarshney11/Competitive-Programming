#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix,int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        if(matrix[low][high] == target)
            return true;
        if(matrix[low][high]>target)
            high--;
        else
            low++;
    }
    return false;
}
int main()
{
    return 0;
}