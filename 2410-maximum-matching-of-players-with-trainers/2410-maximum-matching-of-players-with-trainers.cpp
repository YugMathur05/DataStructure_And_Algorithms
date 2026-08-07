class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size();
        int m = trainers.size();

        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int P_Pointer = 0 , T_Pointer = 0;
        int count = 0;

        while(P_Pointer < n && T_Pointer < m)
        {
            if(players[P_Pointer] <= trainers[T_Pointer])
            {
                count++;
                T_Pointer++,P_Pointer++;
            }
            else if(players[P_Pointer] > trainers[T_Pointer])
            {
                T_Pointer++;
            }
        }
        return count;
    }
};