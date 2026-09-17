class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
          int i=0,j=0;
          int n= arr.size();
          int minI=INT_MAX;
          vector<int>minIndex(n,INT_MAX);
          int sum=0;
          int result=INT_MAX;


          while(j < n){
            sum+=arr[j];

            while( i < j && sum > target){
                sum-=arr[i++];
            }

            if(sum == target){
                int len =j-i+1;

                if(i > 0 && minIndex[i-1] != INT_MAX){
                     result= min(result, len + minIndex[i-1]);
                }
                minI=min(len ,minI);
            }

            minIndex[j]=minI; 
            j++;

          }
         
         return result == INT_MAX ? -1 : result;
    }
};