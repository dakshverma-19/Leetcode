class Solution {
public:
    bool isPalindrome(int x) {
        int reversed;
        int k;
        long long  reversednum = 0;
        int j = x ;
        if(x<0) return false;
        else{
            while(x>0){
               reversed = x%10;
                x= x/10;
                reversednum = reversednum*10 + reversed;

            }
             if(reversednum == j) return true;
                else return false ;
        }
    }
};