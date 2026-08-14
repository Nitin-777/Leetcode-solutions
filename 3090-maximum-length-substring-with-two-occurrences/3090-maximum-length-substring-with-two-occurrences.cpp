class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>ch(26,0);
        int ans=0;

        int i=0, j=0;
        while(j < s.size()){
            ch[s[j] - 'a']++;

            while(i < j && ch[s[j]-'a'] > 2){
                ch[s[i] - 'a']--;
                i++;
            }

            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};