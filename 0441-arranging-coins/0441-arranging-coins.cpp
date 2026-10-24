class Solution {
public:
    int arrangeCoins(int n) {
        int sum=0;
        int k=n;
       for(int i=1 ;i<=n ; i++){
        
       
        if(k<i){
            return sum;
        }
         if(k==0){
            return sum;
         }
          k=k-i;
          sum=sum+1;
       } 
       return sum;
    }
};