class Solution {
public:
        
    int longestSubsequence(vector<int>& nums) {
          int n=nums.size();
          int x=nums[0];
          bool zero=true;
          if(nums[0] != 0) zero=false;
          for(int i=1; i<n; i++){
             x^=nums[i];
             if(nums[i] != 0){
                zero=false;
             }
          }

          if(zero) return 0;

          return (x == 0) ? n-1 : n;
    }
};