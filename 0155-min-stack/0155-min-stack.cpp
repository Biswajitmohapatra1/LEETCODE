class MinStack {
public:
    //here the approach is to store two values in one index because of getmin implementation in
    //o(1) we have to know min in every index instead of traversing whole vector to get min
    vector<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            pair<int,int>p;
            p.first=val;
            p.second=val;
            st.push_back(p);
        }
        else
        {
            pair<int,int>p;
            p.first=val;
            int prevmin=st.back().second;
            p.second=min(prevmin,val);
            st.push_back(p);
        }
    }
    
    void pop() {
        if(st.empty())
        {
            return;
        }
        else
        {
           st.pop_back();
        }
    }
    
    int top() {
         if(st.empty())
        {
            return NULL;
        }
        else
        {
           pair<int,int>rightmostpair=st.back();
            return rightmostpair.first;
        }
    }
    
    int getMin() {
        if(st.empty())
        {
            return NULL;
        }
        else
        {
           pair<int,int>rightmostpair=st.back();
            return rightmostpair.second;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */