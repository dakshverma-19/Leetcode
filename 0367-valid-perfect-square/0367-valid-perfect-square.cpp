class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        if(num==2){
            return false;
        }
        for(long long i=1 ;i<=num/2 ; i++){
            if(i*i==num){
                return true;
               
            }
        }
        return false;
    }
};