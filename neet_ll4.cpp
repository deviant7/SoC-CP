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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> v;
        ListNode* ptr=head;
        while(ptr!=nullptr){
            v.push_back(ptr);
            ptr=ptr->next;
        }

        int k=v.size()-n+1;
        if(k==1)return head->next;
        if(n==1){v[k-2]->next=nullptr;
        return head;}
        v[k-1-1]->next=v[k+1-1];
        return head;
    }
};
