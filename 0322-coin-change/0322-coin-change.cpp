class Solution {
public:

          int solve(int i, int amount, vector<int>& coins, vector<vector<int>>&dp){
               
                if(amount == 0) return 0;

               if(i == 0) {
                   if(amount % coins[0] == 0)
                   return amount / coins[0];
                   return INT_MAX;
                }
                if(amount < coins[i]) return solve(i-1, amount , coins, dp);

               if(dp[i][amount] != -1) return dp[i][amount];

               int notTake= 0 + solve(i-1, amount, coins, dp);
               int take=INT_MAX;
               if(amount >= coins[i]){
                int res= solve(i, amount - coins[i], coins, dp);
                if(res != INT_MAX){
                    take=1 + res;
                }

               }

               return dp[i][amount] = min(take,notTake);
          }

    int coinChange(vector<int>& coins, int amount) {
            int n=coins.size();
           vector<vector<int>>dp(n, vector<int>(amount+1, -1));

           int ans=solve(n-1, amount, coins,dp);

           return (ans == INT_MAX) ? -1 : ans;
    }
};