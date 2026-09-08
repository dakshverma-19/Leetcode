class Solution {
public:
    bool isPowerOfFour(int n) {
        int k;
        if(n==1){
            return true;
        }
        if(n%4!=0){
            return false;
        }
        
        while(n>1){
            k=n/4;
            n=k;
            if(n % 4 != 0 && n != 1){
                return false;
            }
            if(k==1){
                return true;
            }
        }
        return false;
    }
};