#include<iostream>

using namespace std;

int FindXOR0toN(int n)
{
    if(n%4 == 0)
        return n;
    if(n%4 == 1)
        return 1;
    if(n%4 == 2)
        return n+1;
    if(n%4 == 3)
        return 0;
}

int FindXORLtoR(int l,int r)
{
    return FindXOR0toN(l-1)^FindXOR0toN(r);
}
int main()
{
    return 0;
}