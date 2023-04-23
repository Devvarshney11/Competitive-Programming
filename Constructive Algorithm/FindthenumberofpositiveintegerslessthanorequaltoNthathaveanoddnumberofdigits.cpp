#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<cmath>

using namespace std;

int countOdd(int num)
{
    string number = to_string(num);
    int digits = number.size();
    int ans = 0;
    if(digits&1)
        ans += num-pow(10,digits-1)+1;
    digits--;
    while(digits>0)
    {
        if(digits&1)
            ans += pow(10,digits);
        digits--;
    }
    ans -= 1;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<countOdd(n);
    return 0;
}