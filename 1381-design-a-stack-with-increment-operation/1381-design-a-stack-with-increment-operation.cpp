class CustomStack {
public:

       vector<int>ans;
       int size=0;
    CustomStack(int maxSize) {
        ans.reserve(maxSize);
        size=maxSize;
    }
    
    void push(int x) {
        if(ans.size() < size){
        ans.push_back(x);
        }
        
    }
    
    int pop() {
        int val=-1;
        if(!ans.empty()){
            val=ans.back();
            ans.pop_back();
        }
          return val;
    }
    
    void increment(int k, int val) {
        int i=0; 
        if(ans.size() > 0){
        while(i < ans.size() && i < k){
            ans[i]=ans[i] + val;
            i++;
        }
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