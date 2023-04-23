#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isPossible(string &a, string &b)
{
    vector<char> A;
    vector<char> B;
    int n = a.length();
    for(int i = 0;i<n;i++)
    {
        if(a[i] != b[i])
        {
            A.push_back(a[i]);
            B.push_back(b[i]);
            if(A.size()>2)
            {
                return false;
            }
        }
    }
    if(A.size() == B.size() && B.size() == 0)
        return true;
    if(A[0] == A[1] && B[1] == B[0])
    {
        return true;
    }
    return false;
}
int main()
{
    string A = "GEEKSFORGEEKS";
    string B = "THESUPERBSITE";
    cout<<isPossible(A,B);
}