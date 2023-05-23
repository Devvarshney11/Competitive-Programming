#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<climits>

using namespace std;

class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int nextGreaterElement(int n) {
        if(n>=2147483647)
            return -1;
        string num = to_string(n);
        int l = num.length();
        int idx = l-1;
        while(idx>=0)
        {
            if(idx>0 && num[idx]>num[idx-1])
            {
                break;
            }
            idx--;
        }
        if(idx == -1)
            return -1;
        int prev = idx;
        for(int i = idx+1;i<l;i++)
        {
            if(num[i]>num[idx-1] && num[prev]>=num[i])
            {
                prev = i;
            }
        }
        swap(num[prev],num[idx-1]);
        reverse(num.begin()+idx,num.end());
        long ans=stol(num);
        return ans>INT_MAX?-1:ans;
    }
};
int main()
{
return 0;
}