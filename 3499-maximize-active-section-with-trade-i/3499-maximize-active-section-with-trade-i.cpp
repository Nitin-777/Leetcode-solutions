class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int>zero;
        int one=0;
        int cnt=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1') one++;
        }
        int i=0;
        while( i < s.size()){
            if(s[i] == '0'){
              int start=i;
              while(i < s.size() && s[i] == '0') i++;
              zero.push_back( i - start);
            }
            else{
            i++;
            }
        }
          int maxi=0;
       for(int i=1; i<zero.size() ; i++){
            maxi=max(maxi, (zero[i] + zero[i-1]));
       }
       return maxi + one;
    }

};