class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
          vector<int>g(n);
          for(int i=0; i<nums.size(); i++){
            if(mx < nums[i]) mx=nums[i];
            g[i]=__gcd(nums[i],mx);
          }  

          sort(g.begin(),g.end());
          int i=0, j=n-1;
          long long sum=0;

          while(i < j){
            sum+=(__gcd(g[i],g[j]));
            i++;
            j--;
          }
          return sum;
    }
};