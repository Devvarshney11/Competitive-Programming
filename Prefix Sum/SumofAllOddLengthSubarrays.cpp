#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            if(i)
                arr[i] += arr[i-1];
        }
        sum += arr[n-1];
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(i == 0)
                {   
                    if((j+1)&1)
                        sum += arr[j];
                }
                else if((j-i+1)&1)  
                    sum += arr[j] - arr[i-1];
            }
        }
        return sum;
    }
};
int main()
{
   return 0; 
}