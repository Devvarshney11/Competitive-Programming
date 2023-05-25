#include <iostream>
#include <vector>

using namespace std;

// By Bitmasking
// Constraints : 0<=num<=60

class Set
{
    long long mask = 0;
    public:
    void add(int num)
    {   
        mask = mask|(1<<num);
    }
    void remove(int num)
    {
        mask = ~(1<<num)&mask;
    }
    void printAllElements()
    {
        long long temp = mask;
        for(int i = 0;i<61;i++)
        {
            if(temp&1)
                cout<<i<<" ";
            temp = temp>>1;
        }
        cout<<endl;
    }

};

int main()
{
    Set s;
    s.add(1);
    s.add(5);
    s.add(9);
    s.add(1);
    s.add(10);
    s.add(60);
    s.printAllElements();
    return 0;
}