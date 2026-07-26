class Solution {
public:

        vector<int>ans=vector<int>(46,-1);

    int climbStairs(int n) {
        if(n < 0) return 0;
        if (n == 0) return 1;

        if(ans[n] != -1) return ans[n];

        int one_step=climbStairs(n-1);
        int two_step=climbStairs(n-2);

        return ans[n]= one_step + two_step;

         
    }
};