class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         int row=grid.size();
         int col=grid[0].size();

         vector<vector<int>>ans(row, vector<int>(col,0));

         int total=row*col;
         for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                 
                 int curr=(i * col) + j;
                 int val= (curr + k) % total;
                 ans[val/col][val%col]=grid[i][j];
            }
         }
         return ans;
    }
};