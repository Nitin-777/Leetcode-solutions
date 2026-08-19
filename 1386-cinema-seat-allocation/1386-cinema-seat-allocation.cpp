class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,unordered_set<int>>mpp;
        int result=0;
        for(auto seats : reservedSeats){

        mpp[seats[0]].insert(seats[1]);
    }
         
         result+=(n-mpp.size()) * 2;

         for(auto [row, bookedSeat] : mpp){

            auto isAvailable= [&] (int seat){
                return bookedSeat.find(seat) == bookedSeat.end();
            };

            bool groupA= isAvailable(2) && isAvailable(3) && isAvailable(4) && isAvailable(5);
            bool groupB= isAvailable(4) && isAvailable(5) && isAvailable(6) && isAvailable(7);
            bool groupC= isAvailable(6) && isAvailable(7) && isAvailable(8) && isAvailable(9);

            if(groupA && groupC ) result+=2;
            else if (groupA || groupB || groupC) result+=1;
            }

            return result;
         }
};