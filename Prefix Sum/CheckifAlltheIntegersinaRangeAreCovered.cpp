#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> temp(52,0);
        int n = ranges.size();
        for(int i = 0;i<n;i++)
        {
            temp[ranges[i][0]]++;
            temp[ranges[i][1]+1]--;
        }
        for(int i = 1;i<51;i++)
        {
            temp[i] += temp[i-1];
        }
        while(left<=right)
        {
            if(temp[left]==0)
                return false;
            left++;
        }
        return true;
    }
};

int main()
{
    return 0;
}