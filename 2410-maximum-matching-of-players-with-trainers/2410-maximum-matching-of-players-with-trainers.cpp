class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        reverse(players.begin(),players.end());
        reverse(trainers.begin(),trainers.end());
        int sum=0;
        for(int i=players.size()-1 ;i>=0 ; i--){
            for(int y=trainers.size()-1 ;y>=0 ; y--){
             if(trainers[y]>=players[i]){
                sum=sum+1;
                trainers.erase(trainers.begin()+y);
                break;
             }
            }
        }
        return sum;
    }
};