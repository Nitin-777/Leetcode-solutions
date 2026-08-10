class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
         vector<pair<int,int>>vec;
         for(int i=0; i<aliceValues.size(); i++){
            int sum=aliceValues[i] + bobValues[i];
            vec.push_back({sum,i});
         }

         sort(vec.begin(), vec.end(), greater<pair<int,int>>());

         int a=0;
         int b=0;
         bool fnd= true;

         for(int i=0; i<vec.size(); i++){
            int idx=vec[i].second;
            if(fnd){
                a+=aliceValues[idx];
                fnd= !fnd;
            }
            else{
                b+=bobValues[idx];
                fnd= !fnd;
            }
         }

         if(b > a) return -1;
         else if(a > b) return 1;

         return 0;
    }
};