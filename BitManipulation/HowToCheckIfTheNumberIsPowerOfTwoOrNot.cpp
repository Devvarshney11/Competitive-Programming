#include<iostream>

using namespace std;

int main()
{
    int n;
    if(n&(n-1) == 0)
        cout<<"The Number is power of two"<<endl;
    else 
        cout<<"The number is not"<<endl;
    return 0;
}