#include<iostream>

using namespace std;

int setIthBit(int n,int i)
{
    int mask = (1<<i);
    n = n|mask;
    return n;
}
int main()
{
    return 0;
}