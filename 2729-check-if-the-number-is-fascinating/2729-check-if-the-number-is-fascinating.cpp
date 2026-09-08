class Solution {
public:
    bool isFascinating(int n) {
        vector<int>ans;
        int y=2*n;
        int m=3*n;
        while(n>0){
           int k=n%10;
            ans.push_back(k);
            n=n/10;
        }
        while(y>0){
         int o=y%10;
         ans.push_back(o);
         y=y/10;
        }
        while(m>0){
            int w=m%10;
            ans.push_back(w);
            m=m/10;
        }
        for(int v=0 ;v<ans.size() ;v++){
            if(ans[v]==0){
                return false;
            }
        }
        for(int z =0 ;z<ans.size() ;z++){
            for(int d=z+1 ; d<ans.size() ; d++){
                if(ans[z]==ans[d]){
                    return false;
                }
            }
        }
        return true;
    }
};