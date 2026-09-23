class Solution {
public:
      

    int minOperations(vector<int>& nums, int x) {
       int ans=INT_MAX;

       int i=0, j=0;
       int total=0;
       for(auto & it : nums) total+=it;
       int sum=0;
       total=total - x;
       int maxi=INT_MIN;
       while(j < nums.size()){
          sum+=nums[j];
         
          while(i <= j && sum > total){
              sum-=nums[i];
              i++;
          }
           if(sum == total){
            maxi=max(maxi,j-i+1);
          }
          j++;     
       }

    return (maxi == INT_MIN) ? -1 : nums.size() - maxi;
        
    }
};