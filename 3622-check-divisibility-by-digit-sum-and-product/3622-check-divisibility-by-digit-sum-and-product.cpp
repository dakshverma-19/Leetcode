class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int ans=1;
        int real=n;
        while(n>0){
            int k=n%10;
            sum=sum+k;
            ans=ans*k;
            n=n/10;
        }
        int answer=sum+ans;
        if(real%answer==0){
            return true;
        }
        return false;
    }
};