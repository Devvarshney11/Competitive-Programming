#include <iostream>

using namespace std;

long long pow(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y == 1)
    {
        return x;
    }
    long long p = pow(x, y / 2);
    if (y & 1)
    {
        return x * p * p;
    }
    return p * p;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<pow(x,y)<<endl;
    return 0;
}