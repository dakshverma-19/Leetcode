class Solution {
public:
    bool isSameAfterReversals(int num) {
        int real=num;
        int sum=0;
        while(num>0){
        int k=num%10;
        sum=(sum*10)+k;
        num=num/10;
        }
        int ans=0;
        while(sum>0){
            int j=sum%10;
            ans=(ans*10)+j;
            sum=sum/10;
        }
        if(real==ans){
            return true;
        }else{
            return false;
        }
    }
};