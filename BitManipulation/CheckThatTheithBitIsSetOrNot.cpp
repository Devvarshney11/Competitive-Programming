#include<iostream>

using namespace std;

bool check(int n,int i)
{
    int mask = 1<<i;
    bool is_set = mask&n;
    return is_set;
}
int main()
{
    return 0;
}