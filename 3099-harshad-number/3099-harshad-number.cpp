class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int t=x;
        while(x>0){
            int k=x%10;
            sum=sum+k;
            x=x/10;
        }
        if(t%sum==0){
            return sum;
        }
        return -1;
    }
};