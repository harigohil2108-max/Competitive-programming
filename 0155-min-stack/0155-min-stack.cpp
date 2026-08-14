class MinStack {
public:
int tope = -1;
    pair<int,int> p[100000];
    MinStack() {
                            
        
    }
    
    void push(int value) {
        int x = value;
        tope++;
        if(tope==0){
            p[tope].first=x;
            p[tope].second=x;
        }else{
        p[tope].first=x;
        p[tope].second= min(x,p[tope-1].second);
        
        }
        
    }
    
    void pop() {
        tope--;
        
    }
    
    int top() {
        return p[tope].first;
    }
    
    int getMin() {
        return p[tope].second; 
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