**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* Insert(ListNode* &ptr){
    ListNode* l=new ListNode(ptr->val);
    return l;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode sortedlist;
        ListNode* curr=&sortedlist;
        ListNode *ptr1=list1,*ptr2=list2;
        while(ptr1!=nullptr && ptr2!= nullptr){
            if(ptr1->val < ptr2->val){
                curr->next=Insert(ptr1);
                curr=curr->next;
                ptr1=ptr1->next;
            }
            else{
                curr->next=Insert(ptr2);
                curr=curr->next;
                ptr2=ptr2->next;
            }
        }
        while(ptr1!=nullptr){
            curr->next=Insert(ptr1);
            curr=curr->next;
            ptr1=ptr1->next;
        }
        while(ptr2!=nullptr){
            curr->next=Insert(ptr2);
            curr=curr->next;
            ptr2=ptr2->next;
        }
        return sortedlist.next;
    }
};
