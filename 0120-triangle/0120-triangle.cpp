class Solution {
public:
           int solve(int i, int j,int n,  vector<vector<int>>& triangle, vector<vector<int>>& dp){
             if(i == n-1) return triangle[i][j];

             if(dp[i][j] != INT_MAX) return dp[i][j];

               int d=triangle[i][j] + solve(i+1,j,n,triangle,dp);
               int dh=triangle[i][j] + solve(i+1,j+1,n,triangle,dp);

               return dp[i][j] = min(d,dh);
           }

    int minimumTotal(vector<vector<int>>& triangle) {
        int row=triangle.size();
        int col=triangle[0].size();
         int n=triangle.size();
        vector<vector<int>>dp(n, vector<int>(n,INT_MAX));
       
        
        return solve(0,0,n,triangle, dp);
    }
};