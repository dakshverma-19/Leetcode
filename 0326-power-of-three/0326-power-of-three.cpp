class Solution {
public:
    bool isPowerOfThree(int n) {
        int k;
        if(n==1){
            return true;
        }
        if(n%3!=0){
            return false;
        }
        
        while(n>1){
            k=n/3;
            n=k;
            if(n % 3 != 0 && n != 1){
                return false;
            }
            if(k==1){
                return true;
            }
        }
        return false;
    }
};