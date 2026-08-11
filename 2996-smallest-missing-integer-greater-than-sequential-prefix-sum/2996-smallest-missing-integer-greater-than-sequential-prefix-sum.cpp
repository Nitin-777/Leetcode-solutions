class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto &num : nums){
            mpp[num]++;
        }
        
        int cnt=1;
        int sum=nums[0];
        int mx=0;
        int maxSum=nums[0];
        int n=nums.size();

        if(n <= 1) return nums[0] + 1;

        for(int i=1; i<n; i++){
            if(nums[i] == (nums[i-1] + 1)){
                cnt++;
                sum+=nums[i];
            }
            else break;
        }
          while(true){
             if(mpp.find(sum) == mpp.end()) return sum;
             sum++;
          }

            return -1;
    }
};