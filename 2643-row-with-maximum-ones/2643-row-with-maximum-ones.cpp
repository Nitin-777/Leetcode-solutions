class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
         vector<int>maxi;
         for(int i=0; i<mat.size(); i++){
            int cnt=0;
            for(int j=0; j<mat[0].size(); j++){
                 if(mat[i][j] == 1) cnt++;
            }
            maxi.push_back(cnt);
         }

         int ans=0;
         vector<int>idx{0,0};
         for(int i=0; i<maxi.size(); i++){
            if(ans < maxi[i]){
             ans=maxi[i];
             idx={i,ans};
            }
         }
         return idx;
    }
};