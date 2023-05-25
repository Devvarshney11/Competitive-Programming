#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> findSubsets(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> sub;
    for(int i = 0;i<(1<<n);i++)
    {
        vector<int> temp;
        for(int bit = 0;bit<n;bit++)
        {
            if(i&(1<<bit))
                temp.push_back(arr[bit]);
        }
        sub.push_back(temp);
    }
    return sub;
}

int main()
{
    vector<int> arr{1,2,3};
    vector<vector<int>> sub = findSubsets(arr);
    for(auto &it : sub)
    {
        for(auto &x: it)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}