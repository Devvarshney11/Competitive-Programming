#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

pair<int,int> divideNumbers(int n)
{
    string num = to_string(n);
    string a = "";
    for(int i = 0;i<num.length();i++)
    {
        if(num[i] == '4')
        {
            a += '1';
            num[i] = '3';
        }
        else 
        {
            a += '0';
        }
    }
    return {stoi(num),stoi(a)};
}
int main()
{
    pair<int,int> temp = divideNumbers(25);
    cout<<temp.first<<" "<<temp.second;
    return 0;
}