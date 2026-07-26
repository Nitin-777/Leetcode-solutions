class Solution {
public:
      
      int n;
      unordered_map<int,int>mpp;
      int t[2001][2001];

      bool solve(vector<int>stones,int curr, int jump){
          if(curr == n-1) return true;

          bool result = false;
          if(t[curr][jump] != -1) return t[curr][jump];

          for(int i=jump-1; i<=jump+1; i++){
            if(i > 0){
                int next_stone= stones[curr] + i;
                if(mpp.find(next_stone) !=  mpp.end()){
                    result =  result || solve(stones, mpp[next_stone], i); 
                }
            }
          }
          return t[curr][jump] = result;
      }
       
    bool canCross(vector<int>& stones) {
        n=stones.size();
        memset(t,-1,sizeof(t));

        if(stones[1] != 1) return false;

        for(int i=0; i<stones.size(); i++){
            mpp[stones[i]] = i;
        }

        return solve(stones,0,0);
        
    }
};