class Solution {
public:
       
       void solve(int curr, int n, vector<int>&ans){
           
           if(curr > n) return;

           ans.push_back(curr);

           for(int i=0; i<=9; i++){
              int n_curr= curr * 10 + i;

              if(n_curr > n) return;

              solve(n_curr, n, ans);
           } 
       }
 
    vector<int> lexicalOrder(int n) {
         vector<int>ans;

         for(int i=1; i<=9; i++){
            solve(i, n , ans);
         }
         return ans;
    }
};