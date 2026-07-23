class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int mini=INT_MAX;
        int maxi=INT_MIN;
         int sum1=0;
         int sum2=0;
        for(int i=0; i<nums.size(); i++){
             sum1+=nums[i];
             sum2+=nums[i];
             mini=min(mini,sum1);
             maxi=max(maxi,sum2);
             if(sum2 < 0) sum2=0;
             if(sum1 > 0) sum1=0;
        }
       
        return max(abs(mini),abs(maxi));
        
    }
};