#include<iostream>

using namespace std;

long long pow(int x,int y)
{
    if(y == 0)
    {
        return 1;
    }
    if(y == 1)
    {
        return x;
    }
    long long p = pow(x,(y>>1));
    if(y&1)
        return x*p*p;
    return p*p;
}
int order(int x)
{
    int n = 0;
    while(x>0)
    {
        n++;
        x = x/10;
    }
    return n;
}
bool armstrongNumber(int n)
{
    int o = order(n);
    int temp = n;
    int arm = 0;
    while(temp > 0)
    {
        int rem = temp%10;
        
        temp = temp/10;
        arm += pow(rem,o);
    }
    cout<<arm<<endl;
    return arm == n;
}
int main()
{
    int n;
    cin>>n;
    if(armstrongNumber(n))
        cout<<"The Number is Armstrong"<<endl;
    else 
        cout<<"The Number is not Armstrong"<<endl;
    return 0;
}