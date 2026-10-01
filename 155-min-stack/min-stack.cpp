class MinStack {
public:
    vector<int> val;
   vector<int> va;
    MinStack() {}

    void push(int value) {
        val.push_back(value);
         if ( va.empty() || value <= va.back())
            va.push_back(value);
        else
            va.push_back(va.back());
    }

    void pop() {
        val.pop_back();
        va.pop_back();
    }

    int top() {
        return val[val.size() - 1];
    }

    int getMin() {
        
        return va[va.size()-1];
    }
};