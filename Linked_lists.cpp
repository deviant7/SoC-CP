// #include<iostream>
// #include<string>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

#define head node<string>::Head
#define tail node<string>::Tail

template<typename T>
class node{
    public:
    T data;
    node* next;
    static node* Head;
    static node* Tail;

    node(T val){
        data=val;
        next=nullptr;
    }
    node(){}
};

template<typename T>
node<T>* node<T>::Head = nullptr;

template<typename T>
node<T>* node<T>::Tail = nullptr;

template<typename T>
void printList(node<T>* p){
    while(p!=nullptr){
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<"NULL"<<endl;
}

template<typename T>
void push_Tail(T s){
    node<T>* n=new node<T>(s);
    if(tail==nullptr){
        tail=n;
    }
    else{
    tail->next=n;
    tail=tail->next;
    }
}

void DeleteAtN(int n){
    if(n==0){
        head=head->next;
    }
    auto ptr= head;
    for(int i=0;i<n-1;i++){
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
}

void pop_Tail(){
    auto ptr= head;
    while(ptr->next!=tail){
        ptr=ptr->next;
    }
    ptr->next=nullptr;
}

template<typename T>
void InsertAtN(int n,T s){
    node<T>* p = new node<T>(s);
    if(n==0){
        p->next=head;
        head=p;
    }
    auto ptr= head;
    for(int i=0;i<n-1;i++){
        ptr=ptr->next;
    }
    p->next=ptr->next;
    ptr->next=p;
}

template<typename T>
bool search(T key){
    auto ptr=head;
    while(ptr!=nullptr){
        if(ptr->data==key)
        return true;
        ptr=ptr->next;
    }
    return false;
}
template<typename T>
void Delete(T val){
    auto ptr=head;
    if(ptr->data==val)head=nullptr;

    while(ptr->next->data!=val){
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
}
void reverseList(){
    if(head->next==nullptr)
    return;

    auto prev=tail->next;
    tail=head;
    auto cur=head;
    auto nxt=head->next;
    while(nxt!=nullptr){
        cur->next=prev;
        prev=cur;
        cur=nxt;
        nxt=nxt->next;
    }
    cur->next=prev;
    head=cur;
}

template<typename T>
node<T>* recurseReverseList(node<T>* Head){
    if(Head==nullptr || Head->next==nullptr) return Head;

    node<T>* newhead=recurseReverseList(Head->next);
    Head->next->next=Head;
    Head->next=nullptr;
    tail=Head;
    return newhead;
}

int main(){
    node<string> a("ravi"), b("rahul"),c("priya");
    a.next=&b;
    b.next=&c;

    head = &a;
    tail = &c;

    printList(head);

    string s="balram";
    push_Tail(s);
    printList(head);

    int n=2;
    DeleteAtN(n);
    printList(head);

    s=s+" bhai";

    InsertAtN(n,s);
    printList(head);

    reverseList();
    printList(head);
    node<string>* newhead=recurseReverseList(head);
    head=newhead;
    printList(head);

    pop_Tail();
    printList(head);

    Delete("rahul");
    printList(head);

    cout<<search("balram bhai")<<endl;

    return 0;
}