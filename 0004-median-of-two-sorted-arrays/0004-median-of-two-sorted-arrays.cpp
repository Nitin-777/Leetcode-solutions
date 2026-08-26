class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>trial;
        int i=0, j=0;
        int n=nums1.size();
        int m=nums2.size();
        int curr=-1;
        int prev=-1;
        int d=(n+m)/2;
        while(d >= 0 && i < n && j < m){
            if(nums1[i] <= nums2[j]){
                prev=curr;
                 curr=nums1[i];
                 i++;
            }
            else {
                prev=curr;
                curr=nums2[j];
                j++;
            }
            d--;
        }
        while( i < n && d >= 0){
            prev=curr;
            curr=nums1[i];
            i++;
            d--;
        }
        while( j < m && d >= 0){
            prev=curr;
            curr=nums2[j];
            j++;
            d--;
        }
        if((n+m) % 2 == 0){
            return (double)(curr+prev)/2;
        }
        return double(curr);
    }
};