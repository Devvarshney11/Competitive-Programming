#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int countCoins(int n)
{
    if(n == 1 || n == 10 || n == 25)
        return n;
    else if(n<10)
        return n;
    else if(n>9 && n<25)
    {
        int c = n/10+n%10;
        return c;
    }
    else 
    {
        int c = n/25;
        n = n%25;
        c += n/10+n%10;
        return c;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<countCoins(n);
    return 0;
}