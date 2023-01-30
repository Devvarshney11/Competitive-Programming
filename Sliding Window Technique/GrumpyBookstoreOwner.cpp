#include <iostream>
#include <vector>

using namespace std;

int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
{
    int n = customers.size();
    int grump = 0;
    int normal = 0;
    int sum = 0;
    int gr = 0;
    int no = 0;
    int i;
    for (i = 0; i < minutes; i++)
    {
        sum += (grumpy[i] == 0) ? customers[i] : 0;
        no += customers[i];
        gr += (grumpy[i] == 0) ? customers[i] : 0;
    }
    grump = gr;
    normal = no;
    for (; i < n; i++)
    {
        sum += (grumpy[i] == 0) ? customers[i] : 0;
        no -= customers[i - minutes];
        no += customers[i];
        gr -= (grumpy[i - minutes] == 0) ? customers[i - minutes] : 0;
        gr += (grumpy[i] == 0) ? customers[i] : 0;
        if (normal - grump < no - gr)
        {
            grump = gr;
            normal = no;
        }
    }
    return (sum - grump + normal);
}

int main()
{
    return 0;
}