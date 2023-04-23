#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

pair<int,int> compute(int s1,int s2)
{
    if(s1<=0 && s2<=0)
        return {-1,-1};
    int mini = max(s1,s2)-min(s1,s2)+1;
    int maxi = s1+s2-1;
    if(mini>maxi)
        return {-1,-1};
    return {mini,maxi};
}
int main()
{
    int s1,s2;
    cin>>s1>>s2;
    pair<int,int> side3 = compute(s1,s2);
    cout<<side3.first<<" "<<side3.second<<endl;
    return 0;
}