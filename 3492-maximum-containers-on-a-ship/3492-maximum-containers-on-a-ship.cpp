class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int ans=maxWeight/w;
        int s=n*n;
        int y;
        if(ans==s || ans<s){
            return ans;
        }
       if(ans>s){
        while(ans>s){
            ans=ans-1;
        }
         y=ans;
       }
       return y;
    }
};