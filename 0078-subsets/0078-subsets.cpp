class Solution {
public:
            void solve(int i, vector<int>&nums, vector<vector<int>>&ans,vector<int>&trial){
                  if(i >= nums.size()){
                    ans.push_back(trial);
                      return;
                  }

                  trial.push_back(nums[i]);
                  solve(i+1,nums,ans,trial);
                  trial.pop_back();
                  solve(i+1,nums,ans,trial);
            }
             
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>>ans;
          vector<int>trial;
          int i=0;
          solve(i,nums,ans,trial);
          return ans;
    }
};