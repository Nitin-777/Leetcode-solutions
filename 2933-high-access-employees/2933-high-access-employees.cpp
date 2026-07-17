class Solution {
public:

           int toMinutes(string s){
              int HH= stoi(s.substr(0,2));
              int MM=stoi(s.substr(2,2));
              return HH * 60 + MM;
           }
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<string> ans;
        unordered_map<string , vector<string>> mpp;
        for(int i=0; i<access_times.size(); i++){
            mpp[access_times[i][0]].push_back(access_times[i][1]);
        }

        for(auto &it : mpp){
            vector<string>s(it.second);
            sort(s.begin(), s.end());
            for(int i=2; i<s.size(); i++){
                if(toMinutes(s[i]) - toMinutes(s[i-2]) < 60){
                    ans.push_back(it.first);
                    break;
                }
            }
        }

       
        return ans;
    }
};