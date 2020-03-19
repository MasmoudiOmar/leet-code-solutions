class MinStack {
public:
    int min;
    vector<int> v;
    MinStack() {
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        if(!v.empty())return v[v.size()-1];
        return 0;
    }
    
    int getMin() {
        if(v.empty())
            return 0;
        min = INT_MAX;
        for(auto c : v)
            if(min>c)
                min=c;
        return min;
    }
};
