class Solution {
public:
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left,ListNode* right) {
        ListNode* temp = new ListNode(-1);
        ListNode* curr = temp;

        while(left != NULL && right != NULL) {
            if(left->val <= right->val) {
                curr->next = left;
                left = left->next;
            }else {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }

        while(left != NULL) {
            curr->next = left;
            left = left->next;
            curr = curr->next;
        }

        while(right != NULL) {
            curr->next = right;
            right = right->next;
            curr = curr->next;
        }

        return temp->next;
    }

    
    ListNode* mergesort(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* mid = findMiddle(head);

        ListNode* right = mid->next;

        mid->next = NULL;

        ListNode* left = mergesort(head);

        right = mergesort(right);

        return merge(left,right);
    }

    ListNode* sortList(ListNode* head) {
        return mergesort(head);
    }
};