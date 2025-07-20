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
            v.pop_front();
        }
    }

    int front(){
        return v.front();
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

//    cout << st.front() << "\n";
//    st.pop();
//    if(st.empty() == false)
//    cout << st.front() << "\n";
while(!st.empty()){
    cout << st.front() << "\n";
    st.pop();
}
}