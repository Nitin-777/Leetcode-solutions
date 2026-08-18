class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
    int n = nums.size();

    for (int i = 0; i <= n - k; i++) {

        unordered_set<int> st;

        for (int j = i; j < i + k; j++) {
            st.insert(nums[j]);
        }

        for (int x : st) {
            mpp[x]++;
        }
    }

    int ans = -1;

    for (auto& p : mpp) {
        if (p.second == 1) {
            ans = max(ans, p.first);
        }
    }

    return ans;
}

       
        
    
};