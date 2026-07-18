class Solution {
public:
            // int GCD (int m, int s){
            //     int num=s;
            //     while(num > 0){
            //         if(s % num ==0 && m % num == 0) return num;
            //         num--;
            //     }
            //     return -1;
            // }
 
    int findGCD(vector<int>& nums) {
        int m=0;
        int s=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > m) m=nums[i];
            if (nums[i] < s) s=nums[i];
        }
        return __gcd(m,s);
    }
};