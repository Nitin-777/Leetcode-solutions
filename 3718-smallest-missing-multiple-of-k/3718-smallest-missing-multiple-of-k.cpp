class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        set<int>st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
       int i=1;
        while(true){
            int num=k * i;
          
          if(st.find(num) == st.end()) return num;
          else i++;
        }

        return -1;
    }
};