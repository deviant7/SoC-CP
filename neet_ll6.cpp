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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *ptr1=l1,*ptr2=l2;
        ListNode* dummy=new  ListNode;
        ListNode* newheadptr=dummy;

        while(ptr1!=nullptr && ptr2!=nullptr){
            ListNode* newnode=new  ListNode;
            dummy->next=newnode;
            newnode->val=(ptr1->val+ptr2->val+carry)%10;
            carry=(ptr1->val+ptr2->val+carry)/10;

            dummy=newnode;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1!=nullptr){
            ListNode* newnode=new  ListNode;
            dummy->next=newnode;
            newnode->val=(ptr1->val+carry)%10;
            carry=(ptr1->val+carry)/10;

            dummy=newnode;
            ptr1=ptr1->next;
        }
        while(ptr2!=nullptr){
            ListNode* newnode=new  ListNode;
            dummy->next=newnode;
            newnode->val=(ptr2->val+carry)%10;
            carry=(ptr2->val+carry)/10;

            dummy=newnode;
            ptr2=ptr2->next;
        }
        if(carry){
            ListNode* newnode=new  ListNode(carry);
            dummy->next=newnode;
        }
        return newheadptr->next;
    }
};