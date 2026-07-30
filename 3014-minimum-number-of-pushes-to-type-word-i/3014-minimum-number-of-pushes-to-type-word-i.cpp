class Solution {
public:
    int minimumPushes(string word) {
         int ans=0;
         int n=word.size();
         int cnt=1;

           while(n > 0){
            int take= min(8, n);
             ans+=(take * cnt);
             n-=take;
             cnt++;
           }

         return ans;
    }
};