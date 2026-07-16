class MyStack {
public:
    stack<int>st;
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int val=st.top();
        st.pop();
        return val;
    }
    
    int top() {
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else  return false;
    }
};

