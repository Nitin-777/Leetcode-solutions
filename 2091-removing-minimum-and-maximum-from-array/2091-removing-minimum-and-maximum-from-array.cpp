class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int mi=-1;
         int ma=-1;
         int maxi=INT_MIN;
         int mini=INT_MAX;
         int n=nums.size();
         int ans=INT_MAX;

         for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi=nums[i];
                ma=i;
            }
             if(nums[i] < mini){
                mi=i;
                mini=nums[i];
            }
         }

              int leftIndex= min(mi, ma);
              int rightIndex=max(mi, ma);
               
              ans=leftIndex + 1+ (n- rightIndex);

              ans=min(ans, rightIndex+1);

              ans=min(ans, n-leftIndex);
            

         return ans;


    }
};