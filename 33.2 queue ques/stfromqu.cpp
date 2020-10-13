#include<iostream>
#include<queue>
using namespace std;

class stack{

    queue<int> q;

    public:

    void push(int x){

        queue<int> temp;
        temp.push(x);
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }

        swap(q,temp);
    }

    void pop(){
        q.pop();
    }

    int peek(){
        return q.front();
    }

    bool empty(){
        return q.empty();
    }

};

int main(){


    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    while(!st.empty()){
        cout<<st.peek()<<endl;
        st.pop();
    }

    return 0;
}