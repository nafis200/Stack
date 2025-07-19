#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
     int val;
     Node* prev;
     Node* next;
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
     }
};

class Mystack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        sz++;
    }
    void pop(){
        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == NULL){
            head = NULL;
             sz--;
            return;
        }
        tail->next = NULL;
         sz--;
    }

    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }

    bool empty(){
       return head == NULL ? true: false;
    }

};

int main(){
   Mystack st;
   st.push(10);
   st.push(20);

//    cout << st.top() << "\n";
//    st.pop();
//    if(st.empty() == false)
//    cout << st.top() << "\n";
while(!st.empty()){
    cout << st.top() << "\n";
    st.pop();
}
}