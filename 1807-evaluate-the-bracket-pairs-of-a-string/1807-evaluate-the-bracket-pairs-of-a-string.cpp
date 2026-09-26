class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        unordered_map<string,string>mpp;
        for(int i=0; i<knowledge.size(); i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }

        for(int i=0; i<s.size(); i++){     
               string a="";
               if(s[i] == '('){
                while(s[i] != ')'){
                    if(s[i] != '(' && s[i] != ')') a+=s[i];
                    i++;
                 }
               }
                else{
                    ans+=s[i];
                }

                if(a != ""){
                    if(mpp.find(a) != mpp.end())
                    ans+=mpp[a];
                    else ans+="?";
                }
        }
        return ans;
    }
};