class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        
        for(int i=0 ; i<arr.size() ; i++){
            int p=INT_MIN;
            for(int j=i+1 ; j<arr.size() ; j++){
              
                p=max(p,arr[j]);

              }
            
            if(INT_MIN==p){
                ans.push_back(-1);
            }else{
            ans.push_back(p);
            }
          
        }
        return ans;
        
    }
};