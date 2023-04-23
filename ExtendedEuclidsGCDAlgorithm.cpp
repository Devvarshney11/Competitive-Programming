#include<iostream>

using namespace std;

pair<int,int> extendedGCD(int a,int b)
{
    if(b == 0)
        return {1,1};
    pair<int,int> temp = extendedGCD(b,a%b);
    int x1 = temp.first;
    int y1 = temp.second;

    int x = y1;
    int y = x1-(a/b)*y1;
    return {x,y};
}
int main()
{
    pair<int,int> temp = extendedGCD(8,9);
    cout<<temp.first<<" "<<temp.second;
}