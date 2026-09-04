class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=INT_MAX;
        vector<int>m(n,0);
        for(int i=n-1; i>=0; i--){
            mini=min(mini, nums[i]);
            m[i]=mini;
        }

        for(int i=0; i<n; i++){
            maxi=max(maxi,nums[i]);

            if(maxi - m[i] <= k){
                return i;
            }
        }

        return -1;
        
    }
};