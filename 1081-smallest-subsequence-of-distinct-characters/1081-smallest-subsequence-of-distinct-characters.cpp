class Solution {
public:
    string smallestSubsequence(string s) {
       string m="";
       vector<bool>taken(26,false);
       vector<int>freq(26,0);
       stack<char>st;

       for(int i=0; i<s.size(); i++){
         freq[s[i] - 'a']++;
       }

       for(int i=0; i<s.size(); i++){
           char ch=s[i];
            freq[ch-'a']--;
           if(taken[ch-'a'] == false){
              if(st.empty()) st.push(ch);
              else{
                  while(!st.empty() && ch < st.top() && freq[st.top() - 'a'] > 0){
                         taken[st.top() - 'a']=false;
                          st.pop();
                  }   
                  st.push(ch);
                       
                }  
                 
              }

             
              taken[ch - 'a'] = true;  
             
           }
       

       while(!st.empty()){
          m+=st.top();
          st.pop();
       }
       reverse(m.begin(),m.end());
       return m;
       
    }
};