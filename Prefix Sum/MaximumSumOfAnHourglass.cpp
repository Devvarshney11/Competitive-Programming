#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void createPrefix(vector<vector<int>>& grid,vector<vector<int>>& prefix,int &n,int &m)
    {
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                prefix[i][j] = grid[i][j];
                if(i-1>=0)
                    prefix[i][j] += prefix[i-1][j];
                if(j-1>=0)
                    prefix[i][j] += prefix[i][j-1];
                if(i-1>=0 && j-1>=0)
                    prefix[i][j] -= prefix[i-1][j-1];
            }
        }
    }
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> prefix(n,vector<int>(m));
        createPrefix(grid,prefix,n,m);
        int maxSum = 0;
        int i = 0;
        while(i+2<n)
        {
            int j = 0;
            while(j+2<m)
            {
                int x1 = i;
                int y1 = j;
                int x2 = i+2;
                int y2 = j+2;
                int temp = prefix[x2][y2];
                if(x1-1>=0)
                    temp -= prefix[x1-1][y2];
                if(y1-1>=0)
                    temp -= prefix[x2][y1-1];
                if(x1-1>=0 && y1-1>=0)
                    temp += prefix[x1-1][y1-1];
                temp -= (grid[x1+1][y1]+grid[x2-1][y2]);
                if(temp>maxSum)
                    maxSum = temp;
                j++;
            }
            i++;
        }
        return maxSum;
    }
};
int main()
{
    return 0;
}