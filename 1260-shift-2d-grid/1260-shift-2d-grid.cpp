class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         int row=grid.size();
         int col=grid[0].size();

         vector<vector<int>>ans(row, vector<int>(col,0));
         vector<int>trial;
         for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                trial.push_back(grid[i][j]);
            }
         }

       k= k % trial.size();
        reverse(trial.begin(),trial.end());
       reverse(trial.begin(),trial.begin()+k);
       reverse(trial.begin()+k, trial.end());
      
       int l=0;

       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans[i][j]=trial[l];
            l++;
        }
       }
         
         return ans;
    }
};