class Solution {
public: 
              const int MOD= 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
            int ans=0;
            sort(nums.begin(),nums.end());
            int n=nums.size();
            vector<int>power(n,0);
            power[0]=1;
            for(int i=1; i<n; i++){
                power[i]= (power[i-1] * 2) % MOD;
            }

            int l=0, r=nums.size()-1;
            while(l <= r){
                if(nums[l] + nums[r] <= target){
                    int diff=r-l;
                    ans=(ans  % MOD + power[diff]) % MOD;

                    l++;
                }

                else r--;
                
            }

            return ans % MOD;
    }
};