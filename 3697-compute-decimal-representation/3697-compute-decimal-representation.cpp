class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int k;
         long long m=1;
        while (n > 0) {
            
            int sum = 0;
            k = n % 10;
            sum = m *k;
            ans.push_back(sum);
            m=m*10;
            n = n / 10;
        }
        
        reverse(ans.begin(), ans.end());
        for(int q=ans.size()-1 ;q>=0 ; q--){
            if(ans[q]==0){
                ans.erase(ans.begin()+q);
            }
        }
        return ans;
    }
};