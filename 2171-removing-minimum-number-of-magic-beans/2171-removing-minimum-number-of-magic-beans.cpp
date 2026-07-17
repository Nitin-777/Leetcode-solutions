class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long sum=0;
        int n=beans.size();
        long long maxArea=0;
        sort(beans.begin(),beans.end());

        for(int i=0; i<beans.size(); i++){
             sum+=beans[i];
             maxArea=max(maxArea, beans[i] * 1LL * (n-i));
        }
        return sum-maxArea;
    }
};