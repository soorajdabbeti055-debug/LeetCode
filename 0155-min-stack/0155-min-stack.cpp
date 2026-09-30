class MinStack {
    private:
    stack<int>minst;
    stack<int>mainst;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        mainst.push(value);
        if(minst.empty()){
            minst.push(value);
        }
        else{
            minst.push(min(minst.top(),value));
        }
    }
    
    void pop() {
        mainst.pop();
        minst.pop();
    }
    
    int top() {
        return mainst.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */