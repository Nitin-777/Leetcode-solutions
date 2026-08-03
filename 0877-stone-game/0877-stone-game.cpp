class Solution {
public:
           int t[501][501];
          int solve(int i,int j, vector<int>&piles){
                      
                      if(i >= j) return 0;
                      if(t[i][j] != -1) return t[i][j];
                  int take_i= piles[i] + min(solve(i+2,j,piles) , solve(i+1, j-1, piles));
                  int take_j= piles[j] + min(solve(i,j-2,piles) , solve(i+1,j-1,piles));

                  return t[i][j]=max(take_i, take_j);
          }

    bool stoneGame(vector<int>& piles) {

        int sum=accumulate(piles.begin(),piles.end(),0);
           
           int i=0;
           int j=piles.size()-1;

           memset(t,-1,sizeof(t));

           int a=solve(i,j,piles);

           return a > sum/2;

    }
};