class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string result="";
        int n=s.size();
        int ones=0;
        int i=0, j=0;
        while(j < n){
            if(s[j] == '1') ones++;

            while(i<=j && ones > k){
                if(s[i] == '1') ones--;
                i++;
            }

            while(i <= j && s[i] =='0') i++;
             
            int len=j-i+1;
            string temp=s.substr(i, len);
            if(ones == k){
            if(result.empty()) result=temp;
            else if (temp.size() < result.size() ||
            (temp.size() == result.size() && temp < result)) result=temp;
            }

            j++;
        }
        return result;
    }
};