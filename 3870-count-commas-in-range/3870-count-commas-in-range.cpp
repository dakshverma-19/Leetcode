class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int sum=1;
        if(n>=1000 && n<100000){
            while(n>1000){
            sum=sum+1;
            n=n-1;
            }
        }
        if(n==100000){
            return 99001;
        }
        
        return sum;
    }
};