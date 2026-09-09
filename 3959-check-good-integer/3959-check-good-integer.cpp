class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int ans=0;
        while(n>0){

            int k=n%10;
            sum=sum+k;
            ans=ans+(k*k);
            n=n/10;
        }
        if(ans-sum>=50){
            return true;
        }
        return false;
    }
};