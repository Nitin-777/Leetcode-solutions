class Solution {
public:
            
           int t[201][20005];

            bool solve(int n, int s, int sum, vector<int>& nums){
                  
                    if(n < 0 ) return false;

                    if(s == sum) return  true;

                    if(t[n][s] != -1) return t[n][s];

                    bool take= solve(n-1, s+nums[n], sum, nums);
                    bool notTake=solve(n-1, s, sum, nums);

                    return t[n][s] = take || notTake;

            }

    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        memset(t, -1, sizeof(t));
        for(auto &num : nums){
            sum+=num;
        }

        if(sum % 2 != 0) return false;
        sum/=2;

        return solve(n-1,0, sum, nums);
    }
};