class Solution {
public:
    int minimumPushes(string word) {
           
           vector<int>freq(26,0);

           for(int i=0; i<word.size(); i++){
            freq[word[i] - 'a']++;
           }

           vector<int> ch;
           for(int i=0; i<26; i++){
              if(freq[i] > 0){
                 ch.push_back(freq[i]);
              }
           }
          
          sort(ch.begin(), ch.end(), greater<int>());
          int ans=0;
          int cnt=1;
          int curr=1;
          for(int i=0; i<ch.size(); i++){
               
               if(cnt > 8){
                   curr++;
                   cnt=1;
               }

               ans+=(curr * ch[i]);
               cnt++;
          }

          return ans;
         
    }
};