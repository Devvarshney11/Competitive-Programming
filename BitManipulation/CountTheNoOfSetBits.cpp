#include<iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    while(n != 0)
    {
        if(n&1 == 1)
            count++;
        n>>1;
    }
    return 0;
}