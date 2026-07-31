class Solution {
public: 
                const int MOD= 1e9 + 7;

             

    int numSubseq(vector<int>& nums, int target) {
       // vector<int>arr;
        long long ans=0;
        // solve(0,nums,ans,arr,target);
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        int n=nums.size();

        vector<int>p(n);
        p[0]=1;
        for(int i=1; i<n; i++){
            p[i]= (2LL* p[i-1]) % MOD;
        }
        

        while(i <= j){
            if(nums[i] + nums[j] <= target){
                ans = (ans + p[j - i]) % MOD;
                 i++;
            }
            else j--;

        }
         return ans;
    }
};