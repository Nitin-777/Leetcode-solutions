class Solution {
public:

           int digit(int num){
               int sum=1;
               while(num > 0){
                int digit= num % 10;
                sum*=digit;
                num/=10;
               }
               return sum;
           }

    int smallestNumber(int n, int t) {
        int num=n+10;

        for(int i=n; i<=num; i++){
            
            int sum=digit(i);

            if(sum % t == 0) return i;
        }

        return -1;
    }
};