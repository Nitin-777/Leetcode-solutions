class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
             vector<int>flat;
             for(int i=0; i<matrix.size(); i++){
                for(int j=0; j<matrix[0].size(); j++){
                    flat.push_back(matrix[i][j]);
                }
             }   

             int i=0, j=flat.size()-1;

             while(i <= j){
                 int mid=i + (j-i) / 2;
                 if(flat[mid] == target) return true;

                 else if(flat[mid] > target) j= mid-1;
                 else i=mid+1;
             }
             return false;
    }
};