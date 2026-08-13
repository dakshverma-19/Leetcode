class Solution {
public:
    long long removeZeros(long long n) {
        long long sum=0;
        while(n>0){
            long long k = n%10;
           
                
                
                if(k!=0){
                    sum=(sum*10)+k;
                   
                }
                 n=n/10;
        }
        long long h=0;
        while(sum>0){
            long long j=sum%10;
            
            h=(h*10)+j;
            sum=sum/10;
        }
        return h;
    }
};