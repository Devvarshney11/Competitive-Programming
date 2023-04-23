#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string maxValue(string a, string b)
{
    sort(b.begin(),b.end());
    int j = b.length()-1;
    int n = a.length();
    for(int i = 0;i<n;i++)
    {
        if(j<0)
            return a; 
        if(b[j]>a[i])
        {
            a[i] = b[j];
            j--;
        }
    }
    return a;
}

int main()
{
    cout<<maxValue("1234","4213");
    return 0;
}