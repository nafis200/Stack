#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
     int val;
     Node* next;
     Node* prev;
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
     }
};

class MyQueue{
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
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL){
            tail = NULL;
             sz--;
            return;
        }
        head->prev = NULL;
         sz--;
    }

    int front(){
        return head->val;
    }
    int back(){
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
   MyQueue st;
   int n; cin >> n;
   for(int i = 1; i <= n; i++){
     int val; cin >> val;
     st.push(val);
   }
while(!st.empty()){
    cout << st.front() << " " << st.back() << "\n";
    st.pop();
}
}