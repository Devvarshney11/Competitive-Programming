#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool perfectNumber(int n)
{
    int r = sqrt(n);
    int perfect = 0;
    for (int i = 1; i <= r; i++)
    {
        if (n % i == 0)
        {
            int a = i;
            int b = n / i;
            if (b != n)
            {
                perfect += b;
            }
            perfect += a;
        }
    }
    return perfect == n;
}
int main()
{
    int n;
    cin >> n;
    if (perfectNumber(n))
    {
        cout << "The number is perfect" << endl;
    }
    else
    {
        cout << "The number is not perfect" << endl;
    }
    return 0;
}