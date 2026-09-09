class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long ans =0;
        long long sum=0;
        long long price;
        long long g=n;
        long long p=m;
        long long h=k;
        if(n>k){
            ans=(g-h)*h;
        }
        if(m>k){
            sum=(p-h)*h;
        }
        price=ans+sum;
        return price;

    }
};