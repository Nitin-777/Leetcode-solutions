class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string result="";
        int n=s.size();
        for(int len=k; len<=n; len++){
           
            for(int i=0; i<=n-len; i++){
                 int ones=0;
             string temp= s.substr(i,len);
              for(int j=0; j<temp.size(); j++){
                 if(temp[j] == '1') ones++;
              }
              if(ones==k){
                if(result.empty() || temp < result) result=temp;
              }
            }

            if(!result.empty()) return result;
        }

        return result;
    }
};