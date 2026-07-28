class Solution {
public:
    string smallestPalindrome(string s) {
        
       int n=s.size();
       if(n == 1) return s;
       int half=n/2;
        string m=s.substr(0,half);
        sort(m.begin(),m.end());
        string ans=m;

        if(n % 2){
            ans+=s[half];
        }

        reverse(m.begin(),m.end());
        ans=ans + m;

       return ans;
    }
};