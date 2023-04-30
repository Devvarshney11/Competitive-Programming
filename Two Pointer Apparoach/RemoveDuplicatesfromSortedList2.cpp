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
};

ListNode *deleteDuplicates(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *temp = head;
    ListNode *prev = 0;
    while (temp)
    {
        if (temp->next && temp->val == temp->next->val)
        {
            ListNode *n;
            while (temp && temp->next && temp->val == temp->next->val)
            {
                n = temp->next;
                delete temp;
                temp = n;
            }
            if (prev == 0)
            {
                head = temp->next;
                delete temp;
                temp = head;
            }
            else
            {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}