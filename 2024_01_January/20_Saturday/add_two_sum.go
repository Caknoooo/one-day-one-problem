/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    head := &ListNode{Val: 0, Next: nil}
    tail := head
    carry := 0

    for l1 != nil || l2 != nil || carry != 0 {
        dig1 := 0
        if l1 != nil {
            dig1 = l1.Val
            l1 = l1.Next
        }

        dig2 := 0
        if l2 != nil {
            dig2 = l2.Val
            l2 = l2.Next
        }

        sum := dig1 + dig2 + carry
        digit := sum % 10
        carry = sum / 10

        newNode := &ListNode{Val: digit, Next: nil}
        tail.Next = newNode
        tail = tail.Next
    }   

    return head.Next
}