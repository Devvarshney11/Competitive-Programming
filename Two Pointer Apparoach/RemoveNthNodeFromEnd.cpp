#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class ListNode
{
    public:
        int data;
        ListNode* next;
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = 0;
    while (n--)
    {
        fast = fast->next;
    }
    while (fast)
    {
        fast = fast->next;
        prev = slow;
        slow = slow->next;
    }
    if (prev)
        prev->next = slow->next;
    else
        head = head->next;
    return head;
}
int main()
{
    return 0;
}