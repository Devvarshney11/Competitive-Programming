#include<iostream>

using namespace std;

//T.C : O(1)
int returnXOR(int n)
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
int main()
{
    return 0;    
}