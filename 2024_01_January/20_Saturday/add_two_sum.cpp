/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *head = new ListNode(0);
    ListNode *tail = head;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0)
    {
      int dig1 = (l1 != nullptr) ? l1->val : 0;
      int dig2 = (l2 != nullptr) ? l2->val : 0;

      int sum = dig1 + dig2 + carry;
      int digit = sum % 10;
      carry = sum / 10;

      ListNode *newNode = new ListNode(digit);
      tail->next = newNode;
      tail = tail->next;

      l1 = (l1 == nullptr) ? nullptr : l1->next;
      l2 = (l2 == nullptr) ? nullptr : l2->next;
    }

    ListNode *result = head->next;
    delete head;
    return result;
  }
};