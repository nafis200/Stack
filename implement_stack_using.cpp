#include<bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    list<int>v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size() > 0){
            v.pop_back();
        }
    }

    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }

    bool empty(){
       return v.empty();
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