class Solution {
public:
    bool isPowerOfTwo(int n) {
        int k;
        if(n==1){
            return true;
        }
        if(n%2!=0){
            return false;
        }
        
        while(n>1){
            k=n/2;
            n=k;
            if(n % 2 != 0 && n != 1){
                return false;
            }
            if(k==1){
                return true;
            }
        }
        return false;
    }
};