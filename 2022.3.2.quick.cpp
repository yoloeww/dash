class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode p1 = head, p2 = head;
        while (true) {
            if (p2.next == null) {
                return p1;
            }
            if (p2.next.next == null) {
                return p1.next;
            }
            p2 = p2.next.next;
            p1 = p1.next;
        }
    }
}

