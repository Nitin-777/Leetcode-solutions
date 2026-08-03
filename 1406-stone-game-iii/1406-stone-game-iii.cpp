class Solution {
public:
           
             vector<int>t;

             int solve(int i, int n, vector<int>&stoneValue){
                    if(i >= n) return 0;

                    if(t[i] != -1) return t[i]; 
                     int result = INT_MIN;
                   result=max(result, stoneValue[i] - solve(i+1,n,stoneValue));
                    if(i + 1 < n){ 
                    result=max(result, stoneValue[i] + stoneValue[i+1]- solve(i+2,n,stoneValue));
                    }
                    if(i+2 < n){
                    result=max(result,stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - solve(i+3,n,stoneValue));
                    }

                    return t[i]=result;
             }



    string stoneGameIII(vector<int>& stoneValue) {

        int n=stoneValue.size();
         t.resize(n+1,-1);

        int ans=solve(0,n, stoneValue);

        if(ans > 0) return "Alice";
        else if(ans < 0) return "Bob";
        return "Tie";
        
    }
};