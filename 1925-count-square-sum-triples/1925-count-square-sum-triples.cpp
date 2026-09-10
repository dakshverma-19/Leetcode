class Solution {
public:
    int countTriples(int n) {
        int sum=0;
       for(int i=1 ;i<=n ; i++){
        for(int y=i+1 ; y<=n ; y++){
            for(int z = y + 1; z <= n; z++) {
            if((i*i)+(y*y)==(z*z)){
                sum=sum+2;
            }
            }
        }
       } 
       return sum;
    }
};