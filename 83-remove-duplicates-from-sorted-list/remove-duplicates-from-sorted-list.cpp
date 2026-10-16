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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        set<int> temp;
        ListNode* p = head;
        while(p!=NULL) {
            temp.insert(p->val);
            p=p->next;
        }
        ListNode* x = NULL;
        ListNode* y;

        for(auto i:temp) {
            if(x==NULL) {
                x=new ListNode(i);
                y=x;
            }
            else {
                p=x;
                while(p->next!=NULL) {
                    p=p->next;
                }
                x=new ListNode(i);
                p->next=x;
            }
        }
        return y;
    }
};