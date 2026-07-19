class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;

        sort(intervals.begin(),intervals.end(), [](vector<int>&a, vector<int>&b){
               if(a[0] == b[0]) return a[1]>b[1];
               return a[0] < b[0];
        });
        ans.push_back({intervals[0][0],intervals[0][1]});
        int n=intervals.size();
        if(n == 1) return ans;
        
        for(int i=1; i<n; i++){
            int ps=ans.back()[0];
            int pe=ans.back()[1];
            int cs=intervals[i][0];
            int ce=intervals[i][1];

            if(cs >= ps && cs <= pe){
                ans.pop_back();
                ans.push_back({min(cs,ps),max(pe,ce)});
            }
            else if(ce <=pe ){
                ans.pop_back();
                ans.push_back({min(cs,ps),max(pe,ce)});
            }

            else{
                ans.push_back({cs,ce});
            }
        }
        return ans;
    }
};