#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string printBalancedExpression(int a, int b, int c, int d)
{
    string ans = "";
    if((a==d && a) || (a==0 && c==0 || d == 0))
    {
        for(int i = 0;i<a;i++)
        {
            ans += "((";
        }
        for(int i = 0;i<c;i++)
        {
            ans += ")(";
        }
        for(int i = 0;i<d;i++)
        {
            ans += "))";
        }
        for(int i = 0;i<b;i++)
        {
            ans += "()";
        }
        return ans;
    }
    return "-1";
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<printBalancedExpression(a,b,c,d);
    return 0;
}