/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return nullptr;
        vector<Node*> v1,v2;

        Node* newhead=new Node(head->val);
        v1.push_back(head);

        Node* ptr1=head->next;
        Node* ptr2=newhead;
        v2.push_back(ptr2);
        while(ptr1!=nullptr){
            v1.push_back(ptr1);
            Node* newnode=new Node(ptr1->val);
            ptr2->next=newnode;
            ptr2=newnode;
            v2.push_back(ptr2);
            ptr1=ptr1->next;
        }
        ptr1=head;
        ptr2=newhead;
        while(ptr1!=nullptr){
            for(int i=0;i<v1.size();i++){
                if(ptr1->random==v1[i]){
                    ptr2->random=v2[i];
                }
                else if(ptr1->random==nullptr)
                ptr2->random=nullptr;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return newhead;
    }
};
