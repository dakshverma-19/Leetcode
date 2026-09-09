class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
       int ans;
       ans=arrivalTime+delayedTime;
       if(ans<24){
        return ans;
       } 
       if(ans==24){
        return 0;
       }
       int left=ans%24;
       return left;
    }
};