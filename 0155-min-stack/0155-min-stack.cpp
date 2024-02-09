class MinStack {
public:
    stack<int> s;
    int mini;  

    MinStack() {
        mini = INT_MAX;  
    }

    void push(int data) {
        if (data <= mini) {
            s.push(mini);  
            mini = data;
        }
        s.push(data);
    }

    void pop() {
        if (!s.empty()) {
            if (s.top() == mini) {
                s.pop();  
                if (!s.empty()) {
                    mini = s.top();  
                    s.pop();  
                } else {
                    mini = INT_MAX; 
                }
            } else {
                s.pop();  
            }
        }
    }

    int top() {
        return s.empty() ? -1 : s.top();
    }

    int getMin() {
        return s.empty() ? -1 : mini;
    }
};
