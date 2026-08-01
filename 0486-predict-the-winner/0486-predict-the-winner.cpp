class Solution {
public:
            
            int solve(int i, int j, vector<int>& nums){
                if(i > j) return 0 ;
                if(i == j) return nums[i];

                int take_i= nums[i] + min(solve(i+2,j,nums), solve(i+1, j-1, nums));
                int take_j= nums[j] + min(solve(i, j-2, nums), solve(i+1, j-1,nums));

                return max(take_i , take_j);
            }
     


    bool predictTheWinner(vector<int>& nums) {
        int i=0, j=nums.size();

        int total=accumulate(nums.begin(), nums.end(),0);

        int player_1=solve(i,j-1,nums);
        int player_2=total-player_1;

        return (player_1 >= player_2);
    }
};