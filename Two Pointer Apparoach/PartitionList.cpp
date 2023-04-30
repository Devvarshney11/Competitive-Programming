#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class ListNode
{
    public:
        int val;
        ListNode *next;
        ListNode(int val)
        {
            this->val = val;
            next = 0;
        }
};

ListNode *partition(ListNode *head, int x)
{
    ListNode *lessh = new ListNode(-1);
    ListNode *lesst = lessh;
    ListNode *bigh = new ListNode(-1);
    ListNode *bigt = bigh;
    ListNode *temp = head;
    while (temp)
    {
        if (temp->val < x)
        {
            lesst->next = temp;
            lesst = lesst->next;
        }
        else
        {
            bigt->next = temp;
            bigt = bigt->next;
        }
        temp = temp->next;
    }
    lesst->next = bigh->next;
    bigt->next = 0;
    return lessh->next;
}

int main()
{
    return 0;
}