class Solution {
public:
    int minimumPushes(string word) {
           
           vector<int>freq(26,0);

           for(int i=0; i<word.size(); i++){
            freq[word[i] - 'a']++;
           }

           vector<pair<char,int>> ch;
           for(int i=0; i<26; i++){
              if(freq[i] > 0){
                 ch.push_back({ 'a' + i , freq[i]});
              }
           }
          
          sort(ch.begin(), ch.end(), [](auto &a, auto &b){
                
                return a.second > b.second;
          });
          int ans=0;
          int cnt=1;
          int curr=1;
          for(int i=0; i<ch.size(); i++){
               
               if(cnt > 8){
                   curr++;
                   cnt=1;
               }

               ans+=(curr * ch[i].second);
               cnt++;
          }

          return ans;
         
    }
};