class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxDays=*max_element(bloomDay.begin(),bloomDay.end());

        int l=1, r=maxDays;
        int ans=INT_MAX;

        while(l <= r){
            int mid=l+(r-l)/2;
            int bq=0;
            int cnt=0; 
            for(int i=0; i<bloomDay.size(); i++){
                 if(bloomDay[i] <= mid){
                    cnt++;
                    if(cnt >= k){
                         bq++;
                         cnt=0;  
                    }
                 }
                 else{
                    cnt=0;
                 }
            }

            if(bq >= m){
                ans=min(ans,mid);
                r=mid-1;
            } 
            else{
                l=mid+1;
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};