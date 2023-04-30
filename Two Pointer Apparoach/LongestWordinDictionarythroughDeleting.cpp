#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>

using namespace std;

bool check(string a,string b){
        int A = a.size();
        int B = b.size();
        while(A > 0 && B > 0)
        {
            int i = a.size() - A ;
            int j = b.size() - B ;
            if(a[i] == b[j])
            {
                A-- ;
            }
            B-- ;
        }
        return A==0;
    }
    string findLongestWord(string s, vector<string>& dictionary) {  
        string ans = "";
        for(auto &it : dictionary)
        {
            if(check(it,s))
            {
                if(it.length()==ans.length())
                {
                    if(it<ans)
                    {
                        ans = it;
                    }
                }
                if(it.length()>ans.length())
                {
                    ans = it;
                }
            }
        }
        return ans;
    }
int main()
{
return 0;
}