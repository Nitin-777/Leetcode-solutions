class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int copy=n;

        while(n > 0){
            int digit=n % 10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        int x= prod + sum;
        return (copy % x == 0);
    }
};