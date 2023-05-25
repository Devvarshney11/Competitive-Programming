#include<iostream>
#include<vector>

using namespace std;

int findFirstSetBit(int num)
{
    int count = 0;
    while(num && count<1)
    {
        if(num&1)
            count++;
        num = num>>1;
    }
    return count;
}
pair<int,int> FindSingleNumbers(vector<int> &arr)
{
    int XOR = 0;
    for(auto &it : arr)
    {
        XOR = XOR^it;
    }
    int i = findFirstSetBit(XOR);
    XOR = 0;
    int XOR1 = 0;
    int mask = (1<<i);
    for(auto &it : arr)
    {
        if(it&mask)
            XOR = XOR^it;
        else 
            XOR1 = XOR1^it;
    }
    return {XOR,XOR1};
}
int main()
{
    vector<int> arr{1,1,2,5,3,2,3,4,7,4};
    pair<int,int> p = FindSingleNumbers(arr);
    cout<<p.first<<" "<<p.second<<endl;
}