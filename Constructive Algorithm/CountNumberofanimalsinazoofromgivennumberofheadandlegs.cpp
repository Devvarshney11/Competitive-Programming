#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

pair<int,int> countRabbitsAndPeigons(int heads,int legs)
{
    int peigon = (4*heads-legs)>>1;
    int rabbits = heads-peigon;
    return {rabbits,peigon};
}
int main()
{
    pair<int,int> temp = countRabbitsAndPeigons(200,540);
    cout<<temp.first<<" "<<temp.second;
    return 0;
}