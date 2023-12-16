class CustomStack {
public:
    stack<int>st;
    int len;
    CustomStack(int maxSize) {
        len=maxSize;
    }
    
    void push(int x) {
       if(st.size()<len) st.push(x);
    }
    
    int pop() {
        if(st.empty()) return -1;
        int top=st.top();
        st.pop();
        return top;
        
    }
    
    void increment(int k, int val) {
        int i=0;
        vector<int>temp;
        while(!st.empty())
        {
            int top=st.top();
            st.pop();
            temp.push_back(top);
        }
        int j=0;
        reverse(temp.begin(),temp.end());
        while(i<k && j<temp.size())
        {
            st.push(temp[j]+val);
            i++;
            j++;
        }
        while(j<temp.size())
        {
            st.push(temp[j]);
            j++;
        }
        
            
       
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */