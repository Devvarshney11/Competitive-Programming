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
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == 0 || head->next == 0)
        return head;
    ListNode *tail = head;
    int count = 1;
    while (tail->next != 0)
    {
        count++;
        tail = tail->next;
    }
    k = k % count;
    if (k == 0)
        return head;
    ListNode *fast = head;
    ListNode *slow = head;
    while (k--)
    {
        fast = fast->next;
    }
    ListNode *prev = 0;
    while (fast)
    {
        fast = fast->next;
        prev = slow;
        slow = slow->next;
    }
    if (prev == 0)
    {
        return head;
    }
    prev->next = 0;
    tail->next = head;
    head = slow;
    return head;
}
int main()
{
    return 0;
}